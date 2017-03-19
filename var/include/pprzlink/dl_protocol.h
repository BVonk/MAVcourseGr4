/** @file
 *	@brief PPRZLink messages header built from message_definitions/v1.0/messages.xml
 *	@see http://paparazziuav.org
 */
#ifndef _VAR_MESSAGES_datalink_H_
#define _VAR_MESSAGES_datalink_H_

#define PPRZLINK_PROTOCOL_VERSION "1.0"
#define PPRZLINK_PROTOCOL_VERSION_MAJOR 1
#define PPRZLINK_PROTOCOL_VERSION_MINOR 0

#ifdef __cplusplus
extern "C" {
#endif

#include "pprzlink/pprzlink_device.h"
#include "pprzlink/pprzlink_transport.h"
#include "pprzlink/pprzlink_utils.h"

#ifndef PPRZLINK_ENABLE_FD
#define PPRZLINK_ENABLE_FD FALSE
#endif

// dummy fd to save ROM if this is not used
#if !PPRZLINK_ENABLE_FD
#define _FD 0
#define _FD_ADDR 0
#else
#define _FD_ADDR &_FD
#endif

#if DOWNLINK
#define DL_ACINFO 1
#define PPRZ_MSG_ID_ACINFO 1
#define DL_MOVE_WP 2
#define PPRZ_MSG_ID_MOVE_WP 2
#define DL_WIND_INFO 3
#define PPRZ_MSG_ID_WIND_INFO 3
#define DL_SETTING 4
#define PPRZ_MSG_ID_SETTING 4
#define DL_BLOCK 5
#define PPRZ_MSG_ID_BLOCK 5
#define DL_HITL_UBX 6
#define PPRZ_MSG_ID_HITL_UBX 6
#define DL_HITL_INFRARED 7
#define PPRZ_MSG_ID_HITL_INFRARED 7
#define DL_PING 8
#define PPRZ_MSG_ID_PING 8
#define DL_FORMATION_SLOT 9
#define PPRZ_MSG_ID_FORMATION_SLOT 9
#define DL_FORMATION_STATUS 10
#define PPRZ_MSG_ID_FORMATION_STATUS 10
#define DL_JOYSTICK_RAW 11
#define PPRZ_MSG_ID_JOYSTICK_RAW 11
#define DL_COMMANDS_RAW 12
#define PPRZ_MSG_ID_COMMANDS_RAW 12
#define DL_DGPS_RAW 13
#define PPRZ_MSG_ID_DGPS_RAW 13
#define DL_ACINFO_LLA 14
#define PPRZ_MSG_ID_ACINFO_LLA 14
#define DL_GET_SETTING 16
#define PPRZ_MSG_ID_GET_SETTING 16
#define DL_TCAS_RESOLVE 17
#define PPRZ_MSG_ID_TCAS_RESOLVE 17
#define DL_MISSION_GOTO_WP 20
#define PPRZ_MSG_ID_MISSION_GOTO_WP 20
#define DL_MISSION_GOTO_WP_LLA 21
#define PPRZ_MSG_ID_MISSION_GOTO_WP_LLA 21
#define DL_MISSION_CIRCLE 22
#define PPRZ_MSG_ID_MISSION_CIRCLE 22
#define DL_MISSION_CIRCLE_LLA 23
#define PPRZ_MSG_ID_MISSION_CIRCLE_LLA 23
#define DL_MISSION_SEGMENT 24
#define PPRZ_MSG_ID_MISSION_SEGMENT 24
#define DL_MISSION_SEGMENT_LLA 25
#define PPRZ_MSG_ID_MISSION_SEGMENT_LLA 25
#define DL_MISSION_PATH 26
#define PPRZ_MSG_ID_MISSION_PATH 26
#define DL_MISSION_PATH_LLA 27
#define PPRZ_MSG_ID_MISSION_PATH_LLA 27
#define DL_MISSION_SURVEY 28
#define PPRZ_MSG_ID_MISSION_SURVEY 28
#define DL_MISSION_SURVEY_LLA 29
#define PPRZ_MSG_ID_MISSION_SURVEY_LLA 29
#define DL_GOTO_MISSION 30
#define PPRZ_MSG_ID_GOTO_MISSION 30
#define DL_NEXT_MISSION 31
#define PPRZ_MSG_ID_NEXT_MISSION 31
#define DL_END_MISSION 32
#define PPRZ_MSG_ID_END_MISSION 32
#define DL_GUIDED_SETPOINT_NED 40
#define PPRZ_MSG_ID_GUIDED_SETPOINT_NED 40
#define DL_WINDTURBINE_STATUS 50
#define PPRZ_MSG_ID_WINDTURBINE_STATUS 50
#define DL_RC_3CH 51
#define PPRZ_MSG_ID_RC_3CH 51
#define DL_RC_4CH 52
#define PPRZ_MSG_ID_RC_4CH 52
#define DL_REMOTE_GPS_SMALL 54
#define PPRZ_MSG_ID_REMOTE_GPS_SMALL 54
#define DL_REMOTE_GPS 55
#define PPRZ_MSG_ID_REMOTE_GPS 55
#define DL_KITE_COMMAND 96
#define PPRZ_MSG_ID_KITE_COMMAND 96
#define DL_PAYLOAD_COMMAND 97
#define PPRZ_MSG_ID_PAYLOAD_COMMAND 97
#define DL_SET_ACTUATOR 100
#define PPRZ_MSG_ID_SET_ACTUATOR 100
#define DL_CSC_SERVO_CMD 101
#define PPRZ_MSG_ID_CSC_SERVO_CMD 101
#define DL_BOOZ2_FMS_COMMAND 149
#define PPRZ_MSG_ID_BOOZ2_FMS_COMMAND 149
#define DL_BOOZ_NAV_STICK 150
#define PPRZ_MSG_ID_BOOZ_NAV_STICK 150
#define DL_EXTERNAL_FILTER_SOLUTION 151
#define PPRZ_MSG_ID_EXTERNAL_FILTER_SOLUTION 151
#define DL_ROTORCRAFT_CAM_STICK 152
#define PPRZ_MSG_ID_ROTORCRAFT_CAM_STICK 152
#define DL_GPS_INJECT 153
#define PPRZ_MSG_ID_GPS_INJECT 153
#define DL_EXTERNAL_MAG_RAW 154
#define PPRZ_MSG_ID_EXTERNAL_MAG_RAW 154
#define DL_VIDEO_ROI 155
#define PPRZ_MSG_ID_VIDEO_ROI 155
#define DL_EMERGENCY_CMD 156
#define PPRZ_MSG_ID_EMERGENCY_CMD 156
#define DL_RTCM_INJECT 157
#define PPRZ_MSG_ID_RTCM_INJECT 157
#define DL_MSG_datalink_NB 48


#define DOWNLINK_SEND_ACINFO(_trans, _dev, course, utm_east, utm_north, utm_zone, alt, itow, speed, climb, ac_id) pprz_msg_send_ACINFO(&((_trans).trans_tx), &((_dev).device), AC_ID, course, utm_east, utm_north, utm_zone, alt, itow, speed, climb, ac_id)
static inline void pprz_msg_send_ACINFO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_course, int32_t *_utm_east, int32_t *_utm_north, uint8_t *_utm_zone, int32_t *_alt, uint32_t *_itow, uint16_t *_speed, int16_t *_climb, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+1+4+4+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+1+4+4+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+1+4+4+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ACINFO, "ACINFO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _course, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _utm_zone, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _speed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _climb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MOVE_WP(_trans, _dev, wp_id, ac_id, lat, lon, alt) pprz_msg_send_MOVE_WP(&((_trans).trans_tx), &((_dev).device), AC_ID, wp_id, ac_id, lat, lon, alt)
static inline void pprz_msg_send_MOVE_WP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_wp_id, uint8_t *_ac_id, int32_t *_lat, int32_t *_lon, int32_t *_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MOVE_WP, "MOVE_WP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _wp_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WIND_INFO(_trans, _dev, ac_id, flags, east, north, up, airspeed) pprz_msg_send_WIND_INFO(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, flags, east, north, up, airspeed)
static inline void pprz_msg_send_WIND_INFO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_flags, float *_east, float *_north, float *_up, float *_airspeed) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WIND_INFO, "WIND_INFO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _flags, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _up, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SETTING(_trans, _dev, index, ac_id, value) pprz_msg_send_SETTING(&((_trans).trans_tx), &((_dev).device), AC_ID, index, ac_id, value)
static inline void pprz_msg_send_SETTING(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_index, uint8_t *_ac_id, float *_value) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SETTING, "SETTING");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _value, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BLOCK(_trans, _dev, block_id, ac_id) pprz_msg_send_BLOCK(&((_trans).trans_tx), &((_dev).device), AC_ID, block_id, ac_id)
static inline void pprz_msg_send_BLOCK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_block_id, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BLOCK, "BLOCK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _block_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HITL_UBX(_trans, _dev, class, id, ac_id, nb_ubx_payload, ubx_payload) pprz_msg_send_HITL_UBX(&((_trans).trans_tx), &((_dev).device), AC_ID, class, id, ac_id, nb_ubx_payload, ubx_payload)
static inline void pprz_msg_send_HITL_UBX(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_class, uint8_t *_id, uint8_t *_ac_id, uint8_t nb_ubx_payload, uint8_t *_ubx_payload) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1+nb_ubx_payload*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1+nb_ubx_payload*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1+nb_ubx_payload*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HITL_UBX, "HITL_UBX");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _class, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_ubx_payload, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _ubx_payload, nb_ubx_payload*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HITL_INFRARED(_trans, _dev, roll, pitch, top, ac_id) pprz_msg_send_HITL_INFRARED(&((_trans).trans_tx), &((_dev).device), AC_ID, roll, pitch, top, ac_id)
static inline void pprz_msg_send_HITL_INFRARED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_roll, int16_t *_pitch, int16_t *_top, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HITL_INFRARED, "HITL_INFRARED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _roll, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _pitch, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _top, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PING(_trans, _dev) pprz_msg_send_PING(&((_trans).trans_tx), &((_dev).device), AC_ID)
static inline void pprz_msg_send_PING(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PING, "PING");
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FORMATION_SLOT(_trans, _dev, ac_id, mode, slot_east, slot_north, slot_alt) pprz_msg_send_FORMATION_SLOT(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, mode, slot_east, slot_north, slot_alt)
static inline void pprz_msg_send_FORMATION_SLOT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_mode, float *_slot_east, float *_slot_north, float *_slot_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FORMATION_SLOT, "FORMATION_SLOT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slot_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slot_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slot_alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FORMATION_STATUS(_trans, _dev, ac_id, leader_id, status) pprz_msg_send_FORMATION_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, leader_id, status)
static inline void pprz_msg_send_FORMATION_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_leader_id, uint8_t *_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FORMATION_STATUS, "FORMATION_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _leader_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_JOYSTICK_RAW(_trans, _dev, ac_id, roll, pitch, throttle) pprz_msg_send_JOYSTICK_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, roll, pitch, throttle)
static inline void pprz_msg_send_JOYSTICK_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, int8_t *_roll, int8_t *_pitch, int8_t *_throttle) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_JOYSTICK_RAW, "JOYSTICK_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _roll, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _pitch, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _throttle, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_COMMANDS_RAW(_trans, _dev, ac_id, nb_commands, commands) pprz_msg_send_COMMANDS_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, nb_commands, commands)
static inline void pprz_msg_send_COMMANDS_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t nb_commands, int8_t *_commands) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_commands*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_commands*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_commands*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_COMMANDS_RAW, "COMMANDS_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_commands, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_ARRAY, (void *) _commands, nb_commands*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DGPS_RAW(_trans, _dev, ac_id, length, nb_rtcm, rtcm) pprz_msg_send_DGPS_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, length, nb_rtcm, rtcm)
static inline void pprz_msg_send_DGPS_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_length, uint8_t nb_rtcm, uint8_t *_rtcm) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+nb_rtcm*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+nb_rtcm*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+nb_rtcm*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DGPS_RAW, "DGPS_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _length, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_rtcm, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _rtcm, nb_rtcm*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ACINFO_LLA(_trans, _dev, course, lat, lon, alt, itow, speed, climb, ac_id) pprz_msg_send_ACINFO_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, course, lat, lon, alt, itow, speed, climb, ac_id)
static inline void pprz_msg_send_ACINFO_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_course, int32_t *_lat, int32_t *_lon, int32_t *_alt, uint32_t *_itow, uint16_t *_speed, int16_t *_climb, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ACINFO_LLA, "ACINFO_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _course, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _speed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _climb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GET_SETTING(_trans, _dev, index, ac_id) pprz_msg_send_GET_SETTING(&((_trans).trans_tx), &((_dev).device), AC_ID, index, ac_id)
static inline void pprz_msg_send_GET_SETTING(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_index, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GET_SETTING, "GET_SETTING");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TCAS_RESOLVE(_trans, _dev, ac_id, ac_id_conflict, resolve) pprz_msg_send_TCAS_RESOLVE(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, ac_id_conflict, resolve)
static inline void pprz_msg_send_TCAS_RESOLVE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_ac_id_conflict, uint8_t *_resolve) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TCAS_RESOLVE, "TCAS_RESOLVE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id_conflict, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _resolve, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_GOTO_WP(_trans, _dev, ac_id, insert, wp_east, wp_north, wp_alt, duration, index) pprz_msg_send_MISSION_GOTO_WP(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, wp_east, wp_north, wp_alt, duration, index)
static inline void pprz_msg_send_MISSION_GOTO_WP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, float *_wp_east, float *_wp_north, float *_wp_alt, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_GOTO_WP, "MISSION_GOTO_WP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _wp_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _wp_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _wp_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_GOTO_WP_LLA(_trans, _dev, ac_id, insert, wp_lat, wp_lon, wp_alt, duration, index) pprz_msg_send_MISSION_GOTO_WP_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, wp_lat, wp_lon, wp_alt, duration, index)
static inline void pprz_msg_send_MISSION_GOTO_WP_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, int32_t *_wp_lat, int32_t *_wp_lon, int32_t *_wp_alt, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_GOTO_WP_LLA, "MISSION_GOTO_WP_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _wp_lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _wp_lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _wp_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_CIRCLE(_trans, _dev, ac_id, insert, center_east, center_north, center_alt, radius, duration, index) pprz_msg_send_MISSION_CIRCLE(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, center_east, center_north, center_alt, radius, duration, index)
static inline void pprz_msg_send_MISSION_CIRCLE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, float *_center_east, float *_center_north, float *_center_alt, float *_radius, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_CIRCLE, "MISSION_CIRCLE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _center_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _center_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _center_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _radius, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_CIRCLE_LLA(_trans, _dev, ac_id, insert, center_lat, center_lon, center_alt, radius, duration, index) pprz_msg_send_MISSION_CIRCLE_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, center_lat, center_lon, center_alt, radius, duration, index)
static inline void pprz_msg_send_MISSION_CIRCLE_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, int32_t *_center_lat, int32_t *_center_lon, int32_t *_center_alt, float *_radius, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_CIRCLE_LLA, "MISSION_CIRCLE_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _center_lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _center_lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _center_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _radius, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_SEGMENT(_trans, _dev, ac_id, insert, segment_east_1, segment_north_1, segment_east_2, segment_north_2, segment_alt, duration, index) pprz_msg_send_MISSION_SEGMENT(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, segment_east_1, segment_north_1, segment_east_2, segment_north_2, segment_alt, duration, index)
static inline void pprz_msg_send_MISSION_SEGMENT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, float *_segment_east_1, float *_segment_north_1, float *_segment_east_2, float *_segment_north_2, float *_segment_alt, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_SEGMENT, "MISSION_SEGMENT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_east_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_north_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_east_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_north_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_SEGMENT_LLA(_trans, _dev, ac_id, insert, segment_lat_1, segment_lon_1, segment_lat_2, segment_lon_2, segment_alt, duration, index) pprz_msg_send_MISSION_SEGMENT_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, segment_lat_1, segment_lon_1, segment_lat_2, segment_lon_2, segment_alt, duration, index)
static inline void pprz_msg_send_MISSION_SEGMENT_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, int32_t *_segment_lat_1, int32_t *_segment_lon_1, int32_t *_segment_lat_2, int32_t *_segment_lon_2, int32_t *_segment_alt, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_SEGMENT_LLA, "MISSION_SEGMENT_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _segment_lat_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _segment_lon_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _segment_lat_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _segment_lon_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _segment_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_PATH(_trans, _dev, ac_id, insert, point_east_1, point_north_1, point_east_2, point_north_2, point_east_3, point_north_3, point_east_4, point_north_4, point_east_5, point_north_5, path_alt, duration, nb, index) pprz_msg_send_MISSION_PATH(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, point_east_1, point_north_1, point_east_2, point_north_2, point_east_3, point_north_3, point_east_4, point_north_4, point_east_5, point_north_5, path_alt, duration, nb, index)
static inline void pprz_msg_send_MISSION_PATH(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, float *_point_east_1, float *_point_north_1, float *_point_east_2, float *_point_north_2, float *_point_east_3, float *_point_north_3, float *_point_east_4, float *_point_north_4, float *_point_east_5, float *_point_north_5, float *_path_alt, float *_duration, uint8_t *_nb, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_PATH, "MISSION_PATH");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_east_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_north_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_east_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_north_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_east_3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_north_3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_east_4, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_north_4, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_east_5, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _point_north_5, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _path_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _nb, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_PATH_LLA(_trans, _dev, ac_id, insert, point_lat_1, point_lon_1, point_lat_2, point_lon_2, point_lat_3, point_lon_3, point_lat_4, point_lon_4, point_lat_5, point_lon_5, path_alt, duration, nb, index) pprz_msg_send_MISSION_PATH_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, point_lat_1, point_lon_1, point_lat_2, point_lon_2, point_lat_3, point_lon_3, point_lat_4, point_lon_4, point_lat_5, point_lon_5, path_alt, duration, nb, index)
static inline void pprz_msg_send_MISSION_PATH_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, int32_t *_point_lat_1, int32_t *_point_lon_1, int32_t *_point_lat_2, int32_t *_point_lon_2, int32_t *_point_lat_3, int32_t *_point_lon_3, int32_t *_point_lat_4, int32_t *_point_lon_4, int32_t *_point_lat_5, int32_t *_point_lon_5, int32_t *_path_alt, float *_duration, uint8_t *_nb, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_PATH_LLA, "MISSION_PATH_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lat_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lon_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lat_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lon_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lat_3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lon_3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lat_4, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lon_4, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lat_5, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _point_lon_5, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _path_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _nb, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_SURVEY(_trans, _dev, ac_id, insert, survey_east_1, survey_north_1, survey_east_2, survey_north_2, survey_alt, duration, index) pprz_msg_send_MISSION_SURVEY(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, survey_east_1, survey_north_1, survey_east_2, survey_north_2, survey_alt, duration, index)
static inline void pprz_msg_send_MISSION_SURVEY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, float *_survey_east_1, float *_survey_north_1, float *_survey_east_2, float *_survey_north_2, float *_survey_alt, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_SURVEY, "MISSION_SURVEY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _survey_east_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _survey_north_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _survey_east_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _survey_north_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _survey_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_SURVEY_LLA(_trans, _dev, ac_id, insert, survey_lat_1, survey_lon_1, survey_lat_2, survey_lon_2, survey_alt, duration, index) pprz_msg_send_MISSION_SURVEY_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, insert, survey_lat_1, survey_lon_1, survey_lat_2, survey_lon_2, survey_alt, duration, index)
static inline void pprz_msg_send_MISSION_SURVEY_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_insert, int32_t *_survey_lat_1, int32_t *_survey_lon_1, int32_t *_survey_lat_2, int32_t *_survey_lon_2, int32_t *_survey_alt, float *_duration, uint8_t *_index) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_SURVEY_LLA, "MISSION_SURVEY_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _insert, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _survey_lat_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _survey_lon_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _survey_lat_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _survey_lon_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _survey_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _duration, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GOTO_MISSION(_trans, _dev, ac_id, mission_id) pprz_msg_send_GOTO_MISSION(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, mission_id)
static inline void pprz_msg_send_GOTO_MISSION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_mission_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GOTO_MISSION, "GOTO_MISSION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mission_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NEXT_MISSION(_trans, _dev, ac_id) pprz_msg_send_NEXT_MISSION(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id)
static inline void pprz_msg_send_NEXT_MISSION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NEXT_MISSION, "NEXT_MISSION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_END_MISSION(_trans, _dev, ac_id) pprz_msg_send_END_MISSION(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id)
static inline void pprz_msg_send_END_MISSION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_END_MISSION, "END_MISSION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GUIDED_SETPOINT_NED(_trans, _dev, ac_id, flags, x, y, z, yaw) pprz_msg_send_GUIDED_SETPOINT_NED(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, flags, x, y, z, yaw)
static inline void pprz_msg_send_GUIDED_SETPOINT_NED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_flags, float *_x, float *_y, float *_z, float *_yaw) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GUIDED_SETPOINT_NED, "GUIDED_SETPOINT_NED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _flags, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WINDTURBINE_STATUS(_trans, _dev, ac_id, tb_id, sync_itow, cycle_time) pprz_msg_send_WINDTURBINE_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, tb_id, sync_itow, cycle_time)
static inline void pprz_msg_send_WINDTURBINE_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_tb_id, uint32_t *_sync_itow, uint32_t *_cycle_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WINDTURBINE_STATUS, "WINDTURBINE_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _tb_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _sync_itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _cycle_time, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RC_3CH(_trans, _dev, throttle_mode, roll, pitch) pprz_msg_send_RC_3CH(&((_trans).trans_tx), &((_dev).device), AC_ID, throttle_mode, roll, pitch)
static inline void pprz_msg_send_RC_3CH(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_throttle_mode, int8_t *_roll, int8_t *_pitch) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RC_3CH, "RC_3CH");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _throttle_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _roll, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _pitch, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RC_4CH(_trans, _dev, ac_id, mode, throttle, roll, pitch, yaw) pprz_msg_send_RC_4CH(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, mode, throttle, roll, pitch, yaw)
static inline void pprz_msg_send_RC_4CH(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_mode, uint8_t *_throttle, int8_t *_roll, int8_t *_pitch, int8_t *_yaw) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RC_4CH, "RC_4CH");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _throttle, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _roll, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _pitch, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _yaw, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_REMOTE_GPS_SMALL(_trans, _dev, heading, pos_xyz, speed_xyz, tow, ac_id) pprz_msg_send_REMOTE_GPS_SMALL(&((_trans).trans_tx), &((_dev).device), AC_ID, heading, pos_xyz, speed_xyz, tow, ac_id)
static inline void pprz_msg_send_REMOTE_GPS_SMALL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_heading, uint32_t *_pos_xyz, uint32_t *_speed_xyz, uint32_t *_tow, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_REMOTE_GPS_SMALL, "REMOTE_GPS_SMALL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _heading, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _pos_xyz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _speed_xyz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_REMOTE_GPS(_trans, _dev, ac_id, numsv, ecef_x, ecef_y, ecef_z, lat, lon, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, tow, course) pprz_msg_send_REMOTE_GPS(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, numsv, ecef_x, ecef_y, ecef_z, lat, lon, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, tow, course)
static inline void pprz_msg_send_REMOTE_GPS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_numsv, int32_t *_ecef_x, int32_t *_ecef_y, int32_t *_ecef_z, int32_t *_lat, int32_t *_lon, int32_t *_alt, int32_t *_hmsl, int32_t *_ecef_xd, int32_t *_ecef_yd, int32_t *_ecef_zd, uint32_t *_tow, int32_t *_course) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_REMOTE_GPS, "REMOTE_GPS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _numsv, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _hmsl, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _course, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_KITE_COMMAND(_trans, _dev, POWER, TURN) pprz_msg_send_KITE_COMMAND(&((_trans).trans_tx), &((_dev).device), AC_ID, POWER, TURN)
static inline void pprz_msg_send_KITE_COMMAND(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_POWER, uint16_t *_TURN) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_KITE_COMMAND, "KITE_COMMAND");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _POWER, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _TURN, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PAYLOAD_COMMAND(_trans, _dev, ac_id, nb_command, command) pprz_msg_send_PAYLOAD_COMMAND(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, nb_command, command)
static inline void pprz_msg_send_PAYLOAD_COMMAND(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t nb_command, uint8_t *_command) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_command*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_command*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_command*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PAYLOAD_COMMAND, "PAYLOAD_COMMAND");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_command, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _command, nb_command*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SET_ACTUATOR(_trans, _dev, value, no, ac_id) pprz_msg_send_SET_ACTUATOR(&((_trans).trans_tx), &((_dev).device), AC_ID, value, no, ac_id)
static inline void pprz_msg_send_SET_ACTUATOR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_value, uint8_t *_no, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SET_ACTUATOR, "SET_ACTUATOR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _value, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _no, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CSC_SERVO_CMD(_trans, _dev, servo_1, servo_2, servo_3, servo_4) pprz_msg_send_CSC_SERVO_CMD(&((_trans).trans_tx), &((_dev).device), AC_ID, servo_1, servo_2, servo_3, servo_4)
static inline void pprz_msg_send_CSC_SERVO_CMD(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_servo_1, uint16_t *_servo_2, uint16_t *_servo_3, uint16_t *_servo_4) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CSC_SERVO_CMD, "CSC_SERVO_CMD");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _servo_1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _servo_2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _servo_3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _servo_4, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BOOZ2_FMS_COMMAND(_trans, _dev, h_mode, v_mode, v_sp, h_sp_1, h_sp_2, h_sp_3, ac_id) pprz_msg_send_BOOZ2_FMS_COMMAND(&((_trans).trans_tx), &((_dev).device), AC_ID, h_mode, v_mode, v_sp, h_sp_1, h_sp_2, h_sp_3, ac_id)
static inline void pprz_msg_send_BOOZ2_FMS_COMMAND(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_h_mode, uint8_t *_v_mode, int32_t *_v_sp, int32_t *_h_sp_1, int32_t *_h_sp_2, int32_t *_h_sp_3, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BOOZ2_FMS_COMMAND, "BOOZ2_FMS_COMMAND");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _h_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _v_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _v_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _h_sp_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _h_sp_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _h_sp_3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BOOZ_NAV_STICK(_trans, _dev, ac_id, vx_sp, vy_sp, vz_sp, r_sp) pprz_msg_send_BOOZ_NAV_STICK(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, vx_sp, vy_sp, vz_sp, r_sp)
static inline void pprz_msg_send_BOOZ_NAV_STICK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, int8_t *_vx_sp, int8_t *_vy_sp, int8_t *_vz_sp, int8_t *_r_sp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BOOZ_NAV_STICK, "BOOZ_NAV_STICK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _vx_sp, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _vy_sp, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _vz_sp, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _r_sp, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EXTERNAL_FILTER_SOLUTION(_trans, _dev, ac_id, status, x, xd, y, yd) pprz_msg_send_EXTERNAL_FILTER_SOLUTION(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, status, x, xd, y, yd)
static inline void pprz_msg_send_EXTERNAL_FILTER_SOLUTION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_status, float *_x, float *_xd, float *_y, float *_yd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EXTERNAL_FILTER_SOLUTION, "EXTERNAL_FILTER_SOLUTION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_CAM_STICK(_trans, _dev, ac_id, tilt, pan) pprz_msg_send_ROTORCRAFT_CAM_STICK(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, tilt, pan)
static inline void pprz_msg_send_ROTORCRAFT_CAM_STICK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, int8_t *_tilt, int8_t *_pan) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_CAM_STICK, "ROTORCRAFT_CAM_STICK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _tilt, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _pan, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS_INJECT(_trans, _dev, ac_id, packet_id, nb_data, data) pprz_msg_send_GPS_INJECT(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, packet_id, nb_data, data)
static inline void pprz_msg_send_GPS_INJECT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_packet_id, uint8_t nb_data, uint8_t *_data) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+nb_data*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+nb_data*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+nb_data*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS_INJECT, "GPS_INJECT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _packet_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_data, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _data, nb_data*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EXTERNAL_MAG_RAW(_trans, _dev, x, y, z) pprz_msg_send_EXTERNAL_MAG_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, x, y, z)
static inline void pprz_msg_send_EXTERNAL_MAG_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_x, int16_t *_y, int16_t *_z) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EXTERNAL_MAG_RAW, "EXTERNAL_MAG_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _y, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _z, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VIDEO_ROI(_trans, _dev, ac_id, startx, starty, width, height, downsized_width) pprz_msg_send_VIDEO_ROI(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, startx, starty, width, height, downsized_width)
static inline void pprz_msg_send_VIDEO_ROI(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, int32_t *_startx, int32_t *_starty, int32_t *_width, int32_t *_height, int32_t *_downsized_width) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VIDEO_ROI, "VIDEO_ROI");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _startx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _starty, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _width, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _height, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _downsized_width, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EMERGENCY_CMD(_trans, _dev, ac_id, cmd) pprz_msg_send_EMERGENCY_CMD(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, cmd)
static inline void pprz_msg_send_EMERGENCY_CMD(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_cmd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EMERGENCY_CMD, "EMERGENCY_CMD");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cmd, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RTCM_INJECT(_trans, _dev, packet_id, nb_data, data) pprz_msg_send_RTCM_INJECT(&((_trans).trans_tx), &((_dev).device), AC_ID, packet_id, nb_data, data)
static inline void pprz_msg_send_RTCM_INJECT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_packet_id, uint8_t nb_data, uint8_t *_data) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_data*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_data*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_data*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RTCM_INJECT, "RTCM_INJECT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _packet_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_data, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _data, nb_data*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#else // DOWNLINK

