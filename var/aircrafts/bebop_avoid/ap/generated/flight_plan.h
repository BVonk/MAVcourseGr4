/* This file has been generated by gen_flight_plan from /home/bart/paparazzi/conf/flight_plans/TUDELFT/tudelft_course2017_avoid_orange_cyberzoo.xml */
/* Version v5.11_devel-none-gbfcf671 */
/* Please DO NOT EDIT */

#ifndef FLIGHT_PLAN_H
#define FLIGHT_PLAN_H

#include "std.h"
#include "generated/modules.h"
    #include "subsystems/datalink/datalink.h"
    #include "subsystems/electrical.h"
    #include "subsystems/radio_control.h"
    #include "subsystems/ahrs.h"
#define FLIGHT_PLAN_NAME "Bebop avoid orange TU Delft Cyberzoo"
#define NAV_UTM_EAST0 594533
#define NAV_UTM_NORTH0 5760890
#define NAV_UTM_ZONE0 31
#define NAV_LAT0 519906223 /* 1e7deg */
#define NAV_LON0 43767678 /* 1e7deg */
#define NAV_ALT0 0 /* mm above msl */
#define NAV_MSL0 45110 /* mm, EGM96 geoid-height (msl) over ellipsoid */
#define QFU 0.0
#define WP_dummy 0
#define WP_HOME 1
#define WP_CLIMB 2
#define WP_STDBY 3
#define WP_TD 4
#define WP_GOAL 5
#define WP_TRAJECTORY 6
#define WP__CZ1 7
#define WP__CZ2 8
#define WP__CZ3 9
#define WP__CZ4 10
#define WP__OZ1 11
#define WP__OZ2 12
#define WP__OZ3 13
#define WP__OZ4 14
#define WAYPOINTS_UTM { \
 {42.0, 42.0, 1.0},\
 {1.9, 1.0, 1.0},\
 {1.9, 1.0, 1.0},\
 {1.9, 1.0, 1.0},\
 {0.8, -1.7, 1.0},\
 {1.9, 1.0, 1.0},\
 {1.9, 1.0, 1.0},\
 {0.4, -4.3, 1.0},\
 {-3.7, 1.5, 1.0},\
 {2.4, 6.5, 1.0},\
 {7.0, 0.1, 1.0},\
 {0.6, -3.1, 1.0},\
 {-2.4, 1.5, 1.0},\
 {2.5, 5.5, 1.0},\
 {5.8, 0.3, 1.0},\
};
#define WAYPOINTS_ENU { \
 {42.80, 41.21, 1.00}, /* ENU in meters  */ \
 {1.94, 0.95, 1.00}, /* ENU in meters  */ \
 {1.92, 0.96, 1.00}, /* ENU in meters  */ \
 {1.92, 0.96, 1.00}, /* ENU in meters  */ \
 {0.77, -1.72, 1.00}, /* ENU in meters  */ \
 {1.92, 0.96, 1.00}, /* ENU in meters  */ \
 {1.92, 0.96, 1.00}, /* ENU in meters  */ \
 {0.35, -4.32, 1.00}, /* ENU in meters  */ \
 {-3.71, 1.57, 1.00}, /* ENU in meters  */ \
 {2.55, 6.40, 1.00}, /* ENU in meters  */ \
 {7.01, 0.02, 1.00}, /* ENU in meters  */ \
 {0.56, -3.16, 1.00}, /* ENU in meters  */ \
 {-2.39, 1.52, 1.00}, /* ENU in meters  */ \
 {2.62, 5.40, 1.00}, /* ENU in meters  */ \
 {5.79, 0.18, 1.00}, /* ENU in meters  */ \
};
#define WAYPOINTS_LLA { \
 {.lat=519909927, .lon=43773908, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906309, .lon=43767960, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906310, .lon=43767957, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906310, .lon=43767957, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906069, .lon=43767789, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906310, .lon=43767957, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906310, .lon=43767957, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519905835, .lon=43767728, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906365, .lon=43767137, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906799, .lon=43768049, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906225, .lon=43768699, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519905939, .lon=43767759, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906360, .lon=43767329, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906709, .lon=43768059, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
 {.lat=519906240, .lon=43768520, .alt=1000}, /* 1e7deg, 1e7deg, mm (above NAV_MSL0, local msl=45.11m) */ \
};
#define WAYPOINTS_LLA_WGS84 { \
 {.lat=519909927, .lon=43773908, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906309, .lon=43767960, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906310, .lon=43767957, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906310, .lon=43767957, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906069, .lon=43767789, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906310, .lon=43767957, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906310, .lon=43767957, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519905835, .lon=43767728, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906365, .lon=43767137, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906799, .lon=43768049, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906225, .lon=43768699, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519905939, .lon=43767759, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906360, .lon=43767329, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906709, .lon=43768059, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
 {.lat=519906240, .lon=43768520, .alt=46110}, /* 1e7deg, 1e7deg, mm (above WGS84 ref ellipsoid) */ \
};
#define WAYPOINTS_GLOBAL { \
 FALSE, \
 TRUE, \
 FALSE, \
 FALSE, \
 FALSE, \
 FALSE, \
 FALSE, \
 TRUE, \
 TRUE, \
 TRUE, \
 TRUE, \
 TRUE, \
 TRUE, \
 TRUE, \
 TRUE, \
};
#define NB_WAYPOINT 15
#define FP_BLOCKS { \
 "Wait GPS" , \
 "Geo init" , \
 "Holding point" , \
 "Start Engine" , \
 "Takeoff" , \
 "Standby" , \
 "START" , \
 "StayGoal" , \
 "PrepareObstacleRun" , \
 "GetIntoObstacleZone" , \
 "Land here" , \
 "Land" , \
 "Flare" , \
 "Landed" , \
 "HOME" , \
}
#define NB_BLOCK 15
#define GROUND_ALT 0.
#define GROUND_ALT_CM 0
#define SECURITY_HEIGHT 0.4
#define SECURITY_ALT 0.4
#define HOME_MODE_HEIGHT 0.4
#define MAX_DIST_FROM_HOME 8.


