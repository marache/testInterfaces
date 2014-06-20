#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include "interfaces_global.h"

#include <QObject>
#include <QtPlugin>

class INTERFACESSHARED_EXPORT PluginInterface
{
public:
    virtual ~PluginInterface();

    /**
     * @brief Returns the user-visible name of the plugin.
     */
    virtual QString name() const = 0;
    /**
     * @brief Returns the unique name of the plugin.
     */
    virtual QString nameId() const = 0;

    virtual QString version() const = 0;

signals:

public slots:

};

Q_DECLARE_INTERFACE( PluginInterface, "fr.cstb.Interfaces.PluginInterface/1.0" )

#endif // PLUGININTERFACE_H
