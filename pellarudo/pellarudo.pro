#-------------------------------------------------
#
# Project created by QtCreator 2016-10-27T17:20:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pellarudo
TEMPLATE = app


SOURCES += main.cpp\
        pellarudo.cpp \
    game.cpp \
    bet.cpp \
    player.cpp

HEADERS  += pellarudo.h \
    game.h \
    bet.h \
    player.h

FORMS    += pellarudo.ui
