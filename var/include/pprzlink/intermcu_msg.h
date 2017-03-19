/** @file
 *	@brief PPRZLink messages header built from message_definitions/v1.0/messages.xml
 *	@see http://paparazziuav.org
 */
#ifndef _VAR_MESSAGES_intermcu_H_
#define _VAR_MESSAGES_intermcu_H_

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
#define DL_IMCU_COMMANDS 1
#define PPRZ_MSG_ID_IMCU_COMMANDS 1
#define DL_IMCU_RADIO_COMMANDS 2
#define PPRZ_MSG_ID_IMCU_RADIO_COMMANDS 2
#define DL_IMCU_SPEKTRUM_SOFT_BIND 3
#define PPRZ_MSG_ID_IMCU_SPEKTRUM_SOFT_BIND 3
#define DL_IMCU_FBW_STATUS 4
#define PPRZ_MSG_ID_IMCU_FBW_STATUS 4
#define DL_IMCU_REMOTE_MAG 10
#define PPRZ_MSG_ID_IMCU_REMOTE_MAG 10
#define DL_IMCU_REMOTE_BARO 11
#define PPRZ_MSG_ID_IMCU_REMOTE_BARO 11
#define DL_IMCU_REMOTE_AIRSPEED 12
#define PPRZ_MSG_ID_IMCU_REMOTE_AIRSPEED 12
#define DL_IMCU_REMOTE_GROUND 15
#define PPRZ_MSG_ID_IMCU_REMOTE_GROUND 15
#define DL_IMCU_REMOTE_GPS 62
#define PPRZ_MSG_ID_IMCU_REMOTE_GPS 62
#define DL_IMCU_DATALINK 113
#define PPRZ_MSG_ID_IMCU_DATALINK 113
#define DL_IMCU_TELEMETRY 114
#define PPRZ_MSG_ID_IMCU_TELEMETRY 114
#define DL_IMCU_DEBUG 115
#define PPRZ_MSG_ID_IMCU_DEBUG 115
#define DL_IMCU_PAYLOAD 116
#define PPRZ_MSG_ID_IMCU_PAYLOAD 116
#define DL_MSG_intermcu_NB 13