#define DOWNLINK_SEND_ACINFO(_trans, _dev, course, utm_east, utm_north, utm_zone, alt, itow, speed, climb, ac_id) {}
static inline void pprz_send_msg_ACINFO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_course __attribute__((unused)), int32_t *_utm_east __attribute__((unused)), int32_t *_utm_north __attribute__((unused)), uint8_t *_utm_zone __attribute__((unused)), int32_t *_alt __attribute__((unused)), uint32_t *_itow __attribute__((unused)), uint16_t *_speed __attribute__((unused)), int16_t *_climb __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_MOVE_WP(_trans, _dev, wp_id, ac_id, lat, lon, alt) {}
static inline void pprz_send_msg_MOVE_WP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_wp_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_WIND_INFO(_trans, _dev, ac_id, flags, east, north, up, airspeed) {}
static inline void pprz_send_msg_WIND_INFO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_flags __attribute__((unused)), float *_east __attribute__((unused)), float *_north __attribute__((unused)), float *_up __attribute__((unused)), float *_airspeed __attribute__((unused))) {}

#define DOWNLINK_SEND_SETTING(_trans, _dev, index, ac_id, value) {}
static inline void pprz_send_msg_SETTING(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_index __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), float *_value __attribute__((unused))) {}

#define DOWNLINK_SEND_BLOCK(_trans, _dev, block_id, ac_id) {}
static inline void pprz_send_msg_BLOCK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_block_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_HITL_UBX(_trans, _dev, class, id, ac_id, nb_ubx_payload, ubx_payload) {}
static inline void pprz_send_msg_HITL_UBX(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_class __attribute__((unused)), uint8_t *_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t nb_ubx_payload __attribute__((unused)), uint8_t *_ubx_payload __attribute__((unused))) {}

