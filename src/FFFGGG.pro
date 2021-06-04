#-------------------------------------------------
#
# Project:  FFFGGG.pro
# Software: Fuguan
# Qt version:
# > First built with Qt 5.9
# > Later release with Qt 6.0
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FFFGGG
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    startwindow.cpp \
    player.cpp \
    mainwindow.cpp \
    data.cpp \
    votedialog.cpp

HEADERS += \
    startwindow.h \
    player.h \
    mainwindow.h \
    data.h \
    votedialog.h

FORMS += \
    startwindow.ui \
    mainwindow.ui \
    votedialog.ui

RC_ICONS = fg.ico

RESOURCES += \
    res.qrc

DISTFILES +=
