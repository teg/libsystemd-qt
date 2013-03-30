/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p deviceinterface /home/ndr/projects/libsystemd-qt/dbus/introspection/org.freedesktop.systemd1.Device.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DEVICEINTERFACE_H_1364657298
#define DEVICEINTERFACE_H_1364657298

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "generic-types.h"

/*
 * Proxy class for interface org.freedesktop.systemd1.Device
 */
class OrgFreedesktopSystemd1DeviceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.systemd1.Device"; }

public:
    OrgFreedesktopSystemd1DeviceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopSystemd1DeviceInterface();

    Q_PROPERTY(QString SysFSPath READ sysFSPath)
    inline QString sysFSPath() const
    { return qvariant_cast< QString >(property("SysFSPath")); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif