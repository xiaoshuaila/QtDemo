/********************************************************************************
** Form generated from reading UI file 'GraphicsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSWIDGET_H
#define UI_GRAPHICSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "GraphicsView.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicsWidget
{
public:
    QGridLayout *gridLayout;
    GraphicsView *graphicsView;
    QTableWidget *tagTable;
    QTableWidget *anchorTable;

    void setupUi(QWidget *GraphicsWidget)
    {
        if (GraphicsWidget->objectName().isEmpty())
            GraphicsWidget->setObjectName(QString::fromUtf8("GraphicsWidget"));
        GraphicsWidget->resize(756, 300);
        gridLayout = new QGridLayout(GraphicsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new GraphicsView(GraphicsWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 2, 0, 1, 2);

        tagTable = new QTableWidget(GraphicsWidget);
        if (tagTable->columnCount() < 10)
            tagTable->setColumnCount(10);
        tagTable->setObjectName(QString::fromUtf8("tagTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tagTable->sizePolicy().hasHeightForWidth());
        tagTable->setSizePolicy(sizePolicy);
        tagTable->setMinimumSize(QSize(450, 71));
        tagTable->setMaximumSize(QSize(700, 16777215));
        QFont font;
        font.setPointSize(8);
        tagTable->setFont(font);
        tagTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tagTable->setAlternatingRowColors(true);
        tagTable->setRowCount(0);
        tagTable->setColumnCount(10);
        tagTable->horizontalHeader()->setMinimumSectionSize(50);
        tagTable->horizontalHeader()->setDefaultSectionSize(70);
        tagTable->horizontalHeader()->setStretchLastSection(false);
        tagTable->verticalHeader()->setMinimumSectionSize(18);
        tagTable->verticalHeader()->setDefaultSectionSize(18);

        gridLayout->addWidget(tagTable, 1, 1, 1, 1);

        anchorTable = new QTableWidget(GraphicsWidget);
        if (anchorTable->columnCount() < 12)
            anchorTable->setColumnCount(12);
        if (anchorTable->rowCount() < 4)
            anchorTable->setRowCount(4);
        anchorTable->setObjectName(QString::fromUtf8("anchorTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(anchorTable->sizePolicy().hasHeightForWidth());
        anchorTable->setSizePolicy(sizePolicy1);
        anchorTable->setMinimumSize(QSize(220, 108));
        anchorTable->setMaximumSize(QSize(350, 200));
        anchorTable->setFont(font);
        anchorTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        anchorTable->setAlternatingRowColors(true);
        anchorTable->setRowCount(4);
        anchorTable->setColumnCount(12);
        anchorTable->horizontalHeader()->setMinimumSectionSize(50);
        anchorTable->horizontalHeader()->setDefaultSectionSize(70);
        anchorTable->horizontalHeader()->setStretchLastSection(false);
        anchorTable->verticalHeader()->setVisible(false);
        anchorTable->verticalHeader()->setMinimumSectionSize(18);
        anchorTable->verticalHeader()->setDefaultSectionSize(18);
        anchorTable->verticalHeader()->setHighlightSections(true);

        gridLayout->addWidget(anchorTable, 1, 0, 1, 1);


        retranslateUi(GraphicsWidget);

        QMetaObject::connectSlotsByName(GraphicsWidget);
    } // setupUi

    void retranslateUi(QWidget *GraphicsWidget)
    {
        GraphicsWidget->setWindowTitle(QCoreApplication::translate("GraphicsWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicsWidget: public Ui_GraphicsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSWIDGET_H