#define DOWNLINK_SEND_HITL_INFRARED(_trans, _dev, roll, pitch, top, ac_id) {}
static inline void pprz_send_msg_HITL_INFRARED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_roll __attribute__((unused)), int16_t *_pitch __attribute__((unused)), int16_t *_top __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_PING(_trans, _dev) {}
static inline void pprz_send_msg_PING(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_FORMATION_SLOT(_trans, _dev, ac_id, mode, slot_east, slot_north, slot_alt) {}
static inline void pprz_send_msg_FORMATION_SLOT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_mode __attribute__((unused)), float *_slot_east __attribute__((unused)), float *_slot_north __attribute__((unused)), float *_slot_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_FORMATION_STATUS(_trans, _dev, ac_id, leader_id, status) {}
static inline void pprz_send_msg_FORMATION_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_leader_id __attribute__((unused)), uint8_t *_status __attribute__((unused))) {}

#define DOWNLINK_SEND_JOYSTICK_RAW(_trans, _dev, ac_id, roll, pitch, throttle) {}
static inline void pprz_send_msg_JOYSTICK_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), int8_t *_roll __attribute__((unused)), int8_t *_pitch __attribute__((unused)), int8_t *_throttle __attribute__((unused))) {}

#define DOWNLINK_SEND_COMMANDS_RAW(_trans, _dev, ac_id, nb_commands, commands) {}
static inline void pprz_send_msg_COMMANDS_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t nb_commands __attribute__((unused)), int8_t *_commands __attribute__((unused))) {}

