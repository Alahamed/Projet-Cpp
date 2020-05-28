#-------------------------------------------------
#
# Project created by QtCreator 2020-04-01T21:37:59
#
#-------------------------------------------------
QT       +=sql \
    quick

QT       +=core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
TARGET = projet2020
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

CONFIG += c++11

SOURCES += \
    dialogdon.cpp \
    dialogequipe.cpp \
    dialogmatch.cpp \
    don.cpp \
    equipe.cpp \
        main.cpp \
        mainwindow.cpp \
    connexion.cpp \
    dialogmenu.cpp \
    dialogplanification.cpp \
    dialogevenement.cpp \
    match.cpp \
    match_amical.cpp \
    entrainement.cpp \
    recrutement.cpp \
    son.cpp \
    tournois.cpp \
    dialogaccount.cpp \
    account.cpp

HEADERS += \
    dialogdon.h \
    dialogequipe.h \
    dialogmatch.h \
    don.h \
    equipe.h \
        mainwindow.h \
    connexion.h \
    dialogmenu.h \
    dialogplanification.h \
    dialogevenement.h \
    match.h \
    match_amical.h \
    entrainement.h \
    recrutement.h \
    son.h \
    tournois.h \
    dialogaccount.h \
    account.h

FORMS += \
    dialogdon.ui \
    dialogequipe.ui \
    dialogmatch.ui \
        mainwindow.ui \
    dialogmenu.ui \
    dialogplanification.ui \
    dialogevenement.ui \
    dialogaccount.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
