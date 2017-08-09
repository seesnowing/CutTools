#-------------------------------------------------
#
# Project created by QtCreator 2017-07-07T19:24:16
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CutTool
TEMPLATE = app


SOURCES += main.cpp\
        cutmain.cpp \
    App/Frame/Base/appbasewidget.cpp \
    App/Frame/NetUtils/httputils.cpp

HEADERS  += cutmain.h \
    App/Frame/Base/appbasewidget.h \
    App/Frame/NetUtils/HttpCallBack.h \
    App/Frame/NetUtils/httputils.h

FORMS    += cutmain.ui \
    windows_top_bar.ui \
    do_cutting_mask.ui \
    floating_operation_menu.ui

RESOURCES += \
    Res.qrc