#define DOWNLINK_SEND_DGPS_RAW(_trans, _dev, ac_id, length, nb_rtcm, rtcm) {}
static inline void pprz_send_msg_DGPS_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_length __attribute__((unused)), uint8_t nb_rtcm __attribute__((unused)), uint8_t *_rtcm __attribute__((unused))) {}

#define DOWNLINK_SEND_ACINFO_LLA(_trans, _dev, course, lat, lon, alt, itow, speed, climb, ac_id) {}
static inline void pprz_send_msg_ACINFO_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_course __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused)), uint32_t *_itow __attribute__((unused)), uint16_t *_speed __attribute__((unused)), int16_t *_climb __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_GET_SETTING(_trans, _dev, index, ac_id) {}
static inline void pprz_send_msg_GET_SETTING(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_index __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_TCAS_RESOLVE(_trans, _dev, ac_id, ac_id_conflict, resolve) {}
static inline void pprz_send_msg_TCAS_RESOLVE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_ac_id_conflict __attribute__((unused)), uint8_t *_resolve __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_GOTO_WP(_trans, _dev, ac_id, insert, wp_east, wp_north, wp_alt, duration, index) {}
static inline void pprz_send_msg_MISSION_GOTO_WP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), float *_wp_east __attribute__((unused)), float *_wp_north __attribute__((unused)), float *_wp_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_GOTO_WP_LLA(_trans, _dev, ac_id, insert, wp_lat, wp_lon, wp_alt, duration, index) {}
static inline void pprz_send_msg_MISSION_GOTO_WP_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), int32_t *_wp_lat __attribute__((unused)), int32_t *_wp_lon __attribute__((unused)), int32_t *_wp_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_CIRCLE(_trans, _dev, ac_id, insert, center_east, center_north, center_alt, radius, duration, index) {}
static inline void pprz_send_msg_MISSION_CIRCLE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), float *_center_east __attribute__((unused)), float *_center_north __attribute__((unused)), float *_center_alt __attribute__((unused)), float *_radius __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_CIRCLE_LLA(_trans, _dev, ac_id, insert, center_lat, center_lon, center_alt, radius, duration, index) {}
static inline void pprz_send_msg_MISSION_CIRCLE_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), int32_t *_center_lat __attribute__((unused)), int32_t *_center_lon __attribute__((unused)), int32_t *_center_alt __attribute__((unused)), float *_radius __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_SEGMENT(_trans, _dev, ac_id, insert, segment_east_1, segment_north_1, segment_east_2, segment_north_2, segment_alt, duration, index) {}
static inline void pprz_send_msg_MISSION_SEGMENT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), float *_segment_east_1 __attribute__((unused)), float *_segment_north_1 __attribute__((unused)), float *_segment_east_2 __attribute__((unused)), float *_segment_north_2 __attribute__((unused)), float *_segment_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_SEGMENT_LLA(_trans, _dev, ac_id, insert, segment_lat_1, segment_lon_1, segment_lat_2, segment_lon_2, segment_alt, duration, index) {}
static inline void pprz_send_msg_MISSION_SEGMENT_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), int32_t *_segment_lat_1 __attribute__((unused)), int32_t *_segment_lon_1 __attribute__((unused)), int32_t *_segment_lat_2 __attribute__((unused)), int32_t *_segment_lon_2 __attribute__((unused)), int32_t *_segment_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_PATH(_trans, _dev, ac_id, insert, point_east_1, point_north_1, point_east_2, point_north_2, point_east_3, point_north_3, point_east_4, point_north_4, point_east_5, point_north_5, path_alt, duration, nb, index) {}
static inline void pprz_send_msg_MISSION_PATH(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), float *_point_east_1 __attribute__((unused)), float *_point_north_1 __attribute__((unused)), float *_point_east_2 __attribute__((unused)), float *_point_north_2 __attribute__((unused)), float *_point_east_3 __attribute__((unused)), float *_point_north_3 __attribute__((unused)), float *_point_east_4 __attribute__((unused)), float *_point_north_4 __attribute__((unused)), float *_point_east_5 __attribute__((unused)), float *_point_north_5 __attribute__((unused)), float *_path_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_nb __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_PATH_LLA(_trans, _dev, ac_id, insert, point_lat_1, point_lon_1, point_lat_2, point_lon_2, point_lat_3, point_lon_3, point_lat_4, point_lon_4, point_lat_5, point_lon_5, path_alt, duration, nb, index) {}
static inline void pprz_send_msg_MISSION_PATH_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), int32_t *_point_lat_1 __attribute__((unused)), int32_t *_point_lon_1 __attribute__((unused)), int32_t *_point_lat_2 __attribute__((unused)), int32_t *_point_lon_2 __attribute__((unused)), int32_t *_point_lat_3 __attribute__((unused)), int32_t *_point_lon_3 __attribute__((unused)), int32_t *_point_lat_4 __attribute__((unused)), int32_t *_point_lon_4 __attribute__((unused)), int32_t *_point_lat_5 __attribute__((unused)), int32_t *_point_lon_5 __attribute__((unused)), int32_t *_path_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_nb __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_SURVEY(_trans, _dev, ac_id, insert, survey_east_1, survey_north_1, survey_east_2, survey_north_2, survey_alt, duration, index) {}
static inline void pprz_send_msg_MISSION_SURVEY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), float *_survey_east_1 __attribute__((unused)), float *_survey_north_1 __attribute__((unused)), float *_survey_east_2 __attribute__((unused)), float *_survey_north_2 __attribute__((unused)), float *_survey_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_SURVEY_LLA(_trans, _dev, ac_id, insert, survey_lat_1, survey_lon_1, survey_lat_2, survey_lon_2, survey_alt, duration, index) {}
static inline void pprz_send_msg_MISSION_SURVEY_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_insert __attribute__((unused)), int32_t *_survey_lat_1 __attribute__((unused)), int32_t *_survey_lon_1 __attribute__((unused)), int32_t *_survey_lat_2 __attribute__((unused)), int32_t *_survey_lon_2 __attribute__((unused)), int32_t *_survey_alt __attribute__((unused)), float *_duration __attribute__((unused)), uint8_t *_index __attribute__((unused))) {}