#ifdef NAV_C


static inline bool InsideCyberZoo(float _x, float _y) {
  if (_y <= 1.5) {
    if (_y <= 0.1) {
      if (_y <= -4.3) {
        return FALSE;
      } else {
        float dy = _y - 0.1;
        return (-2.8+dy*-0.717728<= _x && _x <= 7.0+dy*1.475336);
      }
    } else {
      float dy = _y - 1.5;
      return (-3.7+dy*-0.717728<= _x && _x <= 6.0+dy*-0.726984);
    }
  } else {
    if (_y <= 6.5) {
      float dy = _y - 6.5;
      return (2.4+dy*1.246465<= _x && _x <= 2.4+dy*-0.726984);
    } else {
      return FALSE;
    }
  }
}
static inline bool InsideObstacleZone(float _x, float _y) {
  if (_y <= 1.5) {
    if (_y <= 0.3) {
      if (_y <= -3.1) {
        return FALSE;
      } else {
        float dy = _y - 0.3;
        return (-1.6+dy*-0.658009<= _x && _x <= 5.8+dy*1.500000);
      }
    } else {
      float dy = _y - 1.5;
      return (-2.4+dy*-0.658009<= _x && _x <= 5.0+dy*-0.631783);
    }
  } else {
    if (_y <= 5.5) {
      float dy = _y - 5.5;
      return (2.5+dy*1.241206<= _x && _x <= 2.5+dy*-0.631783);
    } else {
      return FALSE;
    }
  }
}

