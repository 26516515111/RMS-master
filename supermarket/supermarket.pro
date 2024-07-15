#-------------------------------------------------
#
# Project created by QtCreator 2024-07-11T11:41:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = supermarket
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    mainwindow2.cpp \
    sales.cpp \
    commidity.cpp \
    users.cpp

HEADERS  += mainwindow.h \
    login.h \
    mainwindow2.h \
    sales.h \
    commidity.h \
    users.h

FORMS    += mainwindow.ui \
    login.ui \
    mainwindow2.ui \
    sales.ui \
    commidity.ui \
    users.ui

QT += sql
