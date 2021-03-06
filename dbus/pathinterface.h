/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p pathinterface /home/ndr/projects/libsystemd-qt/dbus/introspection/org.freedesktop.systemd1.Path.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef PATHINTERFACE_H_1364907520
#define PATHINTERFACE_H_1364907520

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
 * Proxy class for interface org.freedesktop.systemd1.Path
 */
class OrgFreedesktopSystemd1PathInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.systemd1.Path"; }

public:
    OrgFreedesktopSystemd1PathInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopSystemd1PathInterface();

    Q_PROPERTY(uint DirectoryMode READ directoryMode)
    inline uint directoryMode() const
    { return qvariant_cast< uint >(property("DirectoryMode")); }

    Q_PROPERTY(bool MakeDirectory READ makeDirectory)
    inline bool makeDirectory() const
    { return qvariant_cast< bool >(property("MakeDirectory")); }

    Q_PROPERTY(PathDBusPathList Paths READ paths)
    inline PathDBusPathList paths() const
    { return qvariant_cast< PathDBusPathList >(property("Paths")); }

    Q_PROPERTY(QString Result READ result)
    inline QString result() const
    { return qvariant_cast< QString >(property("Result")); }

    Q_PROPERTY(QString Unit READ unit)
    inline QString unit() const
    { return qvariant_cast< QString >(property("Unit")); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif
