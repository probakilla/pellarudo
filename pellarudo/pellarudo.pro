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
    dice.cpp \
    bet.cpp

HEADERS  += pellarudo.h \
    game.h \
    dice.h \
    bet.h

FORMS    += pellarudo.ui