#define DOWNLINK_SEND_GOTO_MISSION(_trans, _dev, ac_id, mission_id) {}
static inline void pprz_send_msg_GOTO_MISSION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_mission_id __attribute__((unused))) {}

#define DOWNLINK_SEND_NEXT_MISSION(_trans, _dev, ac_id) {}
static inline void pprz_send_msg_NEXT_MISSION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_END_MISSION(_trans, _dev, ac_id) {}
static inline void pprz_send_msg_END_MISSION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_GUIDED_SETPOINT_NED(_trans, _dev, ac_id, flags, x, y, z, yaw) {}
static inline void pprz_send_msg_GUIDED_SETPOINT_NED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_flags __attribute__((unused)), float *_x __attribute__((unused)), float *_y __attribute__((unused)), float *_z __attribute__((unused)), float *_yaw __attribute__((unused))) {}

#define DOWNLINK_SEND_WINDTURBINE_STATUS(_trans, _dev, ac_id, tb_id, sync_itow, cycle_time) {}
static inline void pprz_send_msg_WINDTURBINE_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_tb_id __attribute__((unused)), uint32_t *_sync_itow __attribute__((unused)), uint32_t *_cycle_time __attribute__((unused))) {}

#define DOWNLINK_SEND_RC_3CH(_trans, _dev, throttle_mode, roll, pitch) {}
static inline void pprz_send_msg_RC_3CH(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_throttle_mode __attribute__((unused)), int8_t *_roll __attribute__((unused)), int8_t *_pitch __attribute__((unused))) {}

