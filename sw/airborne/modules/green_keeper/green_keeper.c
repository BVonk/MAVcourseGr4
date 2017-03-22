/*
 * Copyright (C) viktor
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/green_keeper/green_keeper.c"
 * @author viktor
 * green keeper makes sure the drone moves forward if green is in front camera
 */

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "firmwares/rotorcraft/navigation.h"

#include "generated/flight_plan.h"
#include "modules/computer_vision/colorfilter.h"
#include "modules/green_keeper/green_keeper.h"

#define GREEN_KEEPER_VERBOSE TRUE

#define PRINT(string,...) fprintf(stderr, "[green_keeper->%s()] " string,__FUNCTION__ , ##__VA_ARGS__)
#if GREEN_KEEPER_VERBOSE
#define VERBOSE_PRINT PRINT
#else
#define VERBOSE_PRINT(...)
#endif

uint8_t safeToGoForwards        = FALSE;
int tresholdColorCount          = 0.5 * 0.80 * 124800; // 520 x 240 = 124.800 total pixels
float incrementForAvoidance;
uint16_t trajectoryConfidence   = 1;
float maxDistance               = 2.25;

/*
 * Initialisation function, setting the colour filter, random seed and incrementForAvoidance
 */
void green_keeper_init()
{
  // Initialise the variables of the colorfilter to accept GREEN, http://www.niwa.nu/2013/05/understanding-yuv-values/ is used to determine values for cb and cr for green (test these values!), while luminance is not changed with respect to initial values for orange.
  
uint8_t color_lum_min = 5; // was 105
uint8_t color_lum_max = 101; // was 205
uint8_t color_cb_min  = 8; // 52
uint8_t color_cb_max  = 105; // 140
uint8_t color_cr_min  = 136; // 180
uint8_t color_cr_max  = 152; // 255
 

  // Initialise random values
  srand(time(NULL));
  chooseRandomIncrementAvoidance();
}

/*
 * Function that checks it is safe to move forwards, and then moves a waypoint forward or changes the heading
 */
void green_keeper_periodic()
{
  // Check the amount of green. If this is below a threshold
  // you want to turn a certain amount of degrees
  safeToGoForwards = color_count > tresholdColorCount;
  VERBOSE_PRINT("Color_count: %d  threshold: %d safe: %d \n", color_count, tresholdColorCount, safeToGoForwards);
  VERBOSE_PRINT("cnt1= %d   cnt2 = %d   cnt3 = %d \n", col_count[0], col_count[1], col_count[2]);
  float moveDistance = fmin(maxDistance, 0.05 * trajectoryConfidence);
  if(safeToGoForwards){
      moveWaypointForward(WP_GOAL, moveDistance);
      moveWaypointForward(WP_TRAJECTORY, 1.25 * moveDistance);
      nav_set_heading_towards_waypoint(WP_GOAL);
      chooseRandomIncrementAvoidance();
      trajectoryConfidence += 1;
  }
  else{
      waypoint_set_here_2d(WP_GOAL);
      waypoint_set_here_2d(WP_TRAJECTORY);
      increase_nav_heading(&nav_heading, incrementForAvoidance);
      if(trajectoryConfidence > 5){
          trajectoryConfidence -= 4;
      }
      else{
          trajectoryConfidence = 1;
      }
  }
  return;
}

/*
 * Increases the NAV heading. Assumes heading is an INT32_ANGLE. It is bound in this function.
 */
uint8_t increase_nav_heading(int32_t *heading, float incrementDegrees)
{
  struct Int32Eulers *eulerAngles   = stateGetNedToBodyEulers_i();
  int32_t newHeading = eulerAngles->psi + ANGLE_BFP_OF_REAL( incrementDegrees / 180.0 * M_PI);
  // Check if your turn made it go out of bounds...
  INT32_ANGLE_NORMALIZE(newHeading); // HEADING HAS INT32_ANGLE_FRAC....
  *heading = newHeading;
  VERBOSE_PRINT("Increasing heading to %f\n", ANGLE_FLOAT_OF_BFP(*heading) * 180 / M_PI);
  return false;
}

/*
 * Calculates coordinates of a distance of 'distanceMeters' forward w.r.t. current position and heading
 */
uint8_t calculateForwards(struct EnuCoor_i *new_coor, float distanceMeters)
{
  struct EnuCoor_i *pos             = stateGetPositionEnu_i(); // Get your current position
  struct Int32Eulers *eulerAngles   = stateGetNedToBodyEulers_i();
  // Calculate the sine and cosine of the heading the drone is keeping
  float sin_heading                 = sinf(ANGLE_FLOAT_OF_BFP(eulerAngles->psi));
  float cos_heading                 = cosf(ANGLE_FLOAT_OF_BFP(eulerAngles->psi));
  // Now determine where to place the waypoint you want to go to
  new_coor->x                       = pos->x + POS_BFP_OF_REAL(sin_heading * (distanceMeters));
  new_coor->y                       = pos->y + POS_BFP_OF_REAL(cos_heading * (distanceMeters));
  VERBOSE_PRINT("Calculated %f m forward position. x: %f  y: %f based on pos(%f, %f) and heading(%f)\n", distanceMeters, POS_FLOAT_OF_BFP(new_coor->x), POS_FLOAT_OF_BFP(new_coor->y), POS_FLOAT_OF_BFP(pos->x), POS_FLOAT_OF_BFP(pos->y), ANGLE_FLOAT_OF_BFP(eulerAngles->psi)*180/M_PI);
  return FALSE;
}

/*
 * Sets waypoint 'waypoint' to the coordinates of 'new_coor'
 */
uint8_t moveWaypoint(uint8_t waypoint, struct EnuCoor_i *new_coor)
{
  VERBOSE_PRINT("Moving waypoint %d to x:%f y:%f\n", waypoint, POS_FLOAT_OF_BFP(new_coor->x), POS_FLOAT_OF_BFP(new_coor->y));
  waypoint_set_xy_i(waypoint, new_coor->x, new_coor->y);
  return FALSE;
}

/*
 * Calculates coordinates of distance forward and sets waypoint 'waypoint' to those coordinates
 */
uint8_t moveWaypointForward(uint8_t waypoint, float distanceMeters)
{
  struct EnuCoor_i new_coor;
  calculateForwards(&new_coor, distanceMeters);
  moveWaypoint(waypoint, &new_coor);
  return FALSE;
}

/*
 * Sets the variable 'incrementForAvoidance' randomly positive/negative
 */
uint8_t chooseRandomIncrementAvoidance()
{
  // Choose CW or CCW avoiding direction depending on amount of green pixels in each column of col
  if (col_count[2] > col_count[1]) { // if more green pixels are in the right column, yaw clockwise
    incrementForAvoidance = 20.0;
    VERBOSE_PRINT("Set avoidance increment to: %f\n", incrementForAvoidance);
  } else if(col_count[0] < col_count[1]){ // if more green pixels are in the left column, yaw counter clockwise
    incrementForAvoidance = -20.0;
    VERBOSE_PRINT("Set avoidance increment to: %f\n", incrementForAvoidance);
  }
  return FALSE;
}
