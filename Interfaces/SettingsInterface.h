#ifndef SETTINGSINTERFACE_H
#define SETTINGSINTERFACE_H

#include "interfaces_global.h"

#include <QObject>
#include <QSettings>

class INTERFACESSHARED_EXPORT SettingsInterface
{
public:
    virtual ~SettingsInterface();

    virtual void toQSettings(QSettings &)=0;

    virtual void fromQSettings(const QSettings &)=0;

    virtual QWidget* configurationWidget() =0;
signals:

public slots:

};

Q_DECLARE_INTERFACE( SettingsInterface, "fr.cstb.Interfaces.SettingsInterface/1.0" )

#endif // SETTINGSINTERFACE_H