static inline void auto_nav(void) {
  if ((nav_block != 5) && ((((radio_control.status==RC_REALLY_LOST)&&!((2>nav_block)))&&!((nav_block>=10)))&&(autopilot_in_flight==true))) { GotoBlock(5); return; }
  if ((nav_block != 10) && ((((datalink_time>2)&&!((2>nav_block)))&&!((nav_block>=10)))&&(autopilot_in_flight==true))) { GotoBlock(10); return; }
  if ((nav_block != 10) && (((!(InsideCyberZoo(GetPosX(),GetPosY()))&&!((2>nav_block)))&&!((nav_block>=10)))&&(autopilot_in_flight==true))) { GotoBlock(10); return; }
  if ((nav_block != 10) && ((((GetPosAlt()>3.500000)&&!((2>nav_block)))&&!((nav_block>=10)))&&(autopilot_in_flight==true))) { GotoBlock(10); return; }
  if ((nav_block != 13) && (((GetPosAlt()>4.500000)&&!((2>nav_block)))&&(autopilot_in_flight==true))) { GotoBlock(13); return; }
  if ((nav_block != 10) && (((electrical.bat_low&&!((2>nav_block)))&&!((nav_block>=10)))&&(autopilot_in_flight==true))) { GotoBlock(10); return; }
  if ((nav_block != 10) && (((electrical.bat_critical&&!((2>nav_block)))&&!((nav_block>=10)))&&(autopilot_in_flight==true))) { GotoBlock(10); return; }
  switch (nav_block) {
    Block(0) // Wait GPS
    switch(nav_stage) {
      Stage(0)
        NavKillThrottle();
        NextStage();
      Label(while_1)
      Stage(1)
        if (! (!(GpsFixValid()))) Goto(endwhile_2) else NextStageAndBreak();
        Stage(2)
          Goto(while_1)
        Label(endwhile_2)
      default:
      Stage(3)
        NextBlock();
        break;
    }
    break;

    Block(1) // Geo init
    switch(nav_stage) {
      Label(while_3)
      Stage(0)
        if (! (LessThan(NavBlockTime(),2))) Goto(endwhile_4) else NextStageAndBreak();
        Stage(1)
          Goto(while_3)
        Label(endwhile_4)
      Stage(2)
        NavSetAltitudeReferenceHere();
        NextStage();
      default:
      Stage(3)
        NextBlock();
        break;
    }
    break;

    Block(2) // Holding point
    switch(nav_stage) {
      Stage(0)
        NavKillThrottle();
        NextStage();
      Stage(1)
        NavAttitude(RadOfDeg(0));
        NavVerticalAutoThrottleMode(RadOfDeg(0));
        NavVerticalThrottleMode(9600*(0));
        if (FALSE) {
          NextStageAndBreak()
        }
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(3) // Start Engine
    switch(nav_stage) {
      Stage(0)
        NavResurrect();
        NextStage();
      Stage(1)
        NavAttitude(RadOfDeg(0));
        NavVerticalAutoThrottleMode(RadOfDeg(0));
        NavVerticalThrottleMode(9600*(0));
        if (FALSE) {
          NextStageAndBreak()
        }
        break;
      Stage(2)
        NavResurrect();
        NextStage();
      default:
      Stage(3)
        NextBlock();
        break;
    }
    break;

    Block(4) // Takeoff
    if ((nav_block != 5) && (GetPosAlt()>1.000000)) { GotoBlock(5); return; }
    switch(nav_stage) {
      Stage(0)
        NavSetWaypointHere(WP_CLIMB);
        NextStage();
      Stage(1)
        NavGotoWaypoint(2);
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalClimbMode(nav_climb_vspeed);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(5) // Standby
    switch(nav_stage) {
      Stage(0)
        NavSetWaypointHere(WP_STDBY);
        NextStage();
      Stage(1)
        NavGotoWaypoint(3);
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(3), 0.);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(6) // START
    switch(nav_stage) {
      Stage(0)
        NavSetWaypointHere(WP_GOAL);
        NextStage();
      Stage(1)
        trajectoryConfidence = 1;
        NextStage();
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(7) // StayGoal
    if ((nav_block != 8) && !(InsideObstacleZone(WaypointX(WP_TRAJECTORY),WaypointY(WP_TRAJECTORY)))) { GotoBlock(8); return; }
    switch(nav_stage) {
      Stage(0)
        NavGotoWaypoint(5);
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(5), 0.);
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    break;

    Block(8) // PrepareObstacleRun
    switch(nav_stage) {
      Label(while_5)
      Stage(0)
        if (! (!(InsideObstacleZone(WaypointX(WP_TRAJECTORY),WaypointY(WP_TRAJECTORY))))) Goto(endwhile_6) else NextStageAndBreak();
        Stage(1)
          increase_nav_heading(&nav_heading, 5);
          NextStage();
        Stage(2)
          Goto(while_5)
        Label(endwhile_6)
      default:
      Stage(3)
        NextBlock();
        break;
    }
    break;

    Block(9) // GetIntoObstacleZone
    switch(nav_stage) {
      Label(while_7)
      Stage(0)
        if (! (!(InsideObstacleZone(GetPosX(),GetPosY())))) Goto(endwhile_8) else NextStageAndBreak();
        Stage(1)
          moveWaypointForward(WP_GOAL, 0.1);
          NextStage();
        Stage(2)
          if (NavApproaching(5,CARROT)) {
            NextStageAndBreakFrom(5);
          } else {
            NavGotoWaypoint(5);
            NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
            NavVerticalAltitudeMode(WaypointAlt(5), 0.);
          }
          break;
        Stage(3)
          Goto(while_7)
        Label(endwhile_8)
      Stage(4)
        GotoBlock(6);
        break;
      default:
      Stage(5)
        NextBlock();
        break;
    }
    break;

    Block(10) // Land here
    switch(nav_stage) {
      Stage(0)
        NavSetWaypointHere(WP_TD);
        NextStage();
      Stage(1)
        if (NavApproaching(4,CARROT)) {
          NextStageAndBreakFrom(4);
        } else {
          NavGotoWaypoint(4);
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalAltitudeMode(WaypointAlt(4), 0.);
        }
        break;
      Stage(2)
        GotoBlock(12);
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    break;

    Block(11) // Land
    switch(nav_stage) {
      Stage(0)
        if (NavApproaching(4,CARROT)) {
          NextStageAndBreakFrom(4);
        } else {
          NavGotoWaypoint(4);
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalAltitudeMode(WaypointAlt(4), 0.);
        }
        break;
      Stage(1)
        GotoBlock(12);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(12) // Flare
    if ((nav_block != 2) && NavDetectGround()) { GotoBlock(2); return; }
    if ((nav_block != 13) && !(nav_is_in_flight())) { GotoBlock(13); return; }
    if ((nav_block != 13) && (0.100000>GetPosAlt())) { GotoBlock(13); return; }
    switch(nav_stage) {
      Stage(0)
        NavStartDetectGround();
        NextStage();
      Stage(1)
        NavGotoWaypoint(4);
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalClimbMode(nav_descend_vspeed);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(13) // Landed
    switch(nav_stage) {
      Stage(0)
        NavKillThrottle();
        NextStage();
      Stage(1)
        NavAttitude(RadOfDeg(0));
        NavVerticalAutoThrottleMode(RadOfDeg(0));
        NavVerticalThrottleMode(9600*(0));
        if (FALSE) {
          NextStageAndBreak()
        }
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    break;

    Block(14) // HOME
    switch(nav_stage) {
      Stage(0)
        nav_home();
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    break;

    default: break;
  }
}
#endif // NAV_C

#endif // FLIGHT_PLAN_H
