
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
#include "qmi-enums-wda.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_WDA__
#define __LIBQMI_GLIB_QMI_WDA__

G_BEGIN_DECLS


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Set Data Format */


/* --- Input -- */

/**
 * QmiMessageWdaSetDataFormatInput:
 *
 * The #QmiMessageWdaSetDataFormatInput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessageWdaSetDataFormatInput QmiMessageWdaSetDataFormatInput;
GType qmi_message_wda_set_data_format_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_SET_DATA_FORMAT_INPUT (qmi_message_wda_set_data_format_input_get_type ())

gboolean qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *downlink_data_aggregation_max_size,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 downlink_data_aggregation_max_size,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *downlink_data_aggregation_max_datagrams,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 downlink_data_aggregation_max_datagrams,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_get_ndp_signature (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *ndp_signature,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_ndp_signature (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 ndp_signature,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol *downlink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol downlink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_get_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol *uplink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol uplink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_get_link_layer_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaLinkLayerProtocol *link_layer_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_link_layer_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaLinkLayerProtocol link_layer_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_get_qos_format (
    QmiMessageWdaSetDataFormatInput *self,
    gboolean *qos_format,
    GError **error);

gboolean qmi_message_wda_set_data_format_input_set_qos_format (
    QmiMessageWdaSetDataFormatInput *self,
    gboolean qos_format,
    GError **error);

QmiMessageWdaSetDataFormatInput *qmi_message_wda_set_data_format_input_ref (QmiMessageWdaSetDataFormatInput *self);
void qmi_message_wda_set_data_format_input_unref (QmiMessageWdaSetDataFormatInput *self);
QmiMessageWdaSetDataFormatInput *qmi_message_wda_set_data_format_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdaSetDataFormatOutput:
 *
 * The #QmiMessageWdaSetDataFormatOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessageWdaSetDataFormatOutput QmiMessageWdaSetDataFormatOutput;
GType qmi_message_wda_set_data_format_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT (qmi_message_wda_set_data_format_output_get_type ())

gboolean qmi_message_wda_set_data_format_output_get_result (
    QmiMessageWdaSetDataFormatOutput *self,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_qos_format (
    QmiMessageWdaSetDataFormatOutput *self,
    gboolean *qos_format,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_link_layer_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaLinkLayerProtocol *link_layer_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *uplink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *downlink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_ndp_signature (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *ndp_signature,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *downlink_data_aggregation_max_datagrams,
    GError **error);

gboolean qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *downlink_data_aggregation_max_size,
    GError **error);

QmiMessageWdaSetDataFormatOutput *qmi_message_wda_set_data_format_output_ref (QmiMessageWdaSetDataFormatOutput *self);
void qmi_message_wda_set_data_format_output_unref (QmiMessageWdaSetDataFormatOutput *self);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Get Data Format */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdaGetDataFormatOutput:
 *
 * The #QmiMessageWdaGetDataFormatOutput structure contains private data and should only be accessed
 * using the provided API.
 */
typedef struct _QmiMessageWdaGetDataFormatOutput QmiMessageWdaGetDataFormatOutput;
GType qmi_message_wda_get_data_format_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT (qmi_message_wda_get_data_format_output_get_type ())

gboolean qmi_message_wda_get_data_format_output_get_result (
    QmiMessageWdaGetDataFormatOutput *self,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_qos_format (
    QmiMessageWdaGetDataFormatOutput *self,
    gboolean *qos_format,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_link_layer_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaLinkLayerProtocol *link_layer_protocol,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *uplink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *downlink_data_aggregation_protocol,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_ndp_signature (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *ndp_signature,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_max_size (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *uplink_data_aggregation_max_size,
    GError **error);

gboolean qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_max_size (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *downlink_data_aggregation_max_size,
    GError **error);

QmiMessageWdaGetDataFormatOutput *qmi_message_wda_get_data_format_output_ref (QmiMessageWdaGetDataFormatOutput *self);
void qmi_message_wda_get_data_format_output_unref (QmiMessageWdaGetDataFormatOutput *self);

/*****************************************************************************/
/* Service-specific printable: WDA */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_wda_get_printable (
    QmiMessage *self,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_wda_get_version_introduced (
    QmiMessage *self,
    guint *major,
    guint *minor);

#endif


/*****************************************************************************/
/* CLIENT: QMI Client WDA */

#define QMI_TYPE_CLIENT_WDA            (qmi_client_wda_get_type ())
#define QMI_CLIENT_WDA(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_WDA, QmiClientWda))
#define QMI_CLIENT_WDA_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_WDA, QmiClientWdaClass))
#define QMI_IS_CLIENT_WDA(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_WDA))
#define QMI_IS_CLIENT_WDA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_WDA))
#define QMI_CLIENT_WDA_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_WDA, QmiClientWdaClass))

typedef struct _QmiClientWda QmiClientWda;
typedef struct _QmiClientWdaClass QmiClientWdaClass;

/**
 * QmiClientWda:
 *
 * The #QmiClientWda structure contains private data and should only be accessed
 * using the provided API.
 */
struct _QmiClientWda {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientWdaClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_wda_get_type (void);


void qmi_client_wda_set_data_format (
    QmiClientWda *self,
    QmiMessageWdaSetDataFormatInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessageWdaSetDataFormatOutput *qmi_client_wda_set_data_format_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_wda_get_data_format (
    QmiClientWda *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
QmiMessageWdaGetDataFormatOutput *qmi_client_wda_get_data_format_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_WDA__ */
