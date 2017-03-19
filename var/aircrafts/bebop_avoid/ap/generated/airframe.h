/* This file has been generated from /home/bart/paparazzi/conf/airframes/TUDELFT/tudelft_course2017_bebop1_avoider.xml */
/* Version v5.11_devel-none-gbfcf671 */
/* Please DO NOT EDIT */

#ifndef AIRFRAME_H
#define AIRFRAME_H

#define AIRFRAME_NAME "bebop_avoid"
#define AC_ID 42
#define MD5SUM ((uint8_t*)"\005\117\277\220\100\221\051\251\327\112\365\117\070\060\060\027")

#define COMMAND_PITCH 0
#define COMMAND_ROLL 1
#define COMMAND_YAW 2
#define COMMAND_THRUST 3
#define COMMANDS_NB 4
#define COMMANDS_FAILSAFE {0,0,0,6000}


#define SERVOS_DEFAULT_NB 4
#include "subsystems/actuators/actuators_default.h"

#define SERVO_TOP_LEFT 0
#define SERVO_TOP_LEFT_NEUTRAL 3000
#define SERVO_TOP_LEFT_TRAVEL_UP 0.708333333333
#define SERVO_TOP_LEFT_TRAVEL_UP_NUM 17
#define SERVO_TOP_LEFT_TRAVEL_UP_DEN 24
#define SERVO_TOP_LEFT_TRAVEL_DOWN 0
#define SERVO_TOP_LEFT_TRAVEL_DOWN_NUM 0
#define SERVO_TOP_LEFT_TRAVEL_DOWN_DEN 1
#define SERVO_TOP_LEFT_MAX 9800
#define SERVO_TOP_LEFT_MIN 3000

#define SERVO_TOP_RIGHT 1
#define SERVO_TOP_RIGHT_NEUTRAL 3000
#define SERVO_TOP_RIGHT_TRAVEL_UP 0.708333333333
#define SERVO_TOP_RIGHT_TRAVEL_UP_NUM 17
#define SERVO_TOP_RIGHT_TRAVEL_UP_DEN 24
#define SERVO_TOP_RIGHT_TRAVEL_DOWN 0
#define SERVO_TOP_RIGHT_TRAVEL_DOWN_NUM 0
#define SERVO_TOP_RIGHT_TRAVEL_DOWN_DEN 1
#define SERVO_TOP_RIGHT_MAX 9800
#define SERVO_TOP_RIGHT_MIN 3000

#define SERVO_BOTTOM_RIGHT 2
#define SERVO_BOTTOM_RIGHT_NEUTRAL 3000
#define SERVO_BOTTOM_RIGHT_TRAVEL_UP 0.708333333333
#define SERVO_BOTTOM_RIGHT_TRAVEL_UP_NUM 17
#define SERVO_BOTTOM_RIGHT_TRAVEL_UP_DEN 24
#define SERVO_BOTTOM_RIGHT_TRAVEL_DOWN 0
#define SERVO_BOTTOM_RIGHT_TRAVEL_DOWN_NUM 0
#define SERVO_BOTTOM_RIGHT_TRAVEL_DOWN_DEN 1
#define SERVO_BOTTOM_RIGHT_MAX 9800
#define SERVO_BOTTOM_RIGHT_MIN 3000

#define SERVO_BOTTOM_LEFT 3
#define SERVO_BOTTOM_LEFT_NEUTRAL 3000
#define SERVO_BOTTOM_LEFT_TRAVEL_UP 0.708333333333
#define SERVO_BOTTOM_LEFT_TRAVEL_UP_NUM 17
#define SERVO_BOTTOM_LEFT_TRAVEL_UP_DEN 24
#define SERVO_BOTTOM_LEFT_TRAVEL_DOWN 0
#define SERVO_BOTTOM_LEFT_TRAVEL_DOWN_NUM 0
#define SERVO_BOTTOM_LEFT_TRAVEL_DOWN_DEN 1
#define SERVO_BOTTOM_LEFT_MAX 9800
#define SERVO_BOTTOM_LEFT_MIN 3000