#define DOWNLINK_SEND_IMCU_COMMANDS(_trans, _dev, status, nb_values, values) pprz_msg_send_IMCU_COMMANDS(&((_trans).trans_tx), &((_dev).device), AC_ID, status, nb_values, values)
static inline void pprz_msg_send_IMCU_COMMANDS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_status, uint8_t nb_values, int16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_COMMANDS, "IMCU_COMMANDS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_RADIO_COMMANDS(_trans, _dev, status, nb_values, values) pprz_msg_send_IMCU_RADIO_COMMANDS(&((_trans).trans_tx), &((_dev).device), AC_ID, status, nb_values, values)
static inline void pprz_msg_send_IMCU_RADIO_COMMANDS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_status, uint8_t nb_values, int16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_RADIO_COMMANDS, "IMCU_RADIO_COMMANDS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_SPEKTRUM_SOFT_BIND(_trans, _dev) pprz_msg_send_IMCU_SPEKTRUM_SOFT_BIND(&((_trans).trans_tx), &((_dev).device), AC_ID)
static inline void pprz_msg_send_IMCU_SPEKTRUM_SOFT_BIND(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_SPEKTRUM_SOFT_BIND, "IMCU_SPEKTRUM_SOFT_BIND");
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_FBW_STATUS(_trans, _dev, mode, rc_status, frame_rate, vsupply, current) pprz_msg_send_IMCU_FBW_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, mode, rc_status, frame_rate, vsupply, current)
static inline void pprz_msg_send_IMCU_FBW_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_mode, uint8_t *_rc_status, uint8_t *_frame_rate, uint16_t *_vsupply, int32_t *_current) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_FBW_STATUS, "IMCU_FBW_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rc_status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _frame_rate, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _vsupply, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _current, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_REMOTE_MAG(_trans, _dev, mag_x, mag_y, mag_z) pprz_msg_send_IMCU_REMOTE_MAG(&((_trans).trans_tx), &((_dev).device), AC_ID, mag_x, mag_y, mag_z)
static inline void pprz_msg_send_IMCU_REMOTE_MAG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_mag_x, int16_t *_mag_y, int16_t *_mag_z) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_REMOTE_MAG, "IMCU_REMOTE_MAG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mag_x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mag_y, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mag_z, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_REMOTE_BARO(_trans, _dev, pitot_stat, pitot_temp) pprz_msg_send_IMCU_REMOTE_BARO(&((_trans).trans_tx), &((_dev).device), AC_ID, pitot_stat, pitot_temp)
static inline void pprz_msg_send_IMCU_REMOTE_BARO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_pitot_stat, float *_pitot_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_REMOTE_BARO, "IMCU_REMOTE_BARO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitot_stat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitot_temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_REMOTE_AIRSPEED(_trans, _dev, pitot_IAS) pprz_msg_send_IMCU_REMOTE_AIRSPEED(&((_trans).trans_tx), &((_dev).device), AC_ID, pitot_IAS)
static inline void pprz_msg_send_IMCU_REMOTE_AIRSPEED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_pitot_IAS) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_REMOTE_AIRSPEED, "IMCU_REMOTE_AIRSPEED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitot_IAS, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_REMOTE_GROUND(_trans, _dev, mode, id, range) pprz_msg_send_IMCU_REMOTE_GROUND(&((_trans).trans_tx), &((_dev).device), AC_ID, mode, id, range)
static inline void pprz_msg_send_IMCU_REMOTE_GROUND(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_mode, uint8_t *_id, uint16_t *_range) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_REMOTE_GROUND, "IMCU_REMOTE_GROUND");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _range, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_REMOTE_GPS(_trans, _dev, ecef_x, ecef_y, ecef_z, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, course, gspeed, pacc, sacc, numsv, fix) pprz_msg_send_IMCU_REMOTE_GPS(&((_trans).trans_tx), &((_dev).device), AC_ID, ecef_x, ecef_y, ecef_z, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, course, gspeed, pacc, sacc, numsv, fix)
static inline void pprz_msg_send_IMCU_REMOTE_GPS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ecef_x, int32_t *_ecef_y, int32_t *_ecef_z, int32_t *_alt, int32_t *_hmsl, int32_t *_ecef_xd, int32_t *_ecef_yd, int32_t *_ecef_zd, int32_t *_course, uint16_t *_gspeed, uint32_t *_pacc, uint32_t *_sacc, uint8_t *_numsv, uint8_t *_fix) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+2+4+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+2+4+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+2+4+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_REMOTE_GPS, "IMCU_REMOTE_GPS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _hmsl, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _course, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _gspeed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _pacc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _sacc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _numsv, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _fix, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_DATALINK(_trans, _dev, nb_msg, msg) pprz_msg_send_IMCU_DATALINK(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_msg, msg)
static inline void pprz_msg_send_IMCU_DATALINK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_msg, uint8_t *_msg) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_msg*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_DATALINK, "IMCU_DATALINK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_msg, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _msg, nb_msg*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_TELEMETRY(_trans, _dev, msg_id, nb_msg, msg) pprz_msg_send_IMCU_TELEMETRY(&((_trans).trans_tx), &((_dev).device), AC_ID, msg_id, nb_msg, msg)
static inline void pprz_msg_send_IMCU_TELEMETRY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_msg_id, uint8_t nb_msg, uint8_t *_msg) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_msg*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_msg*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_msg*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_TELEMETRY, "IMCU_TELEMETRY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _msg_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_msg, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _msg, nb_msg*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_DEBUG(_trans, _dev, nb_msg, msg) pprz_msg_send_IMCU_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_msg, msg)
static inline void pprz_msg_send_IMCU_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_msg, uint8_t *_msg) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_msg*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_DEBUG, "IMCU_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_msg, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _msg, nb_msg*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMCU_PAYLOAD(_trans, _dev, nb_data, data) pprz_msg_send_IMCU_PAYLOAD(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_data, data)
static inline void pprz_msg_send_IMCU_PAYLOAD(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_data, uint8_t *_data) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_data*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_data*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_data*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMCU_PAYLOAD, "IMCU_PAYLOAD");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_data, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _data, nb_data*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#else // DOWNLINK

