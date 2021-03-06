/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p timedate1interface /home/ndr/projects/libsystemd-qt/dbus/introspection/org.freedesktop.timedate1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef TIMEDATE1INTERFACE_H_1364907518
#define TIMEDATE1INTERFACE_H_1364907518

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
 * Proxy class for interface org.freedesktop.timedate1
 */
class OrgFreedesktopTimedate1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.timedate1"; }

public:
    OrgFreedesktopTimedate1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopTimedate1Interface();

    Q_PROPERTY(bool CanNTP READ canNTP)
    inline bool canNTP() const
    { return qvariant_cast< bool >(property("CanNTP")); }

    Q_PROPERTY(bool LocalRTC READ localRTC)
    inline bool localRTC() const
    { return qvariant_cast< bool >(property("LocalRTC")); }

    Q_PROPERTY(bool NTP READ nTP)
    inline bool nTP() const
    { return qvariant_cast< bool >(property("NTP")); }

    Q_PROPERTY(QString Timezone READ timezone)
    inline QString timezone() const
    { return qvariant_cast< QString >(property("Timezone")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> SetLocalRTC(bool local_rtc, bool fix_system, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(local_rtc) << QVariant::fromValue(fix_system) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetLocalRTC"), argumentList);
    }

    inline QDBusPendingReply<> SetNTP(bool use_ntp, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(use_ntp) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetNTP"), argumentList);
    }

    inline QDBusPendingReply<> SetTime(qlonglong usec_utc, bool relative, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(usec_utc) << QVariant::fromValue(relative) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetTime"), argumentList);
    }

    inline QDBusPendingReply<> SetTimezone(const QString &timezone, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(timezone) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetTimezone"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
