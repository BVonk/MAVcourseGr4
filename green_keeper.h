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
 * @file "modules/green_keeper/green_keeper.h"
 * @author viktor
 * green keeper makes sure the drone  moves forward if green is in front camera
 */

#ifndef GREEN_KEEPER_H
#define GREEN_KEEPER_H
#include <inttypes.h>
#include "state.h"

extern uint8_t safeToGoForwards;
extern float incrementForAvoidance;
extern uint16_t trajectoryConfidence;
extern void green_keeper_init(void);
extern void green_keeper_periodic(void);
extern uint8_t moveWaypointForward(uint8_t, float);
extern uint8_t moveWaypoint(uint8_t, struct EnuCoor_i *);
extern uint8_t increase_nav_heading(int32_t *, float);
extern uint8_t chooseRandomIncrementAvoidance(uint32_t*, int*);

#endif

