/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "GraphicsWidget.h"
#include "MinimapView.h"
#include "ViewSettingsWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionConfig;
    GraphicsWidget *graphicsWidget;
    QMenuBar *menuBar;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *viewSettings_dw;
    ViewSettingsWidget *viewSettings_w;
    QDockWidget *minimap_dw;
    MinimapView *minimap;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/DWctrler.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionConfig = new QAction(MainWindow);
        actionConfig->setObjectName(QString::fromUtf8("actionConfig"));
        graphicsWidget = new GraphicsWidget(MainWindow);
        graphicsWidget->setObjectName(QString::fromUtf8("graphicsWidget"));
        MainWindow->setCentralWidget(graphicsWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        viewMenu = new QMenu(menuBar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        viewSettings_dw = new QDockWidget(MainWindow);
        viewSettings_dw->setObjectName(QString::fromUtf8("viewSettings_dw"));
        viewSettings_w = new ViewSettingsWidget();
        viewSettings_w->setObjectName(QString::fromUtf8("viewSettings_w"));
        viewSettings_dw->setWidget(viewSettings_w);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, viewSettings_dw);
        minimap_dw = new QDockWidget(MainWindow);
        minimap_dw->setObjectName(QString::fromUtf8("minimap_dw"));
        minimap = new MinimapView();
        minimap->setObjectName(QString::fromUtf8("minimap"));
        minimap_dw->setWidget(minimap);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, minimap_dw);

        menuBar->addAction(viewMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        helpMenu->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DecaRangeRTLS", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionConfig->setText(QCoreApplication::translate("MainWindow", "Channel Config", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("MainWindow", "&\346\265\217\350\247\210", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        viewSettings_dw->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        minimap_dw->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\260\217\345\234\260\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
