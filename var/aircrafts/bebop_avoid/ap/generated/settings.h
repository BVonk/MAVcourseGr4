/* This file has been generated by gen_settings from /home/bart/paparazzi/var/aircrafts/bebop_avoid/settings_autopilot.xml /home/bart/paparazzi/var/aircrafts/bebop_avoid/settings_telemetry.xml /home/bart/paparazzi/var/aircrafts/bebop_avoid/settings_flightplan.xml /home/bart/paparazzi/var/aircrafts/bebop_avoid/settings_modules.xml -- /home/bart/paparazzi/conf/settings/rotorcraft_basic.xml /home/bart/paparazzi/conf/modules/video_rtp_stream.xml /home/bart/paparazzi/conf/modules/cv_colorfilter.xml /home/bart/paparazzi/conf/modules/air_data.xml /home/bart/paparazzi/conf/modules/geo_mag.xml /home/bart/paparazzi/conf/modules/ins_extended.xml /home/bart/paparazzi/conf/modules/ahrs_int_cmpl_quat.xml /home/bart/paparazzi/conf/modules/nav_basic_rotorcraft.xml /home/bart/paparazzi/conf/modules/guidance_rotorcraft.xml /home/bart/paparazzi/conf/modules/gps.xml /home/bart/paparazzi/conf/modules/imu_common.xml */
/* Version v5.11_devel-none-gbfcf671 */
/* Please DO NOT EDIT */

#ifndef SETTINGS_H
#define SETTINGS_H

#define RCSettings(mode_changed) { \
}

#include "air_data/air_data.h"
#include "autopilot.h"
#include "computer_vision/viewvideo.h"
#include "generated/periodic_telemetry.h"
#include "geo_mag/geo_mag.h"
#include "guidance/guidance_h.h"
#include "guidance/guidance_v.h"
#include "navigation.h"
#include "subsystems/ahrs/ahrs_int_cmpl_quat.h"
#include "subsystems/gps.h"
#include "subsystems/imu.h"
#include "subsystems/ins/vf_extended_float.h"
#include "generated/modules.h"