static inline int get_servo_min(int _idx) {
  switch (_idx) {
    case SERVO_TOP_LEFT: return SERVO_TOP_LEFT_MIN;
    case SERVO_TOP_RIGHT: return SERVO_TOP_RIGHT_MIN;
    case SERVO_BOTTOM_RIGHT: return SERVO_BOTTOM_RIGHT_MIN;
    case SERVO_BOTTOM_LEFT: return SERVO_BOTTOM_LEFT_MIN;
    default: return 0;
  };
}

static inline int get_servo_max(int _idx) {
  switch (_idx) {
    case SERVO_TOP_LEFT: return SERVO_TOP_LEFT_MAX;
    case SERVO_TOP_RIGHT: return SERVO_TOP_RIGHT_MAX;
    case SERVO_BOTTOM_RIGHT: return SERVO_BOTTOM_RIGHT_MAX;
    case SERVO_BOTTOM_LEFT: return SERVO_BOTTOM_LEFT_MAX;
    default: return 0;
  };
}


#define SERVO_TOP_LEFT_IDX 0
#define Set_TOP_LEFT_Servo(_v) { \
  actuators[SERVO_TOP_LEFT_IDX] = Chop(_v, SERVO_TOP_LEFT_MIN, SERVO_TOP_LEFT_MAX); \
  ActuatorDefaultSet(SERVO_TOP_LEFT, actuators[SERVO_TOP_LEFT_IDX]); \
}

#define SERVO_BOTTOM_RIGHT_IDX 2
#define Set_BOTTOM_RIGHT_Servo(_v) { \
  actuators[SERVO_BOTTOM_RIGHT_IDX] = Chop(_v, SERVO_BOTTOM_RIGHT_MIN, SERVO_BOTTOM_RIGHT_MAX); \
  ActuatorDefaultSet(SERVO_BOTTOM_RIGHT, actuators[SERVO_BOTTOM_RIGHT_IDX]); \
}

#define SERVO_TOP_RIGHT_IDX 1
#define Set_TOP_RIGHT_Servo(_v) { \
  actuators[SERVO_TOP_RIGHT_IDX] = Chop(_v, SERVO_TOP_RIGHT_MIN, SERVO_TOP_RIGHT_MAX); \
  ActuatorDefaultSet(SERVO_TOP_RIGHT, actuators[SERVO_TOP_RIGHT_IDX]); \
}

#define SERVO_BOTTOM_LEFT_IDX 3
#define Set_BOTTOM_LEFT_Servo(_v) { \
  actuators[SERVO_BOTTOM_LEFT_IDX] = Chop(_v, SERVO_BOTTOM_LEFT_MIN, SERVO_BOTTOM_LEFT_MAX); \
  ActuatorDefaultSet(SERVO_BOTTOM_LEFT, actuators[SERVO_BOTTOM_LEFT_IDX]); \
}

#define ACTUATORS_NB 4

#define AllActuatorsInit() { \
  ActuatorsDefaultInit();\
}

#define AllActuatorsCommit() { \
  ActuatorsDefaultCommit();\
}

#define SetActuatorsFromCommands(values, AP_MODE) { \
  int32_t servo_value;\
  int32_t command_value;\
\
  command_value = autopilot_motors_on ? actuators_pprz[0] : -MAX_PPRZ; \
  command_value *= command_value>0 ? SERVO_TOP_LEFT_TRAVEL_UP_NUM : SERVO_TOP_LEFT_TRAVEL_DOWN_NUM; \
  command_value /= command_value>0 ? SERVO_TOP_LEFT_TRAVEL_UP_DEN : SERVO_TOP_LEFT_TRAVEL_DOWN_DEN; \
  servo_value = SERVO_TOP_LEFT_NEUTRAL + command_value; \
  Set_TOP_LEFT_Servo(servo_value); \
