
/* GENERATED CODE... DO NOT EDIT */

/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2012 Lanedo GmbH
 * Copyright (C) 2012-2015 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "qmi-enums.h"
#include "qmi-enums-pds.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_PDS__
#define __LIBQMI_GLIB_QMI_PDS__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsResetOutput:
 *
 * The #QmiMessagePdsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsResetOutput QmiMessagePdsResetOutput;
GType qmi_message_pds_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_RESET_OUTPUT (qmi_message_pds_reset_output_get_type ())

gboolean qmi_message_pds_reset_output_get_result (
    QmiMessagePdsResetOutput *self,
    GError **error);

QmiMessagePdsResetOutput *qmi_message_pds_reset_output_ref (QmiMessagePdsResetOutput *self);
void qmi_message_pds_reset_output_unref (QmiMessagePdsResetOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Event Report */


/* --- Input -- */

/**
 * QmiMessagePdsSetEventReportInput:
 *
 * The #QmiMessagePdsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetEventReportInput QmiMessagePdsSetEventReportInput;
GType qmi_message_pds_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_EVENT_REPORT_INPUT (qmi_message_pds_set_event_report_input_get_type ())

gboolean qmi_message_pds_set_event_report_input_get_extended_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *extended_external_xtra_data_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_extended_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean extended_external_xtra_data_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_nmea_debug_strings_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *nmea_debug_strings_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_nmea_debug_strings_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean nmea_debug_strings_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_heading_uncertainty_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *heading_uncertainty_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_heading_uncertainty_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean heading_uncertainty_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_time_source_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *time_source_information_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_time_source_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean time_source_information_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_sensor_data_usage_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *sensor_data_usage_indicator_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_sensor_data_usage_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean sensor_data_usage_indicator_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_position_reliability_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *position_reliability_indicator_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_position_reliability_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean position_reliability_indicator_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_time_sync_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *time_sync_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_time_sync_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean time_sync_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_gyro_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *gyro_data_streaming_ready_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_gyro_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean gyro_data_streaming_ready_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_accelerometer_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *accelerometer_data_streaming_ready_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_accelerometer_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean accelerometer_data_streaming_ready_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_pds_comm_event_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *pds_comm_event_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_pds_comm_event_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean pds_comm_event_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_umts_cp_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *umts_cp_network_initiated_prompt_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_umts_cp_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean umts_cp_network_initiated_prompt_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_supl_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *supl_network_initiated_prompt_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_supl_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean supl_network_initiated_prompt_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_vx_network_initiated_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *vx_network_initiated_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_vx_network_initiated_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean vx_network_initiated_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_satellite_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *satellite_information_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_satellite_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean satellite_information_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_external_wifi_position_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *external_wifi_position_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_external_wifi_position_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean external_wifi_position_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_external_time_injection_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *external_time_injection_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_external_time_injection_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean external_time_injection_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *external_xtra_data_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean external_xtra_data_request_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_parsed_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *parsed_position_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_parsed_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean parsed_position_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_extended_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *extended_nmea_position_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_extended_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean extended_nmea_position_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_get_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *nmea_position_reporting,
    GError **error);

gboolean qmi_message_pds_set_event_report_input_set_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean nmea_position_reporting,
    GError **error);

QmiMessagePdsSetEventReportInput *qmi_message_pds_set_event_report_input_ref (QmiMessagePdsSetEventReportInput *self);
void qmi_message_pds_set_event_report_input_unref (QmiMessagePdsSetEventReportInput *self);
QmiMessagePdsSetEventReportInput *qmi_message_pds_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetEventReportOutput:
 *
 * The #QmiMessagePdsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetEventReportOutput QmiMessagePdsSetEventReportOutput;
GType qmi_message_pds_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_EVENT_REPORT_OUTPUT (qmi_message_pds_set_event_report_output_get_type ())

gboolean qmi_message_pds_set_event_report_output_get_result (
    QmiMessagePdsSetEventReportOutput *self,
    GError **error);

QmiMessagePdsSetEventReportOutput *qmi_message_pds_set_event_report_output_ref (QmiMessagePdsSetEventReportOutput *self);
void qmi_message_pds_set_event_report_output_unref (QmiMessagePdsSetEventReportOutput *self);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDS Event Report */


/* --- Output -- */

/**
 * QmiIndicationPdsEventReportOutput:
 *
 * The #QmiIndicationPdsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiIndicationPdsEventReportOutput QmiIndicationPdsEventReportOutput;
GType qmi_indication_pds_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDS_EVENT_REPORT_OUTPUT (qmi_indication_pds_event_report_output_get_type ())

gboolean qmi_indication_pds_event_report_output_get_position_session_status (
    QmiIndicationPdsEventReportOutput *self,
    QmiPdsPositionSessionStatus *position_session_status,
    GError **error);

gboolean qmi_indication_pds_event_report_output_get_extended_nmea_position (
    QmiIndicationPdsEventReportOutput *self,
    QmiPdsOperationMode *extended_nmea_position_operation_mode,
    const gchar **extended_nmea_position_nmea,
    GError **error);

gboolean qmi_indication_pds_event_report_output_get_nmea_position (
    QmiIndicationPdsEventReportOutput *self,
    const gchar **nmea_position,
    GError **error);

QmiIndicationPdsEventReportOutput *qmi_indication_pds_event_report_output_ref (QmiIndicationPdsEventReportOutput *self);
void qmi_indication_pds_event_report_output_unref (QmiIndicationPdsEventReportOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get GPS Service State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsGetGpsServiceStateOutput:
 *
 * The #QmiMessagePdsGetGpsServiceStateOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsGetGpsServiceStateOutput QmiMessagePdsGetGpsServiceStateOutput;
GType qmi_message_pds_get_gps_service_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT (qmi_message_pds_get_gps_service_state_output_get_type ())

gboolean qmi_message_pds_get_gps_service_state_output_get_result (
    QmiMessagePdsGetGpsServiceStateOutput *self,
    GError **error);

gboolean qmi_message_pds_get_gps_service_state_output_get_state (
    QmiMessagePdsGetGpsServiceStateOutput *self,
    gboolean *state_gps_service_state,
    QmiPdsTrackingSessionState *state_tracking_session_state,
    GError **error);

QmiMessagePdsGetGpsServiceStateOutput *qmi_message_pds_get_gps_service_state_output_ref (QmiMessagePdsGetGpsServiceStateOutput *self);
void qmi_message_pds_get_gps_service_state_output_unref (QmiMessagePdsGetGpsServiceStateOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set GPS Service State */


/* --- Input -- */

/**
 * QmiMessagePdsSetGpsServiceStateInput:
 *
 * The #QmiMessagePdsSetGpsServiceStateInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetGpsServiceStateInput QmiMessagePdsSetGpsServiceStateInput;
GType qmi_message_pds_set_gps_service_state_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_GPS_SERVICE_STATE_INPUT (qmi_message_pds_set_gps_service_state_input_get_type ())

gboolean qmi_message_pds_set_gps_service_state_input_get_state (
    QmiMessagePdsSetGpsServiceStateInput *self,
    gboolean *state_gps_service_state,
    GError **error);

gboolean qmi_message_pds_set_gps_service_state_input_set_state (
    QmiMessagePdsSetGpsServiceStateInput *self,
    gboolean state_gps_service_state,
    GError **error);

QmiMessagePdsSetGpsServiceStateInput *qmi_message_pds_set_gps_service_state_input_ref (QmiMessagePdsSetGpsServiceStateInput *self);
void qmi_message_pds_set_gps_service_state_input_unref (QmiMessagePdsSetGpsServiceStateInput *self);
QmiMessagePdsSetGpsServiceStateInput *qmi_message_pds_set_gps_service_state_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetGpsServiceStateOutput:
 *
 * The #QmiMessagePdsSetGpsServiceStateOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetGpsServiceStateOutput QmiMessagePdsSetGpsServiceStateOutput;
GType qmi_message_pds_set_gps_service_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_GPS_SERVICE_STATE_OUTPUT (qmi_message_pds_set_gps_service_state_output_get_type ())

gboolean qmi_message_pds_set_gps_service_state_output_get_result (
    QmiMessagePdsSetGpsServiceStateOutput *self,
    GError **error);

QmiMessagePdsSetGpsServiceStateOutput *qmi_message_pds_set_gps_service_state_output_ref (QmiMessagePdsSetGpsServiceStateOutput *self);
void qmi_message_pds_set_gps_service_state_output_unref (QmiMessagePdsSetGpsServiceStateOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get Default Tracking Session */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsGetDefaultTrackingSessionOutput:
 *
 * The #QmiMessagePdsGetDefaultTrackingSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsGetDefaultTrackingSessionOutput QmiMessagePdsGetDefaultTrackingSessionOutput;
GType qmi_message_pds_get_default_tracking_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT (qmi_message_pds_get_default_tracking_session_output_get_type ())

gboolean qmi_message_pds_get_default_tracking_session_output_get_result (
    QmiMessagePdsGetDefaultTrackingSessionOutput *self,
    GError **error);

gboolean qmi_message_pds_get_default_tracking_session_output_get_info (
    QmiMessagePdsGetDefaultTrackingSessionOutput *self,
    QmiPdsOperatingMode *info_session_operation,
    guint8 *info_position_data_timeout,
    guint32 *info_interval,
    guint32 *info_accuracy_threshold,
    GError **error);

QmiMessagePdsGetDefaultTrackingSessionOutput *qmi_message_pds_get_default_tracking_session_output_ref (QmiMessagePdsGetDefaultTrackingSessionOutput *self);
void qmi_message_pds_get_default_tracking_session_output_unref (QmiMessagePdsGetDefaultTrackingSessionOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Default Tracking Session */


/* --- Input -- */

/**
 * QmiMessagePdsSetDefaultTrackingSessionInput:
 *
 * The #QmiMessagePdsSetDefaultTrackingSessionInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetDefaultTrackingSessionInput QmiMessagePdsSetDefaultTrackingSessionInput;
GType qmi_message_pds_set_default_tracking_session_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_INPUT (qmi_message_pds_set_default_tracking_session_input_get_type ())

gboolean qmi_message_pds_set_default_tracking_session_input_get_info (
    QmiMessagePdsSetDefaultTrackingSessionInput *self,
    QmiPdsOperatingMode *info_session_operation,
    guint8 *info_position_data_timeout,
    guint32 *info_interval,
    guint32 *info_accuracy_threshold,
    GError **error);

gboolean qmi_message_pds_set_default_tracking_session_input_set_info (
    QmiMessagePdsSetDefaultTrackingSessionInput *self,
    QmiPdsOperatingMode info_session_operation,
    guint8 info_position_data_timeout,
    guint32 info_interval,
    guint32 info_accuracy_threshold,
    GError **error);

QmiMessagePdsSetDefaultTrackingSessionInput *qmi_message_pds_set_default_tracking_session_input_ref (QmiMessagePdsSetDefaultTrackingSessionInput *self);
void qmi_message_pds_set_default_tracking_session_input_unref (QmiMessagePdsSetDefaultTrackingSessionInput *self);
QmiMessagePdsSetDefaultTrackingSessionInput *qmi_message_pds_set_default_tracking_session_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetDefaultTrackingSessionOutput:
 *
 * The #QmiMessagePdsSetDefaultTrackingSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetDefaultTrackingSessionOutput QmiMessagePdsSetDefaultTrackingSessionOutput;
GType qmi_message_pds_set_default_tracking_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_OUTPUT (qmi_message_pds_set_default_tracking_session_output_get_type ())

gboolean qmi_message_pds_set_default_tracking_session_output_get_result (
    QmiMessagePdsSetDefaultTrackingSessionOutput *self,
    GError **error);

QmiMessagePdsSetDefaultTrackingSessionOutput *qmi_message_pds_set_default_tracking_session_output_ref (QmiMessagePdsSetDefaultTrackingSessionOutput *self);
void qmi_message_pds_set_default_tracking_session_output_unref (QmiMessagePdsSetDefaultTrackingSessionOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get AGPS Config */


/* --- Input -- */

/**
 * QmiMessagePdsGetAgpsConfigInput:
 *
 * The #QmiMessagePdsGetAgpsConfigInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsGetAgpsConfigInput QmiMessagePdsGetAgpsConfigInput;
GType qmi_message_pds_get_agps_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_AGPS_CONFIG_INPUT (qmi_message_pds_get_agps_config_input_get_type ())

gboolean qmi_message_pds_get_agps_config_input_get_network_mode (
    QmiMessagePdsGetAgpsConfigInput *self,
    QmiPdsNetworkMode *network_mode,
    GError **error);

gboolean qmi_message_pds_get_agps_config_input_set_network_mode (
    QmiMessagePdsGetAgpsConfigInput *self,
    QmiPdsNetworkMode network_mode,
    GError **error);

QmiMessagePdsGetAgpsConfigInput *qmi_message_pds_get_agps_config_input_ref (QmiMessagePdsGetAgpsConfigInput *self);
void qmi_message_pds_get_agps_config_input_unref (QmiMessagePdsGetAgpsConfigInput *self);
QmiMessagePdsGetAgpsConfigInput *qmi_message_pds_get_agps_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsGetAgpsConfigOutput:
 *
 * The #QmiMessagePdsGetAgpsConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsGetAgpsConfigOutput QmiMessagePdsGetAgpsConfigOutput;
GType qmi_message_pds_get_agps_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT (qmi_message_pds_get_agps_config_output_get_type ())

gboolean qmi_message_pds_get_agps_config_output_get_result (
    QmiMessagePdsGetAgpsConfigOutput *self,
    GError **error);

gboolean qmi_message_pds_get_agps_config_output_get_location_server_address (
    QmiMessagePdsGetAgpsConfigOutput *self,
    guint32 *location_server_address_ip,
    guint32 *location_server_address_port,
    GError **error);

gboolean qmi_message_pds_get_agps_config_output_get_location_server_url (
    QmiMessagePdsGetAgpsConfigOutput *self,
    GArray **location_server_url,
    GError **error);

QmiMessagePdsGetAgpsConfigOutput *qmi_message_pds_get_agps_config_output_ref (QmiMessagePdsGetAgpsConfigOutput *self);
void qmi_message_pds_get_agps_config_output_unref (QmiMessagePdsGetAgpsConfigOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set AGPS Config */


/* --- Input -- */

/**
 * QmiMessagePdsSetAgpsConfigInput:
 *
 * The #QmiMessagePdsSetAgpsConfigInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetAgpsConfigInput QmiMessagePdsSetAgpsConfigInput;
GType qmi_message_pds_set_agps_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT (qmi_message_pds_set_agps_config_input_get_type ())

gboolean qmi_message_pds_set_agps_config_input_get_network_mode (
    QmiMessagePdsSetAgpsConfigInput *self,
    QmiPdsNetworkMode *network_mode,
    GError **error);

gboolean qmi_message_pds_set_agps_config_input_set_network_mode (
    QmiMessagePdsSetAgpsConfigInput *self,
    QmiPdsNetworkMode network_mode,
    GError **error);

gboolean qmi_message_pds_set_agps_config_input_get_location_server_url (
    QmiMessagePdsSetAgpsConfigInput *self,
    GArray **location_server_url,
    GError **error);

gboolean qmi_message_pds_set_agps_config_input_set_location_server_url (
    QmiMessagePdsSetAgpsConfigInput *self,
    GArray *location_server_url,
    GError **error);

gboolean qmi_message_pds_set_agps_config_input_get_location_server_address (
    QmiMessagePdsSetAgpsConfigInput *self,
    guint32 *location_server_address_ip,
    guint32 *location_server_address_port,
    GError **error);

gboolean qmi_message_pds_set_agps_config_input_set_location_server_address (
    QmiMessagePdsSetAgpsConfigInput *self,
    guint32 location_server_address_ip,
    guint32 location_server_address_port,
    GError **error);

QmiMessagePdsSetAgpsConfigInput *qmi_message_pds_set_agps_config_input_ref (QmiMessagePdsSetAgpsConfigInput *self);
void qmi_message_pds_set_agps_config_input_unref (QmiMessagePdsSetAgpsConfigInput *self);
QmiMessagePdsSetAgpsConfigInput *qmi_message_pds_set_agps_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetAgpsConfigOutput:
 *
 * The #QmiMessagePdsSetAgpsConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetAgpsConfigOutput QmiMessagePdsSetAgpsConfigOutput;
GType qmi_message_pds_set_agps_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AGPS_CONFIG_OUTPUT (qmi_message_pds_set_agps_config_output_get_type ())

gboolean qmi_message_pds_set_agps_config_output_get_result (
    QmiMessagePdsSetAgpsConfigOutput *self,
    GError **error);

QmiMessagePdsSetAgpsConfigOutput *qmi_message_pds_set_agps_config_output_ref (QmiMessagePdsSetAgpsConfigOutput *self);
void qmi_message_pds_set_agps_config_output_unref (QmiMessagePdsSetAgpsConfigOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get Auto Tracking State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsGetAutoTrackingStateOutput:
 *
 * The #QmiMessagePdsGetAutoTrackingStateOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsGetAutoTrackingStateOutput QmiMessagePdsGetAutoTrackingStateOutput;
GType qmi_message_pds_get_auto_tracking_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT (qmi_message_pds_get_auto_tracking_state_output_get_type ())

gboolean qmi_message_pds_get_auto_tracking_state_output_get_result (
    QmiMessagePdsGetAutoTrackingStateOutput *self,
    GError **error);

gboolean qmi_message_pds_get_auto_tracking_state_output_get_state (
    QmiMessagePdsGetAutoTrackingStateOutput *self,
    gboolean *state_auto_tracking_state,
    GError **error);

QmiMessagePdsGetAutoTrackingStateOutput *qmi_message_pds_get_auto_tracking_state_output_ref (QmiMessagePdsGetAutoTrackingStateOutput *self);
void qmi_message_pds_get_auto_tracking_state_output_unref (QmiMessagePdsGetAutoTrackingStateOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Auto Tracking State */


/* --- Input -- */

/**
 * QmiMessagePdsSetAutoTrackingStateInput:
 *
 * The #QmiMessagePdsSetAutoTrackingStateInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetAutoTrackingStateInput QmiMessagePdsSetAutoTrackingStateInput;
GType qmi_message_pds_set_auto_tracking_state_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_INPUT (qmi_message_pds_set_auto_tracking_state_input_get_type ())

gboolean qmi_message_pds_set_auto_tracking_state_input_get_state (
    QmiMessagePdsSetAutoTrackingStateInput *self,
    gboolean *state_auto_tracking_state,
    GError **error);

gboolean qmi_message_pds_set_auto_tracking_state_input_set_state (
    QmiMessagePdsSetAutoTrackingStateInput *self,
    gboolean state_auto_tracking_state,
    GError **error);

QmiMessagePdsSetAutoTrackingStateInput *qmi_message_pds_set_auto_tracking_state_input_ref (QmiMessagePdsSetAutoTrackingStateInput *self);
void qmi_message_pds_set_auto_tracking_state_input_unref (QmiMessagePdsSetAutoTrackingStateInput *self);
QmiMessagePdsSetAutoTrackingStateInput *qmi_message_pds_set_auto_tracking_state_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetAutoTrackingStateOutput:
 *
 * The #QmiMessagePdsSetAutoTrackingStateOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessagePdsSetAutoTrackingStateOutput QmiMessagePdsSetAutoTrackingStateOutput;
GType qmi_message_pds_set_auto_tracking_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_OUTPUT (qmi_message_pds_set_auto_tracking_state_output_get_type ())

gboolean qmi_message_pds_set_auto_tracking_state_output_get_result (
    QmiMessagePdsSetAutoTrackingStateOutput *self,
    GError **error);

QmiMessagePdsSetAutoTrackingStateOutput *qmi_message_pds_set_auto_tracking_state_output_ref (QmiMessagePdsSetAutoTrackingStateOutput *self);
void qmi_message_pds_set_auto_tracking_state_output_unref (QmiMessagePdsSetAutoTrackingStateOutput *self);

/*****************************************************************************/
/* Service-specific printable: PDS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_pds_get_printable (
    QmiMessage *self,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_pds_get_version_introduced (
    QmiMessage *self,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client PDS */

#define QMI_TYPE_CLIENT_PDS            (qmi_client_pds_get_type ())
#define QMI_CLIENT_PDS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_PDS, QmiClientPds))
#define QMI_CLIENT_PDS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_PDS, QmiClientPdsClass))
#define QMI_IS_CLIENT_PDS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_PDS))
#define QMI_IS_CLIENT_PDS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_PDS))
#define QMI_CLIENT_PDS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_PDS, QmiClientPdsClass))

typedef struct _QmiClientPds QmiClientPds;
typedef struct _QmiClientPdsClass QmiClientPdsClass;

/**
 * QmiClientPds:
 *
 * The #QmiClientPds structure contains private data and should only be accessed
 * using the provided API.
 */
struct _QmiClientPds {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientPdsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_pds_get_type (void);


void qmi_client_pds_reset (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsResetOutput *qmi_client_pds_reset_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_set_event_report (
    QmiClientPds *self,
    QmiMessagePdsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsSetEventReportOutput *qmi_client_pds_set_event_report_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_get_gps_service_state (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsGetGpsServiceStateOutput *qmi_client_pds_get_gps_service_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_set_gps_service_state (
    QmiClientPds *self,
    QmiMessagePdsSetGpsServiceStateInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsSetGpsServiceStateOutput *qmi_client_pds_set_gps_service_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_get_default_tracking_session (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsGetDefaultTrackingSessionOutput *qmi_client_pds_get_default_tracking_session_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_set_default_tracking_session (
    QmiClientPds *self,
    QmiMessagePdsSetDefaultTrackingSessionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsSetDefaultTrackingSessionOutput *qmi_client_pds_set_default_tracking_session_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_get_agps_config (
    QmiClientPds *self,
    QmiMessagePdsGetAgpsConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsGetAgpsConfigOutput *qmi_client_pds_get_agps_config_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_set_agps_config (
    QmiClientPds *self,
    QmiMessagePdsSetAgpsConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsSetAgpsConfigOutput *qmi_client_pds_set_agps_config_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_get_auto_tracking_state (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsGetAutoTrackingStateOutput *qmi_client_pds_get_auto_tracking_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_pds_set_auto_tracking_state (
    QmiClientPds *self,
    QmiMessagePdsSetAutoTrackingStateInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessagePdsSetAutoTrackingStateOutput *qmi_client_pds_set_auto_tracking_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_PDS__ */