#define SETTINGS_NAMES { \
 { "telemetry_mode_Main" }, \
 { "video_thread_video_thread_periodic_status" }, \
 { "logger_file_file_logger_periodic_status" }, \
 { "calibration_send_imu_mag_current_status" }, \
 { "gps_datalink_gps_datalink_periodic_check_status" }, \
 { "autopilot_mode_auto2" }, \
 { "kill_throttle" }, \
 { "autopilot_power_switch" }, \
 { "autopilot_mode" }, \
 { "viewvideo.use_rtp" }, \
 { "listener->active" }, \
 { "color_lum_min" }, \
 { "color_lum_max" }, \
 { "color_cb_min" }, \
 { "color_cb_max" }, \
 { "color_cr_min" }, \
 { "color_cr_max" }, \
 { "air_data.qnh" }, \
 { "air_data.tas_factor" }, \
 { "air_data.calc_qnh_once" }, \
 { "air_data.calc_airspeed" }, \
 { "air_data.calc_tas_factor" }, \
 { "air_data.calc_amsl_baro" }, \
 { "geo_mag.calc_once" }, \
 { "vff.accel_noise" }, \
 { "vff.r_baro" }, \
 { "vff.r_alt" }, \
 { "vff.r_offset" }, \
 { "ahrs_icq.gravity_heuristic_factor" }, \
 { "ahrs_icq.accel_omega" }, \
 { "ahrs_icq.accel_zeta" }, \
 { "ahrs_icq.mag_omega" }, \
 { "ahrs_icq.mag_zeta" }, \
 { "flight_altitude" }, \
 { "nav_heading" }, \
 { "nav_radius" }, \
 { "nav_climb_vspeed" }, \
 { "nav_descend_vspeed" }, \
 { "guidance_v_kp" }, \
 { "guidance_v_kd" }, \
 { "guidance_v_ki" }, \
 { "guidance_v_nominal_throttle" }, \
 { "guidance_v_adapt_throttle_enabled" }, \
 { "guidance_v_z_sp" }, \
 { "guidance_h.use_ref" }, \
 { "gh_ref.max_speed" }, \
 { "guidance_h.approx_force_by_thrust" }, \
 { "gh_ref.tau" }, \
 { "gh_ref.omega" }, \
 { "gh_ref.zeta" }, \
 { "guidance_h.gains.p" }, \
 { "guidance_h.gains.d" }, \
 { "guidance_h.gains.i" }, \
 { "guidance_h.gains.v" }, \
 { "guidance_h.gains.a" }, \
 { "guidance_h.sp.pos.x" }, \
 { "guidance_h.sp.pos.y" }, \
 { "multi_gps_mode" }, \
 { "imu.body_to_imu.eulers_f.phi" }, \
 { "imu.body_to_imu.eulers_f.theta" }, \
 { "imu.body_to_imu.eulers_f.psi" }, \
 { "imu.b2i_set_current" }, \
};
#define SETTINGS_NAMES_SHORT { \
 "tel_mod_Mai" , \
 "vid_thr_vid_thr_" , \
 "log_fil_fil_log_" , \
 "cal_sen_imu_mag_" , \
 "gps_dat_gps_dat_" , \
 "aut_mod_aut" , \
 "kil_thr" , \
 "aut_pow_swi" , \
 "aut_mod" , \
 "vie_use_rtp" , \
 "lis" , \
 "col_lum_min" , \
 "col_lum_max" , \
 "col_cb_min" , \
 "col_cb_max" , \
 "col_cr_min" , \
 "col_cr_max" , \
 "air_dat_qnh" , \
 "air_dat_tas_fac" , \
 "air_dat_cal_qnh_" , \
 "air_dat_cal_air" , \
 "air_dat_cal_tas_" , \
 "air_dat_cal_ams_" , \
 "geo_mag_cal_onc" , \
 "vff_acc_noi" , \
 "vff_r_bar" , \
 "vff_r_alt" , \
 "vff_r_off" , \
 "ahr_icq_gra_heu_" , \
 "ahr_icq_acc_ome" , \
 "ahr_icq_acc_zet" , \
 "ahr_icq_mag_ome" , \
 "ahr_icq_mag_zet" , \
 "fli_alt" , \
 "nav_hea" , \
 "nav_rad" , \
 "nav_cli_vsp" , \
 "nav_des_vsp" , \
 "gui_v_kp" , \
 "gui_v_kd" , \
 "gui_v_ki" , \
 "gui_v_nom_thr" , \
 "gui_v_ada_thr_en" , \
 "gui_v_z_sp" , \
 "gui_h_use_ref" , \
 "gh_ref_max_spe" , \
 "gui_h_app_for_by" , \
 "gh_ref_tau" , \
 "gh_ref_ome" , \
 "gh_ref_zet" , \
 "gui_h_gai_p" , \
 "gui_h_gai_d" , \
 "gui_h_gai_i" , \
 "gui_h_gai_v" , \
 "gui_h_gai_a" , \
 "gui_h_sp_pos_x" , \
 "gui_h_sp_pos_y" , \
 "mul_gps_mod" , \
 "imu_bod_to_imu_e" , \
 "imu_bod_to_imu_e" , \
 "imu_bod_to_imu_e" , \
 "imu_b2i_set_cur" , \
};
#define NB_SETTING 62
#define DlSetting(_idx, _value) { \
  switch (_idx) { \
    case 0: telemetry_mode_Main = _value; break;\
    case 1: video_thread_video_thread_periodic_status = _value; break;\
    case 2: logger_file_file_logger_periodic_status = _value; break;\
    case 3: calibration_send_imu_mag_current_status = _value; break;\
    case 4: gps_datalink_gps_datalink_periodic_check_status = _value; break;\
    case 5: autopilot_mode_auto2 = _value; break;\
    case 6: autopilot_KillThrottle( _value ); _value = kill_throttle; break;\
    case 7: autopilot_SetPowerSwitch( _value ); _value = autopilot_power_switch; break;\
    case 8: autopilot_SetModeHandler( _value ); _value = autopilot_mode; break;\
    case 9: viewvideo.use_rtp = _value; break;\
    case 10: listener->active = _value; break;\
    case 11: color_lum_min = _value; break;\
    case 12: color_lum_max = _value; break;\
    case 13: color_cb_min = _value; break;\
    case 14: color_cb_max = _value; break;\
    case 15: color_cr_min = _value; break;\
    case 16: color_cr_max = _value; break;\
    case 17: air_data.qnh = _value; break;\
    case 18: air_data.tas_factor = _value; break;\
    case 19: air_data.calc_qnh_once = _value; break;\
    case 20: air_data.calc_airspeed = _value; break;\
    case 21: air_data.calc_tas_factor = _value; break;\
    case 22: air_data.calc_amsl_baro = _value; break;\
    case 23: geo_mag.calc_once = _value; break;\
    case 24: vff.accel_noise = _value; break;\
    case 25: vff.r_baro = _value; break;\
    case 26: vff.r_alt = _value; break;\
    case 27: vff.r_offset = _value; break;\
    case 28: ahrs_icq.gravity_heuristic_factor = _value; break;\
    case 29: ahrs_int_cmpl_quat_SetAccelOmega( _value ); _value = ahrs_icq.accel_omega; break;\
    case 30: ahrs_int_cmpl_quat_SetAccelZeta( _value ); _value = ahrs_icq.accel_zeta; break;\
    case 31: ahrs_int_cmpl_quat_SetMagOmega( _value ); _value = ahrs_icq.mag_omega; break;\
    case 32: ahrs_int_cmpl_quat_SetMagZeta( _value ); _value = ahrs_icq.mag_zeta; break;\
    case 33: navigation_SetFlightAltitude( _value ); _value = flight_altitude; break;\
    case 34: nav_heading = _value; break;\
    case 35: nav_radius = _value; break;\
    case 36: nav_climb_vspeed = _value; break;\
    case 37: nav_descend_vspeed = _value; break;\
    case 38: guidance_v_kp = _value; break;\
    case 39: guidance_v_kd = _value; break;\
    case 40: guidance_v_SetKi( _value ); _value = guidance_v_ki; break;\
    case 41: guidance_v_nominal_throttle = _value; break;\
    case 42: guidance_v_adapt_throttle_enabled = _value; break;\
    case 43: guidance_v_z_sp = _value; break;\
    case 44: guidance_h_SetUseRef( _value ); _value = guidance_h.use_ref; break;\
    case 45: guidance_h_SetMaxSpeed( _value ); _value = gh_ref.max_speed; break;\
    case 46: guidance_h.approx_force_by_thrust = _value; break;\
    case 47: guidance_h_SetTau( _value ); _value = gh_ref.tau; break;\
    case 48: guidance_h_SetOmega( _value ); _value = gh_ref.omega; break;\
    case 49: guidance_h_SetZeta( _value ); _value = gh_ref.zeta; break;\
    case 50: guidance_h.gains.p = _value; break;\
    case 51: guidance_h.gains.d = _value; break;\
    case 52: guidance_h_set_igain( _value ); _value = guidance_h.gains.i; break;\
    case 53: guidance_h.gains.v = _value; break;\
    case 54: guidance_h.gains.a = _value; break;\
    case 55: guidance_h.sp.pos.x = _value; break;\
    case 56: guidance_h.sp.pos.y = _value; break;\
    case 57: multi_gps_mode = _value; break;\
    case 58: imu_SetBodyToImuPhi( _value ); _value = imu.body_to_imu.eulers_f.phi; break;\
    case 59: imu_SetBodyToImuTheta( _value ); _value = imu.body_to_imu.eulers_f.theta; break;\
    case 60: imu_SetBodyToImuPsi( _value ); _value = imu.body_to_imu.eulers_f.psi; break;\
    case 61: imu_SetBodyToImuCurrent( _value ); _value = imu.b2i_set_current; break;\
    default: break;\
  }\
}
#define PeriodicSendDlValue(_trans, _dev) { \
  static uint8_t i;\
  float var;\
  if (i >= 62) i = 0;\
  switch (i) { \
    case 0: var = telemetry_mode_Main; break;\
    case 1: var = video_thread_video_thread_periodic_status; break;\
    case 2: var = logger_file_file_logger_periodic_status; break;\
    case 3: var = calibration_send_imu_mag_current_status; break;\
    case 4: var = gps_datalink_gps_datalink_periodic_check_status; break;\
    case 5: var = autopilot_mode_auto2; break;\
    case 6: var = kill_throttle; break;\
    case 7: var = autopilot_power_switch; break;\
    case 8: var = autopilot_mode; break;\
    case 9: var = viewvideo.use_rtp; break;\
    case 10: var = listener->active; break;\
    case 11: var = color_lum_min; break;\
    case 12: var = color_lum_max; break;\
    case 13: var = color_cb_min; break;\
    case 14: var = color_cb_max; break;\
    case 15: var = color_cr_min; break;\
    case 16: var = color_cr_max; break;\
    case 17: var = air_data.qnh; break;\
    case 18: var = air_data.tas_factor; break;\
    case 19: var = air_data.calc_qnh_once; break;\
    case 20: var = air_data.calc_airspeed; break;\
    case 21: var = air_data.calc_tas_factor; break;\
    case 22: var = air_data.calc_amsl_baro; break;\
    case 23: var = geo_mag.calc_once; break;\
    case 24: var = vff.accel_noise; break;\
    case 25: var = vff.r_baro; break;\
    case 26: var = vff.r_alt; break;\
    case 27: var = vff.r_offset; break;\
    case 28: var = ahrs_icq.gravity_heuristic_factor; break;\
    case 29: var = ahrs_icq.accel_omega; break;\
    case 30: var = ahrs_icq.accel_zeta; break;\
    case 31: var = ahrs_icq.mag_omega; break;\
    case 32: var = ahrs_icq.mag_zeta; break;\
    case 33: var = flight_altitude; break;\
    case 34: var = nav_heading; break;\
    case 35: var = nav_radius; break;\
    case 36: var = nav_climb_vspeed; break;\
    case 37: var = nav_descend_vspeed; break;\
    case 38: var = guidance_v_kp; break;\
    case 39: var = guidance_v_kd; break;\
    case 40: var = guidance_v_ki; break;\
    case 41: var = guidance_v_nominal_throttle; break;\
    case 42: var = guidance_v_adapt_throttle_enabled; break;\
    case 43: var = guidance_v_z_sp; break;\
    case 44: var = guidance_h.use_ref; break;\
    case 45: var = gh_ref.max_speed; break;\
    case 46: var = guidance_h.approx_force_by_thrust; break;\
    case 47: var = gh_ref.tau; break;\
    case 48: var = gh_ref.omega; break;\
    case 49: var = gh_ref.zeta; break;\
    case 50: var = guidance_h.gains.p; break;\
    case 51: var = guidance_h.gains.d; break;\
    case 52: var = guidance_h.gains.i; break;\
    case 53: var = guidance_h.gains.v; break;\
    case 54: var = guidance_h.gains.a; break;\
    case 55: var = guidance_h.sp.pos.x; break;\
    case 56: var = guidance_h.sp.pos.y; break;\
    case 57: var = multi_gps_mode; break;\
    case 58: var = imu.body_to_imu.eulers_f.phi; break;\
    case 59: var = imu.body_to_imu.eulers_f.theta; break;\
    case 60: var = imu.body_to_imu.eulers_f.psi; break;\
    case 61: var = imu.b2i_set_current; break;\
    default: var = 0.; break;\
  }\
  pprz_msg_send_DL_VALUE(_trans, _dev, AC_ID, &i, &var);\
  i++;\
}
static inline float settings_get_value(uint8_t i) {
  switch (i) {
    case 0: return telemetry_mode_Main;
    case 1: return video_thread_video_thread_periodic_status;
    case 2: return logger_file_file_logger_periodic_status;
    case 3: return calibration_send_imu_mag_current_status;
    case 4: return gps_datalink_gps_datalink_periodic_check_status;
    case 5: return autopilot_mode_auto2;
    case 6: return kill_throttle;
    case 7: return autopilot_power_switch;
    case 8: return autopilot_mode;
    case 9: return viewvideo.use_rtp;
    case 10: return listener->active;
    case 11: return color_lum_min;
    case 12: return color_lum_max;
    case 13: return color_cb_min;
    case 14: return color_cb_max;
    case 15: return color_cr_min;
    case 16: return color_cr_max;
    case 17: return air_data.qnh;
    case 18: return air_data.tas_factor;
    case 19: return air_data.calc_qnh_once;
    case 20: return air_data.calc_airspeed;
    case 21: return air_data.calc_tas_factor;
    case 22: return air_data.calc_amsl_baro;
    case 23: return geo_mag.calc_once;
    case 24: return vff.accel_noise;
    case 25: return vff.r_baro;
    case 26: return vff.r_alt;
    case 27: return vff.r_offset;
    case 28: return ahrs_icq.gravity_heuristic_factor;
    case 29: return ahrs_icq.accel_omega;
    case 30: return ahrs_icq.accel_zeta;
    case 31: return ahrs_icq.mag_omega;
    case 32: return ahrs_icq.mag_zeta;
    case 33: return flight_altitude;
    case 34: return nav_heading;
    case 35: return nav_radius;
    case 36: return nav_climb_vspeed;
    case 37: return nav_descend_vspeed;
    case 38: return guidance_v_kp;
    case 39: return guidance_v_kd;
    case 40: return guidance_v_ki;
    case 41: return guidance_v_nominal_throttle;
    case 42: return guidance_v_adapt_throttle_enabled;
    case 43: return guidance_v_z_sp;
    case 44: return guidance_h.use_ref;
    case 45: return gh_ref.max_speed;
    case 46: return guidance_h.approx_force_by_thrust;
    case 47: return gh_ref.tau;
    case 48: return gh_ref.omega;
    case 49: return gh_ref.zeta;
    case 50: return guidance_h.gains.p;
    case 51: return guidance_h.gains.d;
    case 52: return guidance_h.gains.i;
    case 53: return guidance_h.gains.v;
    case 54: return guidance_h.gains.a;
    case 55: return guidance_h.sp.pos.x;
    case 56: return guidance_h.sp.pos.y;
    case 57: return multi_gps_mode;
    case 58: return imu.body_to_imu.eulers_f.phi;
    case 59: return imu.body_to_imu.eulers_f.theta;
    case 60: return imu.body_to_imu.eulers_f.psi;
    case 61: return imu.b2i_set_current;
    default: return 0.;
  }
}