#define DOWNLINK_SEND_IMCU_COMMANDS(_trans, _dev, status, nb_values, values) {}
static inline void pprz_send_msg_IMCU_COMMANDS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_status __attribute__((unused)), uint8_t nb_values __attribute__((unused)), int16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_RADIO_COMMANDS(_trans, _dev, status, nb_values, values) {}
static inline void pprz_send_msg_IMCU_RADIO_COMMANDS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_status __attribute__((unused)), uint8_t nb_values __attribute__((unused)), int16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_SPEKTRUM_SOFT_BIND(_trans, _dev) {}
static inline void pprz_send_msg_IMCU_SPEKTRUM_SOFT_BIND(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_FBW_STATUS(_trans, _dev, mode, rc_status, frame_rate, vsupply, current) {}
static inline void pprz_send_msg_IMCU_FBW_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_mode __attribute__((unused)), uint8_t *_rc_status __attribute__((unused)), uint8_t *_frame_rate __attribute__((unused)), uint16_t *_vsupply __attribute__((unused)), int32_t *_current __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_REMOTE_MAG(_trans, _dev, mag_x, mag_y, mag_z) {}
static inline void pprz_send_msg_IMCU_REMOTE_MAG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_mag_x __attribute__((unused)), int16_t *_mag_y __attribute__((unused)), int16_t *_mag_z __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_REMOTE_BARO(_trans, _dev, pitot_stat, pitot_temp) {}
static inline void pprz_send_msg_IMCU_REMOTE_BARO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_pitot_stat __attribute__((unused)), float *_pitot_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_REMOTE_AIRSPEED(_trans, _dev, pitot_IAS) {}
static inline void pprz_send_msg_IMCU_REMOTE_AIRSPEED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_pitot_IAS __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_REMOTE_GROUND(_trans, _dev, mode, id, range) {}
static inline void pprz_send_msg_IMCU_REMOTE_GROUND(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_mode __attribute__((unused)), uint8_t *_id __attribute__((unused)), uint16_t *_range __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_REMOTE_GPS(_trans, _dev, ecef_x, ecef_y, ecef_z, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, course, gspeed, pacc, sacc, numsv, fix) {}
static inline void pprz_send_msg_IMCU_REMOTE_GPS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ecef_x __attribute__((unused)), int32_t *_ecef_y __attribute__((unused)), int32_t *_ecef_z __attribute__((unused)), int32_t *_alt __attribute__((unused)), int32_t *_hmsl __attribute__((unused)), int32_t *_ecef_xd __attribute__((unused)), int32_t *_ecef_yd __attribute__((unused)), int32_t *_ecef_zd __attribute__((unused)), int32_t *_course __attribute__((unused)), uint16_t *_gspeed __attribute__((unused)), uint32_t *_pacc __attribute__((unused)), uint32_t *_sacc __attribute__((unused)), uint8_t *_numsv __attribute__((unused)), uint8_t *_fix __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_DATALINK(_trans, _dev, nb_msg, msg) {}
static inline void pprz_send_msg_IMCU_DATALINK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_msg __attribute__((unused)), uint8_t *_msg __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_TELEMETRY(_trans, _dev, msg_id, nb_msg, msg) {}
static inline void pprz_send_msg_IMCU_TELEMETRY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_msg_id __attribute__((unused)), uint8_t nb_msg __attribute__((unused)), uint8_t *_msg __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_DEBUG(_trans, _dev, nb_msg, msg) {}
static inline void pprz_send_msg_IMCU_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_msg __attribute__((unused)), uint8_t *_msg __attribute__((unused))) {}

#define DOWNLINK_SEND_IMCU_PAYLOAD(_trans, _dev, nb_data, data) {}
static inline void pprz_send_msg_IMCU_PAYLOAD(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_data __attribute__((unused)), uint8_t *_data __attribute__((unused))) {}

#endif // DOWNLINK

#define DL_IMCU_COMMANDS_status(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_COMMANDS_values_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_IMCU_COMMANDS_values(_payload) _PPRZ_VAL_int16_t_array(_payload, 4)

#define DL_IMCU_RADIO_COMMANDS_status(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_RADIO_COMMANDS_values_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_IMCU_RADIO_COMMANDS_values(_payload) _PPRZ_VAL_int16_t_array(_payload, 4)



#define DL_IMCU_FBW_STATUS_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_FBW_STATUS_rc_status(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_IMCU_FBW_STATUS_frame_rate(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_IMCU_FBW_STATUS_vsupply(_payload) _PPRZ_VAL_uint16_t(_payload, 5)
#define DL_IMCU_FBW_STATUS_current(_payload) _PPRZ_VAL_int32_t(_payload, 7)

#define DL_IMCU_REMOTE_MAG_mag_x(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_IMCU_REMOTE_MAG_mag_y(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_IMCU_REMOTE_MAG_mag_z(_payload) _PPRZ_VAL_int16_t(_payload, 6)

#define DL_IMCU_REMOTE_BARO_pitot_stat(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_IMCU_REMOTE_BARO_pitot_temp(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_IMCU_REMOTE_AIRSPEED_pitot_IAS(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_IMCU_REMOTE_GROUND_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_REMOTE_GROUND_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_IMCU_REMOTE_GROUND_range(_payload) _PPRZ_VAL_uint16_t(_payload, 4)

#define DL_IMCU_REMOTE_GPS_ecef_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMCU_REMOTE_GPS_ecef_y(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMCU_REMOTE_GPS_ecef_z(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_IMCU_REMOTE_GPS_alt(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_IMCU_REMOTE_GPS_hmsl(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_IMCU_REMOTE_GPS_ecef_xd(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_IMCU_REMOTE_GPS_ecef_yd(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_IMCU_REMOTE_GPS_ecef_zd(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_IMCU_REMOTE_GPS_course(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_IMCU_REMOTE_GPS_gspeed(_payload) _PPRZ_VAL_uint16_t(_payload, 38)
#define DL_IMCU_REMOTE_GPS_pacc(_payload) _PPRZ_VAL_uint32_t(_payload, 40)
#define DL_IMCU_REMOTE_GPS_sacc(_payload) _PPRZ_VAL_uint32_t(_payload, 44)
#define DL_IMCU_REMOTE_GPS_numsv(_payload) _PPRZ_VAL_uint8_t(_payload, 48)
#define DL_IMCU_REMOTE_GPS_fix(_payload) _PPRZ_VAL_uint8_t(_payload, 49)

#define DL_IMCU_DATALINK_msg_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_DATALINK_msg(_payload) _PPRZ_VAL_uint8_t_array(_payload, 3)

#define DL_IMCU_TELEMETRY_msg_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_TELEMETRY_msg_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_IMCU_TELEMETRY_msg(_payload) _PPRZ_VAL_uint8_t_array(_payload, 4)

#define DL_IMCU_DEBUG_msg_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_DEBUG_msg(_payload) _PPRZ_VAL_uint8_t_array(_payload, 3)

#define DL_IMCU_PAYLOAD_data_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMCU_PAYLOAD_data(_payload) _PPRZ_VAL_uint8_t_array(_payload, 3)


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _VAR_MESSAGES_intermcu_H_