#define DOWNLINK_SEND_RC_4CH(_trans, _dev, ac_id, mode, throttle, roll, pitch, yaw) {}
static inline void pprz_send_msg_RC_4CH(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_mode __attribute__((unused)), uint8_t *_throttle __attribute__((unused)), int8_t *_roll __attribute__((unused)), int8_t *_pitch __attribute__((unused)), int8_t *_yaw __attribute__((unused))) {}

#define DOWNLINK_SEND_REMOTE_GPS_SMALL(_trans, _dev, heading, pos_xyz, speed_xyz, tow, ac_id) {}
static inline void pprz_send_msg_REMOTE_GPS_SMALL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_heading __attribute__((unused)), uint32_t *_pos_xyz __attribute__((unused)), uint32_t *_speed_xyz __attribute__((unused)), uint32_t *_tow __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_REMOTE_GPS(_trans, _dev, ac_id, numsv, ecef_x, ecef_y, ecef_z, lat, lon, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, tow, course) {}
static inline void pprz_send_msg_REMOTE_GPS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_numsv __attribute__((unused)), int32_t *_ecef_x __attribute__((unused)), int32_t *_ecef_y __attribute__((unused)), int32_t *_ecef_z __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused)), int32_t *_hmsl __attribute__((unused)), int32_t *_ecef_xd __attribute__((unused)), int32_t *_ecef_yd __attribute__((unused)), int32_t *_ecef_zd __attribute__((unused)), uint32_t *_tow __attribute__((unused)), int32_t *_course __attribute__((unused))) {}

#define DOWNLINK_SEND_KITE_COMMAND(_trans, _dev, POWER, TURN) {}
static inline void pprz_send_msg_KITE_COMMAND(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_POWER __attribute__((unused)), uint16_t *_TURN __attribute__((unused))) {}

#define DOWNLINK_SEND_PAYLOAD_COMMAND(_trans, _dev, ac_id, nb_command, command) {}
static inline void pprz_send_msg_PAYLOAD_COMMAND(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t nb_command __attribute__((unused)), uint8_t *_command __attribute__((unused))) {}

#define DOWNLINK_SEND_SET_ACTUATOR(_trans, _dev, value, no, ac_id) {}
static inline void pprz_send_msg_SET_ACTUATOR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_value __attribute__((unused)), uint8_t *_no __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_CSC_SERVO_CMD(_trans, _dev, servo_1, servo_2, servo_3, servo_4) {}
static inline void pprz_send_msg_CSC_SERVO_CMD(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_servo_1 __attribute__((unused)), uint16_t *_servo_2 __attribute__((unused)), uint16_t *_servo_3 __attribute__((unused)), uint16_t *_servo_4 __attribute__((unused))) {}

#define DOWNLINK_SEND_BOOZ2_FMS_COMMAND(_trans, _dev, h_mode, v_mode, v_sp, h_sp_1, h_sp_2, h_sp_3, ac_id) {}
static inline void pprz_send_msg_BOOZ2_FMS_COMMAND(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_h_mode __attribute__((unused)), uint8_t *_v_mode __attribute__((unused)), int32_t *_v_sp __attribute__((unused)), int32_t *_h_sp_1 __attribute__((unused)), int32_t *_h_sp_2 __attribute__((unused)), int32_t *_h_sp_3 __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_BOOZ_NAV_STICK(_trans, _dev, ac_id, vx_sp, vy_sp, vz_sp, r_sp) {}
static inline void pprz_send_msg_BOOZ_NAV_STICK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), int8_t *_vx_sp __attribute__((unused)), int8_t *_vy_sp __attribute__((unused)), int8_t *_vz_sp __attribute__((unused)), int8_t *_r_sp __attribute__((unused))) {}

#define DOWNLINK_SEND_EXTERNAL_FILTER_SOLUTION(_trans, _dev, ac_id, status, x, xd, y, yd) {}
static inline void pprz_send_msg_EXTERNAL_FILTER_SOLUTION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_status __attribute__((unused)), float *_x __attribute__((unused)), float *_xd __attribute__((unused)), float *_y __attribute__((unused)), float *_yd __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_CAM_STICK(_trans, _dev, ac_id, tilt, pan) {}
static inline void pprz_send_msg_ROTORCRAFT_CAM_STICK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), int8_t *_tilt __attribute__((unused)), int8_t *_pan __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS_INJECT(_trans, _dev, ac_id, packet_id, nb_data, data) {}
static inline void pprz_send_msg_GPS_INJECT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_packet_id __attribute__((unused)), uint8_t nb_data __attribute__((unused)), uint8_t *_data __attribute__((unused))) {}

#define DOWNLINK_SEND_EXTERNAL_MAG_RAW(_trans, _dev, x, y, z) {}
static inline void pprz_send_msg_EXTERNAL_MAG_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_x __attribute__((unused)), int16_t *_y __attribute__((unused)), int16_t *_z __attribute__((unused))) {}

#define DOWNLINK_SEND_VIDEO_ROI(_trans, _dev, ac_id, startx, starty, width, height, downsized_width) {}
static inline void pprz_send_msg_VIDEO_ROI(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), int32_t *_startx __attribute__((unused)), int32_t *_starty __attribute__((unused)), int32_t *_width __attribute__((unused)), int32_t *_height __attribute__((unused)), int32_t *_downsized_width __attribute__((unused))) {}

#define DOWNLINK_SEND_EMERGENCY_CMD(_trans, _dev, ac_id, cmd) {}
static inline void pprz_send_msg_EMERGENCY_CMD(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_cmd __attribute__((unused))) {}

#define DOWNLINK_SEND_RTCM_INJECT(_trans, _dev, packet_id, nb_data, data) {}
static inline void pprz_send_msg_RTCM_INJECT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_packet_id __attribute__((unused)), uint8_t nb_data __attribute__((unused)), uint8_t *_data __attribute__((unused))) {}

#endif // DOWNLINK

#define DL_ACINFO_course(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_ACINFO_utm_east(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_ACINFO_utm_north(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_ACINFO_utm_zone(_payload) _PPRZ_VAL_uint8_t(_payload, 12)
#define DL_ACINFO_alt(_payload) _PPRZ_VAL_int32_t(_payload, 13)
#define DL_ACINFO_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 17)
#define DL_ACINFO_speed(_payload) _PPRZ_VAL_uint16_t(_payload, 21)
#define DL_ACINFO_climb(_payload) _PPRZ_VAL_int16_t(_payload, 23)
#define DL_ACINFO_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 25)

#define DL_MOVE_WP_wp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MOVE_WP_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MOVE_WP_lat(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_MOVE_WP_lon(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_MOVE_WP_alt(_payload) _PPRZ_VAL_int32_t(_payload, 12)

#define DL_WIND_INFO_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WIND_INFO_flags(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_WIND_INFO_east(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_WIND_INFO_north(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_WIND_INFO_up(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_WIND_INFO_airspeed(_payload) _PPRZ_VAL_float(_payload, 16)

#define DL_SETTING_index(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_SETTING_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_SETTING_value(_payload) _PPRZ_VAL_float(_payload, 4)

