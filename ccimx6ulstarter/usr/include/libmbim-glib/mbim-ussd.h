
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
 * Copyright (C) 2013 - 2014 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "mbim-message.h"
#include "mbim-device.h"
#include "mbim-enums.h"

#ifndef __LIBMBIM_GLIB_MBIM_USSD__
#define __LIBMBIM_GLIB_MBIM_USSD__

G_BEGIN_DECLS

/*****************************************************************************/
/* Message (Set): MBIM Message USSD */

MbimMessage *mbim_message_ussd_set_new (
    MbimUssdAction action,
    guint32 data_coding_scheme,
    const guint32 payload_size,
    const guint8 *payload,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message USSD */

gboolean mbim_message_ussd_response_parse (
    const MbimMessage *message,
    MbimUssdResponse *response,
    MbimUssdSessionState *session_state,
    guint32 *data_coding_scheme,
    guint32 *payload_size,
    const guint8 **payload,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message USSD */

gboolean mbim_message_ussd_notification_parse (
    const MbimMessage *message,
    MbimUssdResponse *response,
    MbimUssdSessionState *session_state,
    guint32 *data_coding_scheme,
    guint32 *payload_size,
    const guint8 **payload,
    GError **error);

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_USSD__ */
