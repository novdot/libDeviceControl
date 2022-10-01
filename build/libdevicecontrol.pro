######################################################
# path
ROOT_PATH = ..

SOURCE_PATH = $$ROOT_PATH/source
FORMS_PATH = $$ROOT_PATH/source
INCLUDE_PATH = $$ROOT_PATH/include
INCLUDEPATH += $$INCLUDE_PATH
######################################################
#libs
LIBS +=
INCLUDEPATH +=
DEPENDPATH +=
######################################################
#version by git
#git tag v1.0
#always run qmake
DEFINES += GIT_VERSION=0#\\\"$$system($$quote(git describe --tags))\\\"
DEFINES += GIT_TIMESTAMP=0#\\\"$$system($$quote(git log -n 1 --format=format:\\\"%ai\\\"))\\\"

######################################################

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DeviceControl
TEMPLATE = lib

CONFIG += c++11

DESTDIR = $$ROOT_PATH/bin
MOC_DIR = $$ROOT_PATH/temp/moc
OBJECTS_DIR = $$ROOT_PATH/temp/obj
RCC_DIR = $$ROOT_PATH/temp/rcc
UI_DIR = $$ROOT_PATH/temp/uic

######################################################
#defines

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

######################################################
SOURCES += \
    $$SOURCE_PATH/protocolinterface.cpp \
    $$SOURCE_PATH/formprotocolbase.cpp \

HEADERS += \
    $$INCLUDE_PATH/protocolinterface.h \
    $$INCLUDE_PATH/formprotocolbase.h \

FORMS += \
    $$SOURCE_PATH/formprotocolbase.ui

######################################################
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