#define DL_BLOCK_block_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_BLOCK_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_HITL_UBX_class(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_HITL_UBX_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_HITL_UBX_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_HITL_UBX_ubx_payload_length(_payload) _PPRZ_VAL_uint8_t(_payload, 5)
#define DL_HITL_UBX_ubx_payload(_payload) _PPRZ_VAL_uint8_t_array(_payload, 6)

#define DL_HITL_INFRARED_roll(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_HITL_INFRARED_pitch(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_HITL_INFRARED_top(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_HITL_INFRARED_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 8)



#define DL_FORMATION_SLOT_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_FORMATION_SLOT_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_FORMATION_SLOT_slot_east(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_FORMATION_SLOT_slot_north(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_FORMATION_SLOT_slot_alt(_payload) _PPRZ_VAL_float(_payload, 12)

#define DL_FORMATION_STATUS_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_FORMATION_STATUS_leader_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_FORMATION_STATUS_status(_payload) _PPRZ_VAL_uint8_t(_payload, 4)

#define DL_JOYSTICK_RAW_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_JOYSTICK_RAW_roll(_payload) _PPRZ_VAL_int8_t(_payload, 3)
#define DL_JOYSTICK_RAW_pitch(_payload) _PPRZ_VAL_int8_t(_payload, 4)
#define DL_JOYSTICK_RAW_throttle(_payload) _PPRZ_VAL_int8_t(_payload, 5)

#define DL_COMMANDS_RAW_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_COMMANDS_RAW_commands_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_COMMANDS_RAW_commands(_payload) _PPRZ_VAL_int8_t_array(_payload, 4)

#define DL_DGPS_RAW_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_DGPS_RAW_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_DGPS_RAW_rtcm_length(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_DGPS_RAW_rtcm(_payload) _PPRZ_VAL_uint8_t_array(_payload, 5)

#define DL_ACINFO_LLA_course(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_ACINFO_LLA_lat(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_ACINFO_LLA_lon(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_ACINFO_LLA_alt(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_ACINFO_LLA_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 16)
#define DL_ACINFO_LLA_speed(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_ACINFO_LLA_climb(_payload) _PPRZ_VAL_int16_t(_payload, 22)
#define DL_ACINFO_LLA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 24)

#define DL_GET_SETTING_index(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_GET_SETTING_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_TCAS_RESOLVE_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_TCAS_RESOLVE_ac_id_conflict(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_TCAS_RESOLVE_resolve(_payload) _PPRZ_VAL_uint8_t(_payload, 4)

#define DL_MISSION_GOTO_WP_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_GOTO_WP_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_GOTO_WP_wp_east(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MISSION_GOTO_WP_wp_north(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_MISSION_GOTO_WP_wp_alt(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_MISSION_GOTO_WP_duration(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_GOTO_WP_index(_payload) _PPRZ_VAL_uint8_t(_payload, 20)

#define DL_MISSION_GOTO_WP_LLA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_GOTO_WP_LLA_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_GOTO_WP_LLA_wp_lat(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_MISSION_GOTO_WP_LLA_wp_lon(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_MISSION_GOTO_WP_LLA_wp_alt(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_MISSION_GOTO_WP_LLA_duration(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_GOTO_WP_LLA_index(_payload) _PPRZ_VAL_uint8_t(_payload, 20)

#define DL_MISSION_CIRCLE_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_CIRCLE_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_CIRCLE_center_east(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MISSION_CIRCLE_center_north(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_MISSION_CIRCLE_center_alt(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_MISSION_CIRCLE_radius(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_CIRCLE_duration(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_MISSION_CIRCLE_index(_payload) _PPRZ_VAL_uint8_t(_payload, 24)

#define DL_MISSION_CIRCLE_LLA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_CIRCLE_LLA_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_CIRCLE_LLA_center_lat(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_MISSION_CIRCLE_LLA_center_lon(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_MISSION_CIRCLE_LLA_center_alt(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_MISSION_CIRCLE_LLA_radius(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_CIRCLE_LLA_duration(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_MISSION_CIRCLE_LLA_index(_payload) _PPRZ_VAL_uint8_t(_payload, 24)

#define DL_MISSION_SEGMENT_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_SEGMENT_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_SEGMENT_segment_east_1(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MISSION_SEGMENT_segment_north_1(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_MISSION_SEGMENT_segment_east_2(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_MISSION_SEGMENT_segment_north_2(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_SEGMENT_segment_alt(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_MISSION_SEGMENT_duration(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_MISSION_SEGMENT_index(_payload) _PPRZ_VAL_uint8_t(_payload, 28)

#define DL_MISSION_SEGMENT_LLA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_SEGMENT_LLA_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_SEGMENT_LLA_segment_lat_1(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_MISSION_SEGMENT_LLA_segment_lon_1(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_MISSION_SEGMENT_LLA_segment_lat_2(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_MISSION_SEGMENT_LLA_segment_lon_2(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_MISSION_SEGMENT_LLA_segment_alt(_payload) _PPRZ_VAL_int32_t(_payload, 20)
#define DL_MISSION_SEGMENT_LLA_duration(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_MISSION_SEGMENT_LLA_index(_payload) _PPRZ_VAL_uint8_t(_payload, 28)

#define DL_MISSION_PATH_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_PATH_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_PATH_point_east_1(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MISSION_PATH_point_north_1(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_MISSION_PATH_point_east_2(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_MISSION_PATH_point_north_2(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_PATH_point_east_3(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_MISSION_PATH_point_north_3(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_MISSION_PATH_point_east_4(_payload) _PPRZ_VAL_float(_payload, 28)
#define DL_MISSION_PATH_point_north_4(_payload) _PPRZ_VAL_float(_payload, 32)
#define DL_MISSION_PATH_point_east_5(_payload) _PPRZ_VAL_float(_payload, 36)
#define DL_MISSION_PATH_point_north_5(_payload) _PPRZ_VAL_float(_payload, 40)
#define DL_MISSION_PATH_path_alt(_payload) _PPRZ_VAL_float(_payload, 44)
#define DL_MISSION_PATH_duration(_payload) _PPRZ_VAL_float(_payload, 48)
#define DL_MISSION_PATH_nb(_payload) _PPRZ_VAL_uint8_t(_payload, 52)
#define DL_MISSION_PATH_index(_payload) _PPRZ_VAL_uint8_t(_payload, 53)

#define DL_MISSION_PATH_LLA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_PATH_LLA_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_PATH_LLA_point_lat_1(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_MISSION_PATH_LLA_point_lon_1(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_MISSION_PATH_LLA_point_lat_2(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_MISSION_PATH_LLA_point_lon_2(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_MISSION_PATH_LLA_point_lat_3(_payload) _PPRZ_VAL_int32_t(_payload, 20)
#define DL_MISSION_PATH_LLA_point_lon_3(_payload) _PPRZ_VAL_int32_t(_payload, 24)
#define DL_MISSION_PATH_LLA_point_lat_4(_payload) _PPRZ_VAL_int32_t(_payload, 28)
#define DL_MISSION_PATH_LLA_point_lon_4(_payload) _PPRZ_VAL_int32_t(_payload, 32)
#define DL_MISSION_PATH_LLA_point_lat_5(_payload) _PPRZ_VAL_int32_t(_payload, 36)
#define DL_MISSION_PATH_LLA_point_lon_5(_payload) _PPRZ_VAL_int32_t(_payload, 40)
#define DL_MISSION_PATH_LLA_path_alt(_payload) _PPRZ_VAL_int32_t(_payload, 44)
#define DL_MISSION_PATH_LLA_duration(_payload) _PPRZ_VAL_float(_payload, 48)
#define DL_MISSION_PATH_LLA_nb(_payload) _PPRZ_VAL_uint8_t(_payload, 52)
#define DL_MISSION_PATH_LLA_index(_payload) _PPRZ_VAL_uint8_t(_payload, 53)

