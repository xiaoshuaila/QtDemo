#-------------------------------------------------
#
# Project created by QtCreator 2014-05-28T11:50:00
#
#-------------------------------------------------
cache()

QT       += core gui network xml serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zhuizong
TEMPLATE = app
QMAKE_INFO_PLIST = Info.plist
INCLUDEPATH += models network views util tools

INCLUDEPATH += $$PWD/armadillo-3.930.0/include


LIBS += -L$$PWD/armadillo-3.930.0/lib/ -lblas_win32_MT

LIBS += -L$$PWD/armadillo-3.930.0/lib/ -llapack_win32_MT
SOURCES += \
    RTLSDisplayApplication.cpp \
    main.cpp \
    models/ViewSettings.cpp \
    network/RTLSClient.cpp \
    network/SerialConnection.cpp \
    tools/OriginTool.cpp \
    tools/RubberBandTool.cpp \
    tools/ScaleTool.cpp \
    tools/trilateration.cpp \
    util/QPropertyModel.cpp \
    views/GraphicsView.cpp \
    views/GraphicsWidget.cpp \
    views/MinimapView.cpp \
    views/ViewSettingsWidget.cpp \
    views/connectionwidget.cpp \
    from.cpp \
    views/mainwindow.cpp

HEADERS  += \
    RTLSDisplayApplication.h \
    models/ViewSettings.h \
    network/RTLSClient.h \
    network/SerialConnection.h \
    network/SocketServerConnection.h \
    tools/AbstractTool.h \
    tools/OriginTool.h \
    tools/RubberBandTool.h \
    tools/ScaleTool.h \
    tools/trilateration.h \
    util/QPropertyModel.h \
    views/GraphicsView.h \
    views/GraphicsWidget.h \
    views/MinimapView.h \
    views/ViewSettingsWidget.h \
    views/connectionwidget.h \
    from.h \
    views/mainwindow.h

FORMS    += \
    views/mainwindow.ui \
    views/GraphicsWidget.ui \
    views/ViewSettingsWidget.ui \
    views/connectionwidget.ui


RESOURCES += \
    res/resources.qrc
