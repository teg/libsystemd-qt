/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p locale1interface /home/ndr/projects/libsystemd-qt/dbus/introspection/org.freedesktop.locale1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef LOCALE1INTERFACE_H_1364907519
#define LOCALE1INTERFACE_H_1364907519

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
 * Proxy class for interface org.freedesktop.locale1
 */
class OrgFreedesktopLocale1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.locale1"; }

public:
    OrgFreedesktopLocale1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopLocale1Interface();

    Q_PROPERTY(QStringList Locale READ locale)
    inline QStringList locale() const
    { return qvariant_cast< QStringList >(property("Locale")); }

    Q_PROPERTY(QString VConsoleKeymap READ vConsoleKeymap)
    inline QString vConsoleKeymap() const
    { return qvariant_cast< QString >(property("VConsoleKeymap")); }

    Q_PROPERTY(QString VConsoleKeymapToggle READ vConsoleKeymapToggle)
    inline QString vConsoleKeymapToggle() const
    { return qvariant_cast< QString >(property("VConsoleKeymapToggle")); }

    Q_PROPERTY(QString X11Layout READ x11Layout)
    inline QString x11Layout() const
    { return qvariant_cast< QString >(property("X11Layout")); }

    Q_PROPERTY(QString X11Model READ x11Model)
    inline QString x11Model() const
    { return qvariant_cast< QString >(property("X11Model")); }

    Q_PROPERTY(QString X11Options READ x11Options)
    inline QString x11Options() const
    { return qvariant_cast< QString >(property("X11Options")); }

    Q_PROPERTY(QString X11Variant READ x11Variant)
    inline QString x11Variant() const
    { return qvariant_cast< QString >(property("X11Variant")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> SetLocale(const QStringList &locale, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(locale) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetLocale"), argumentList);
    }

    inline QDBusPendingReply<> SetVConsoleKeyboard(const QString &keymap, const QString &keymap_toggle, bool convert, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(keymap) << QVariant::fromValue(keymap_toggle) << QVariant::fromValue(convert) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetVConsoleKeyboard"), argumentList);
    }

    inline QDBusPendingReply<> SetX11Keyboard(const QString &layout, const QString &model, const QString &variant, const QString &options, bool convert, bool user_interaction)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(layout) << QVariant::fromValue(model) << QVariant::fromValue(variant) << QVariant::fromValue(options) << QVariant::fromValue(convert) << QVariant::fromValue(user_interaction);
        return asyncCallWithArgumentList(QLatin1String("SetX11Keyboard"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