\
  command_value = autopilot_motors_on ? actuators_pprz[1] : -MAX_PPRZ; \
  command_value *= command_value>0 ? SERVO_TOP_RIGHT_TRAVEL_UP_NUM : SERVO_TOP_RIGHT_TRAVEL_DOWN_NUM; \
  command_value /= command_value>0 ? SERVO_TOP_RIGHT_TRAVEL_UP_DEN : SERVO_TOP_RIGHT_TRAVEL_DOWN_DEN; \
  servo_value = SERVO_TOP_RIGHT_NEUTRAL + command_value; \
  Set_TOP_RIGHT_Servo(servo_value); \
\
  command_value = autopilot_motors_on ? actuators_pprz[2] : -MAX_PPRZ; \
  command_value *= command_value>0 ? SERVO_BOTTOM_RIGHT_TRAVEL_UP_NUM : SERVO_BOTTOM_RIGHT_TRAVEL_DOWN_NUM; \
  command_value /= command_value>0 ? SERVO_BOTTOM_RIGHT_TRAVEL_UP_DEN : SERVO_BOTTOM_RIGHT_TRAVEL_DOWN_DEN; \
  servo_value = SERVO_BOTTOM_RIGHT_NEUTRAL + command_value; \
  Set_BOTTOM_RIGHT_Servo(servo_value); \
\
  command_value = autopilot_motors_on ? actuators_pprz[3] : -MAX_PPRZ; \
  command_value *= command_value>0 ? SERVO_BOTTOM_LEFT_TRAVEL_UP_NUM : SERVO_BOTTOM_LEFT_TRAVEL_DOWN_NUM; \
  command_value /= command_value>0 ? SERVO_BOTTOM_LEFT_TRAVEL_UP_DEN : SERVO_BOTTOM_LEFT_TRAVEL_DOWN_DEN; \
  servo_value = SERVO_BOTTOM_LEFT_NEUTRAL + command_value; \
  Set_BOTTOM_LEFT_Servo(servo_value); \
\
  AllActuatorsCommit(); \
}

#define SECTION_AIR_DATA 1
#define AIR_DATA_CALC_AIRSPEED FALSE
#define AIR_DATA_CALC_TAS_FACTOR FALSE
#define AIR_DATA_CALC_AMSL_BARO TRUE

#define SECTION_IMU 1
#define IMU_BODY_TO_IMU_PHI 0.
#define IMU_BODY_TO_IMU_THETA 0.
#define IMU_BODY_TO_IMU_PSI 0.

#define SECTION_AHRS 1
#define AHRS_HEADING_UPDATE_GPS_MIN_SPEED 0
#define AHRS_GRAVITY_HEURISTIC_FACTOR 0
#define AHRS_H_X 0.3892503
#define AHRS_H_Y 0.0017972
#define AHRS_H_Z 0.9211303

#define SECTION_INS 1
#define INS_SONAR_MAX_RANGE 2.2
#define INS_SONAR_UPDATE_ON_AGL TRUE
#define INS_USE_GPS_ALT 1
#define INS_VFF_R_GPS 0.01

#define SECTION_RC_SETPOINT 1
#define STABILIZATION_ATTITUDE_SP_MAX_PHI 0.7853981625
#define STABILIZATION_ATTITUDE_SP_MAX_THETA 0.7853981625
#define STABILIZATION_ATTITUDE_SP_MAX_R 2.0943951
#define STABILIZATION_ATTITUDE_DEADBAND_A 0
#define STABILIZATION_ATTITUDE_DEADBAND_E 0
#define STABILIZATION_ATTITUDE_DEADBAND_R 50

#define SECTION_ATTITUDE_REFERENCE 1
#define STABILIZATION_ATTITUDE_REF_OMEGA_P 7.853981625
#define STABILIZATION_ATTITUDE_REF_ZETA_P 0.9
#define STABILIZATION_ATTITUDE_REF_MAX_P 10.4719755
#define STABILIZATION_ATTITUDE_REF_MAX_PDOT RadOfDeg(8000.)
#define STABILIZATION_ATTITUDE_REF_OMEGA_Q 7.853981625
#define STABILIZATION_ATTITUDE_REF_ZETA_Q 0.9
#define STABILIZATION_ATTITUDE_REF_MAX_Q 10.4719755
#define STABILIZATION_ATTITUDE_REF_MAX_QDOT RadOfDeg(8000.)
#define STABILIZATION_ATTITUDE_REF_OMEGA_R 7.853981625
#define STABILIZATION_ATTITUDE_REF_ZETA_R 0.9
#define STABILIZATION_ATTITUDE_REF_MAX_R 10.4719755
#define STABILIZATION_ATTITUDE_REF_MAX_RDOT RadOfDeg(8000.)

