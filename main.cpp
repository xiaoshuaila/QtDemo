// -------------------------------------------------------------------------------------------------------------------
//
//  File: main.cpp
//
//  Copyright 2016 (c) Decawave Ltd, Dublin, Ireland.
//
//  All rights reserved.
//
//  Author:
//
// -------------------------------------------------------------------------------------------------------------------

#include "RTLSDisplayApplication.h"
#include "mainwindow.h"
#include <QApplication>
#include<QPixmap>
#include<QSplashScreen>
#include<from.h>
#include <QDateTime>
#include<QIcon>
/**
* @brief this is the application main entry point
*
*/
int main(int argc, char *argv[])
{

    RTLSDisplayApplication app(argc, argv);
    QPixmap pixmap("://cug.png");
    QSplashScreen screen(pixmap);
    screen.show();
  //  screen.showMessage("LOVE", Qt::AlignBottom|Qt::AlignCenter, Qt::red);
    QDateTime n=QDateTime::currentDateTime();
    QDateTime now;
    do{
        now=QDateTime::currentDateTime();
    } while (n.secsTo(now)<=1);
    from window;
//    window.show();
    screen.finish(&window);
    app.mainWindow()->setWindowTitle("基于UWB的室内导航系统");
    app.mainWindow()->setWindowIcon(QIcon("://221.png"));
    app.mainWindow()->show();
    return app.QApplication::exec();

}
