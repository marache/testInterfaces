#-------------------------------------------------
#
# Project created by QtCreator 2014-06-20T09:57:46
#
#-------------------------------------------------

#QT       -= gui

TARGET = Interfaces
TEMPLATE = lib

DEFINES += INTERFACES_LIBRARY

SOURCES += \
    PluginInterface.cpp \
    SettingsInterface.cpp \
    PerspectivePlugin.cpp

HEADERS += Interfaces.h \
    PluginInterface.h \
    SettingsInterface.h\
    interfaces_global.h \
    PerspectivePlugin.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