#define SECTION_STABILIZATION_ATTITUDE_INDI 1
#define STABILIZATION_INDI_G1_ROLL {20 , -20, -20 , 20 }
#define STABILIZATION_INDI_G1_PITCH {14 , 14, -14 , -14 }
#define STABILIZATION_INDI_G1_YAW {-1, 1, -1, 1}
#define STABILIZATION_INDI_G1_THRUST {-.4, -.4, -.4, -.4}
#define STABILIZATION_INDI_G2 {-61.2093,   65.3670,  -65.7419,   65.4516}
#define STABILIZATION_INDI_REF_ERR_P 600.0
#define STABILIZATION_INDI_REF_ERR_Q 600.0
#define STABILIZATION_INDI_REF_ERR_R 600.0
#define STABILIZATION_INDI_REF_RATE_P 28.0
#define STABILIZATION_INDI_REF_RATE_Q 28.0
#define STABILIZATION_INDI_REF_RATE_R 28.0
#define STABILIZATION_INDI_MAX_R 2.0943951
#define STABILIZATION_INDI_ESTIMATION_FILT_CUTOFF 4.0
#define STABILIZATION_INDI_FILT_CUTOFF 5.0
#define STABILIZATION_INDI_ACT_DYN 0.1
#define STABILIZATION_INDI_USE_ADAPTIVE TRUE
#define STABILIZATION_INDI_ADAPTIVE_MU 0.0001

#define SECTION_GUIDANCE_V 1
#define GUIDANCE_V_HOVER_KP 283
#define GUIDANCE_V_HOVER_KD 82
#define GUIDANCE_V_HOVER_KI 20
#define GUIDANCE_V_NOMINAL_HOVER_THROTTLE 0.68
#define GUIDANCE_V_ADAPT_THROTTLE_ENABLED TRUE
#define GUIDANCE_V_ADAPT_INITIAL_HOVER_THROTTLE 0.68
#define GUIDANCE_V_ADAPT_MIN_HOVER_THROTTLE 0.55
#define GUIDANCE_V_ADAPT_MAX_HOVER_THROTTLE 0.72

#define SECTION_GUIDANCE_H 1
#define GUIDANCE_H_MAX_BANK 0.34906585
#define GUIDANCE_H_REF_MAX_SPEED 2
#define GUIDANCE_H_PGAIN 120
#define GUIDANCE_H_DGAIN 230
#define GUIDANCE_H_IGAIN 40

#define SECTION_NAVIGATION 1
#define NAV_CLIMB_VSPEED 1.0
#define NAV_DESCEND_VSPEED -0.75

#define SECTION_SIMULATOR 1
#define NPS_ACTUATOR_NAMES { "nw_motor" , "ne_motor" , "se_motor" , "sw_motor" }
#define NPS_JSBSIM_MODEL "simple_x_quad_ccw"
#define NPS_SENSORS_PARAMS "nps_sensors_params_default.h"

#define SECTION_AUTOPILOT 1
#define MODE_STARTUP AP_MODE_NAV
#define MODE_MANUAL AP_MODE_ATTITUDE_DIRECT
#define MODE_AUTO1 AP_MODE_ATTITUDE_Z_HOLD
#define MODE_AUTO2 AP_MODE_NAV
#define NO_RC_THRUST_LIMIT TRUE

#define SECTION_BAT 1
#define MILLIAMP_AT_FULL_THROTTLE 8700
#define CATASTROPHIC_BAT_LEVEL 9.9
#define CRITIC_BAT_LEVEL 10.8
#define LOW_BAT_LEVEL 11.1
#define MAX_BAT_LEVEL 12.4


#endif // AIRFRAME_H
