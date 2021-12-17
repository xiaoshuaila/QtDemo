/********************************************************************************
** Form generated from reading UI file 'connectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONWIDGET_H
#define UI_CONNECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *connect_pb;
    QLabel *label;
    QComboBox *comPort;

    void setupUi(QWidget *ConnectionWidget)
    {
        if (ConnectionWidget->objectName().isEmpty())
            ConnectionWidget->setObjectName(QString::fromUtf8("ConnectionWidget"));
        ConnectionWidget->resize(230, 23);
        gridLayout = new QGridLayout(ConnectionWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        connect_pb = new QPushButton(ConnectionWidget);
        connect_pb->setObjectName(QString::fromUtf8("connect_pb"));

        gridLayout->addWidget(connect_pb, 1, 2, 1, 1);

        label = new QLabel(ConnectionWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comPort = new QComboBox(ConnectionWidget);
        comPort->setObjectName(QString::fromUtf8("comPort"));

        gridLayout->addWidget(comPort, 1, 1, 1, 1);


        retranslateUi(ConnectionWidget);

        QMetaObject::connectSlotsByName(ConnectionWidget);
    } // setupUi

    void retranslateUi(QWidget *ConnectionWidget)
    {
        ConnectionWidget->setWindowTitle(QCoreApplication::translate("ConnectionWidget", "Form", nullptr));
        connect_pb->setText(QCoreApplication::translate("ConnectionWidget", "\350\277\236\346\216\245", nullptr));
        label->setText(QCoreApplication::translate("ConnectionWidget", "\347\253\257\345\217\243\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionWidget: public Ui_ConnectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONWIDGET_H
