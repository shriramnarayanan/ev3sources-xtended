
/* File: eggdbuspeer.h
 *
 * Generated by eggdbus-binding-tool 0.6. Do not edit.
 */

#ifndef __EGG_DBUS_PEER_H
#define __EGG_DBUS_PEER_H

#include <glib-object.h>
#include <gio/gio.h>
#include <eggdbus/eggdbustypes.h>
#include <eggdbus/eggdbusinterface.h>
#include <eggdbus/eggdbusinterfaceproxy.h>
#include <eggdbus/eggdbusrequestnameflags.h>
#include <eggdbus/eggdbusrequestnamereply.h>
#include <eggdbus/eggdbusreleasenamereply.h>
#include <eggdbus/eggdbusstartservicebynamereply.h>

G_BEGIN_DECLS

#define EGG_DBUS_TYPE_PEER         (egg_dbus_peer_get_type())
#define EGG_DBUS_PEER(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), EGG_DBUS_TYPE_PEER, EggDBusPeer))
#define EGG_DBUS_IS_PEER(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), EGG_DBUS_TYPE_PEER))
#define EGG_DBUS_PEER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), EGG_DBUS_TYPE_PEER, EggDBusPeerIface))

#if 0
typedef struct _EggDBusPeer EggDBusPeer; /* Dummy typedef */
#endif
typedef struct _EggDBusPeerIface EggDBusPeerIface;

/**
 * EGG_DBUS_QUERY_INTERFACE_PEER:
 * @object_proxy: A #EggDBusObjectProxy.
 *
 * Convenience macro to get an interface proxy for the remote object represented
 * by @object_proxy. See egg_dbus_object_proxy_query_interface() for details.
 *
 * Returns: An instance derived from #EggDBusInterfaceProxy that implements the
 *          #EggDBusPeer interface. This instance can be used to access the
 *          <link linkend="eggdbus-interface-org.freedesktop.DBus.Peer">org.freedesktop.DBus.Peer</link> D-Bus interface on the remote
 *          object represented by @object_proxy. Do not ref or unref the returned instance,
 *          it is owned by @object_proxy.
 */
#define EGG_DBUS_QUERY_INTERFACE_PEER(object_proxy) (EGG_DBUS_PEER (egg_dbus_object_proxy_query_interface (object_proxy, EGG_DBUS_TYPE_PEER)))

/**
 * EggDBusPeerIface:
 * @g_iface: The parent interface.
 * @handle_ping: A method used to diagnose whether an object is reachable.
 * @handle_get_machine_id: Gets the Machine UUID of the machine hosting the object.
 *
 * Interface VTable for implementing the <link linkend="eggdbus-interface-org.freedesktop.DBus.Peer">org.freedesktop.DBus.Peer</link> D-Bus interface.
 */
struct _EggDBusPeerIface
{
  EggDBusInterfaceIface g_iface;

  void (* handle_ping) (
      EggDBusPeer *instance,
      EggDBusMethodInvocation *method_invocation);

  void (* handle_get_machine_id) (
      EggDBusPeer *instance,
      EggDBusMethodInvocation *method_invocation);
};

GType egg_dbus_peer_get_type (void) G_GNUC_CONST;

gboolean egg_dbus_peer_ping_sync (
    EggDBusPeer *instance,
    EggDBusCallFlags call_flags,
    GCancellable *cancellable,
    GError **error);

gboolean egg_dbus_peer_get_machine_id_sync (
    EggDBusPeer *instance,
    EggDBusCallFlags call_flags,
    gchar **out_machine_uuid,
    GCancellable *cancellable,
    GError **error);

guint egg_dbus_peer_ping (
    EggDBusPeer *instance,
    EggDBusCallFlags call_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean egg_dbus_peer_ping_finish (
    EggDBusPeer *instance,
    GAsyncResult *res,
    GError **error);

guint egg_dbus_peer_get_machine_id (
    EggDBusPeer *instance,
    EggDBusCallFlags call_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean egg_dbus_peer_get_machine_id_finish (
    EggDBusPeer *instance,
    gchar **out_machine_uuid,
    GAsyncResult *res,
    GError **error);

void egg_dbus_peer_handle_ping_finish (
    EggDBusMethodInvocation *method_invocation);

void egg_dbus_peer_handle_get_machine_id_finish (
    EggDBusMethodInvocation *method_invocation,
    const gchar *out_machine_uuid);

G_END_DECLS

#endif /* __EGG_DBUS_PEER_H */
