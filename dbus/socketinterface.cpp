/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p socketinterface /home/ndr/projects/libsystemd-qt/dbus/introspection/org.freedesktop.systemd1.Socket.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "socketinterface.h"

/*
 * Implementation of interface class OrgFreedesktopSystemd1SocketInterface
 */

OrgFreedesktopSystemd1SocketInterface::OrgFreedesktopSystemd1SocketInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgFreedesktopSystemd1SocketInterface::~OrgFreedesktopSystemd1SocketInterface()
{
}


#include "socketinterface.moc"