/* Persistent Settings */
struct PersistentSettings {
  float s_0; /* air_data.tas_factor */
  uint8_t s_1; /* air_data.calc_airspeed */
  uint8_t s_2; /* air_data.calc_tas_factor */
  uint8_t s_3; /* air_data.calc_amsl_baro */
  uint8_t s_4; /* ahrs_icq.gravity_heuristic_factor */
  float s_5; /* ahrs_icq.accel_omega */
  float s_6; /* ahrs_icq.accel_zeta */
  float s_7; /* ahrs_icq.mag_omega */
  float s_8; /* ahrs_icq.mag_zeta */
  float s_9; /* guidance_v_kp */
  float s_10; /* guidance_v_kd */
  float s_11; /* guidance_v_ki */
  float s_12; /* guidance_v_nominal_throttle */
  float s_13; /* guidance_v_adapt_throttle_enabled */
  float s_14; /* guidance_h.use_ref */
  float s_15; /* gh_ref.max_speed */
  uint8_t s_16; /* guidance_h.approx_force_by_thrust */
  float s_17; /* gh_ref.tau */
  float s_18; /* gh_ref.omega */
  float s_19; /* gh_ref.zeta */
  int32_t s_20; /* guidance_h.gains.p */
  int32_t s_21; /* guidance_h.gains.d */
  int32_t s_22; /* guidance_h.gains.i */
  int32_t s_23; /* guidance_h.gains.v */
  int32_t s_24; /* guidance_h.gains.a */
  float s_25; /* imu.body_to_imu.eulers_f.phi */
  float s_26; /* imu.body_to_imu.eulers_f.theta */
  float s_27; /* imu.body_to_imu.eulers_f.psi */
};