#define DL_MISSION_SURVEY_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_SURVEY_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_SURVEY_survey_east_1(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MISSION_SURVEY_survey_north_1(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_MISSION_SURVEY_survey_east_2(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_MISSION_SURVEY_survey_north_2(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MISSION_SURVEY_survey_alt(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_MISSION_SURVEY_duration(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_MISSION_SURVEY_index(_payload) _PPRZ_VAL_uint8_t(_payload, 28)

#define DL_MISSION_SURVEY_LLA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MISSION_SURVEY_LLA_insert(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MISSION_SURVEY_LLA_survey_lat_1(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_MISSION_SURVEY_LLA_survey_lon_1(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_MISSION_SURVEY_LLA_survey_lat_2(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_MISSION_SURVEY_LLA_survey_lon_2(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_MISSION_SURVEY_LLA_survey_alt(_payload) _PPRZ_VAL_int32_t(_payload, 20)
#define DL_MISSION_SURVEY_LLA_duration(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_MISSION_SURVEY_LLA_index(_payload) _PPRZ_VAL_uint8_t(_payload, 28)

#define DL_GOTO_MISSION_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_GOTO_MISSION_mission_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_NEXT_MISSION_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)

#define DL_END_MISSION_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)

#define DL_GUIDED_SETPOINT_NED_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_GUIDED_SETPOINT_NED_flags(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_GUIDED_SETPOINT_NED_x(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_GUIDED_SETPOINT_NED_y(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_GUIDED_SETPOINT_NED_z(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_GUIDED_SETPOINT_NED_yaw(_payload) _PPRZ_VAL_float(_payload, 16)

#define DL_WINDTURBINE_STATUS_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WINDTURBINE_STATUS_tb_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_WINDTURBINE_STATUS_sync_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 4)
#define DL_WINDTURBINE_STATUS_cycle_time(_payload) _PPRZ_VAL_uint32_t(_payload, 8)

#define DL_RC_3CH_throttle_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_RC_3CH_roll(_payload) _PPRZ_VAL_int8_t(_payload, 3)
#define DL_RC_3CH_pitch(_payload) _PPRZ_VAL_int8_t(_payload, 4)

#define DL_RC_4CH_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_RC_4CH_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_RC_4CH_throttle(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_RC_4CH_roll(_payload) _PPRZ_VAL_int8_t(_payload, 5)
#define DL_RC_4CH_pitch(_payload) _PPRZ_VAL_int8_t(_payload, 6)
#define DL_RC_4CH_yaw(_payload) _PPRZ_VAL_int8_t(_payload, 7)

#define DL_REMOTE_GPS_SMALL_heading(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_REMOTE_GPS_SMALL_pos_xyz(_payload) _PPRZ_VAL_uint32_t(_payload, 4)
#define DL_REMOTE_GPS_SMALL_speed_xyz(_payload) _PPRZ_VAL_uint32_t(_payload, 8)
#define DL_REMOTE_GPS_SMALL_tow(_payload) _PPRZ_VAL_uint32_t(_payload, 12)
#define DL_REMOTE_GPS_SMALL_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 16)

#define DL_REMOTE_GPS_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_REMOTE_GPS_numsv(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_REMOTE_GPS_ecef_x(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_REMOTE_GPS_ecef_y(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_REMOTE_GPS_ecef_z(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_REMOTE_GPS_lat(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_REMOTE_GPS_lon(_payload) _PPRZ_VAL_int32_t(_payload, 20)
#define DL_REMOTE_GPS_alt(_payload) _PPRZ_VAL_int32_t(_payload, 24)
#define DL_REMOTE_GPS_hmsl(_payload) _PPRZ_VAL_int32_t(_payload, 28)
#define DL_REMOTE_GPS_ecef_xd(_payload) _PPRZ_VAL_int32_t(_payload, 32)
#define DL_REMOTE_GPS_ecef_yd(_payload) _PPRZ_VAL_int32_t(_payload, 36)
#define DL_REMOTE_GPS_ecef_zd(_payload) _PPRZ_VAL_int32_t(_payload, 40)
#define DL_REMOTE_GPS_tow(_payload) _PPRZ_VAL_uint32_t(_payload, 44)
#define DL_REMOTE_GPS_course(_payload) _PPRZ_VAL_int32_t(_payload, 48)

#define DL_KITE_COMMAND_POWER(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_KITE_COMMAND_TURN(_payload) _PPRZ_VAL_uint16_t(_payload, 4)

#define DL_PAYLOAD_COMMAND_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PAYLOAD_COMMAND_command_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_PAYLOAD_COMMAND_command(_payload) _PPRZ_VAL_uint8_t_array(_payload, 4)

#define DL_SET_ACTUATOR_value(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_SET_ACTUATOR_no(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_SET_ACTUATOR_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 5)

#define DL_CSC_SERVO_CMD_servo_1(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_CSC_SERVO_CMD_servo_2(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_CSC_SERVO_CMD_servo_3(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_CSC_SERVO_CMD_servo_4(_payload) _PPRZ_VAL_uint16_t(_payload, 8)

#define DL_BOOZ2_FMS_COMMAND_h_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_BOOZ2_FMS_COMMAND_v_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_BOOZ2_FMS_COMMAND_v_sp(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_BOOZ2_FMS_COMMAND_h_sp_1(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_BOOZ2_FMS_COMMAND_h_sp_2(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_BOOZ2_FMS_COMMAND_h_sp_3(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_BOOZ2_FMS_COMMAND_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 20)

#define DL_BOOZ_NAV_STICK_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_BOOZ_NAV_STICK_vx_sp(_payload) _PPRZ_VAL_int8_t(_payload, 3)
#define DL_BOOZ_NAV_STICK_vy_sp(_payload) _PPRZ_VAL_int8_t(_payload, 4)
#define DL_BOOZ_NAV_STICK_vz_sp(_payload) _PPRZ_VAL_int8_t(_payload, 5)
#define DL_BOOZ_NAV_STICK_r_sp(_payload) _PPRZ_VAL_int8_t(_payload, 6)

#define DL_EXTERNAL_FILTER_SOLUTION_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_EXTERNAL_FILTER_SOLUTION_status(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_EXTERNAL_FILTER_SOLUTION_x(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_EXTERNAL_FILTER_SOLUTION_xd(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_EXTERNAL_FILTER_SOLUTION_y(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_EXTERNAL_FILTER_SOLUTION_yd(_payload) _PPRZ_VAL_float(_payload, 16)

#define DL_ROTORCRAFT_CAM_STICK_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_ROTORCRAFT_CAM_STICK_tilt(_payload) _PPRZ_VAL_int8_t(_payload, 3)
#define DL_ROTORCRAFT_CAM_STICK_pan(_payload) _PPRZ_VAL_int8_t(_payload, 4)

#define DL_GPS_INJECT_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_GPS_INJECT_packet_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_GPS_INJECT_data_length(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_GPS_INJECT_data(_payload) _PPRZ_VAL_uint8_t_array(_payload, 5)

#define DL_EXTERNAL_MAG_RAW_x(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_EXTERNAL_MAG_RAW_y(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_EXTERNAL_MAG_RAW_z(_payload) _PPRZ_VAL_int16_t(_payload, 6)

#define DL_VIDEO_ROI_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_VIDEO_ROI_startx(_payload) _PPRZ_VAL_int32_t(_payload, 3)
#define DL_VIDEO_ROI_starty(_payload) _PPRZ_VAL_int32_t(_payload, 7)
#define DL_VIDEO_ROI_width(_payload) _PPRZ_VAL_int32_t(_payload, 11)
#define DL_VIDEO_ROI_height(_payload) _PPRZ_VAL_int32_t(_payload, 15)
#define DL_VIDEO_ROI_downsized_width(_payload) _PPRZ_VAL_int32_t(_payload, 19)

#define DL_EMERGENCY_CMD_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_EMERGENCY_CMD_cmd(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_RTCM_INJECT_packet_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_RTCM_INJECT_data_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_RTCM_INJECT_data(_payload) _PPRZ_VAL_uint8_t_array(_payload, 4)


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _VAR_MESSAGES_datalink_H_