extern struct PersistentSettings pers_settings;

static inline void persistent_settings_store( void ) {
  pers_settings.s_0 = air_data.tas_factor;
  pers_settings.s_1 = air_data.calc_airspeed;
  pers_settings.s_2 = air_data.calc_tas_factor;
  pers_settings.s_3 = air_data.calc_amsl_baro;
  pers_settings.s_4 = ahrs_icq.gravity_heuristic_factor;
  pers_settings.s_5 = ahrs_icq.accel_omega;
  pers_settings.s_6 = ahrs_icq.accel_zeta;
  pers_settings.s_7 = ahrs_icq.mag_omega;
  pers_settings.s_8 = ahrs_icq.mag_zeta;
  pers_settings.s_9 = guidance_v_kp;
  pers_settings.s_10 = guidance_v_kd;
  pers_settings.s_11 = guidance_v_ki;
  pers_settings.s_12 = guidance_v_nominal_throttle;
  pers_settings.s_13 = guidance_v_adapt_throttle_enabled;
  pers_settings.s_14 = guidance_h.use_ref;
  pers_settings.s_15 = gh_ref.max_speed;
  pers_settings.s_16 = guidance_h.approx_force_by_thrust;
  pers_settings.s_17 = gh_ref.tau;
  pers_settings.s_18 = gh_ref.omega;
  pers_settings.s_19 = gh_ref.zeta;
  pers_settings.s_20 = guidance_h.gains.p;
  pers_settings.s_21 = guidance_h.gains.d;
  pers_settings.s_22 = guidance_h.gains.i;
  pers_settings.s_23 = guidance_h.gains.v;
  pers_settings.s_24 = guidance_h.gains.a;
  pers_settings.s_25 = imu.body_to_imu.eulers_f.phi;
  pers_settings.s_26 = imu.body_to_imu.eulers_f.theta;
  pers_settings.s_27 = imu.body_to_imu.eulers_f.psi;
}

static inline void persistent_settings_load( void ) {
  air_data.tas_factor = pers_settings.s_0;
  air_data.calc_airspeed = pers_settings.s_1;
  air_data.calc_tas_factor = pers_settings.s_2;
  air_data.calc_amsl_baro = pers_settings.s_3;
  ahrs_icq.gravity_heuristic_factor = pers_settings.s_4;
  ahrs_int_cmpl_quat_SetAccelOmega( pers_settings.s_5 );
  ahrs_int_cmpl_quat_SetAccelZeta( pers_settings.s_6 );
  ahrs_int_cmpl_quat_SetMagOmega( pers_settings.s_7 );
  ahrs_int_cmpl_quat_SetMagZeta( pers_settings.s_8 );
  guidance_v_kp = pers_settings.s_9;
  guidance_v_kd = pers_settings.s_10;
  guidance_v_SetKi( pers_settings.s_11 );
  guidance_v_nominal_throttle = pers_settings.s_12;
  guidance_v_adapt_throttle_enabled = pers_settings.s_13;
  guidance_h_SetUseRef( pers_settings.s_14 );
  guidance_h_SetMaxSpeed( pers_settings.s_15 );
  guidance_h.approx_force_by_thrust = pers_settings.s_16;
  guidance_h_SetTau( pers_settings.s_17 );
  guidance_h_SetOmega( pers_settings.s_18 );
  guidance_h_SetZeta( pers_settings.s_19 );
  guidance_h.gains.p = pers_settings.s_20;
  guidance_h.gains.d = pers_settings.s_21;
  guidance_h_set_igain( pers_settings.s_22 );
  guidance_h.gains.v = pers_settings.s_23;
  guidance_h.gains.a = pers_settings.s_24;
  imu_SetBodyToImuPhi( pers_settings.s_25 );
  imu_SetBodyToImuTheta( pers_settings.s_26 );
  imu_SetBodyToImuPsi( pers_settings.s_27 );
}

#endif // SETTINGS_H
