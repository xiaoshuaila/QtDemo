/********************************************************************************
** Form generated from reading UI file 'ViewSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSETTINGSWIDGET_H
#define UI_VIEWSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *config_tab;
    QCheckBox *showTagHistory;
    QCheckBox *showGeoFencingMode;
    QDoubleSpinBox *zone1;
    QDoubleSpinBox *zone2;
    QLabel *label_z1;
    QLabel *label_z2;
    QRadioButton *inAlarm;
    QRadioButton *outAlarm;
    QSpinBox *tagHistoryN;
    QCheckBox *showTagTable;
    QCheckBox *showAnchorTable;
    QCheckBox *showAnchorTagCorrectionTable;
    QCheckBox *showNavigationMode;
    QComboBox *filtering;
    QLabel *label_z1_2;
    QCheckBox *useAutoPos;
    QLabel *label_logingstatus;
    QPushButton *logging_pb;
    QLabel *label_logingstatus_2;
    QLabel *label_logfile;
    QLabel *label_logingstatus_3;
    QCheckBox *checkBox;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QWidget *floorplan_tab;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *floorplanXScale_sb;
    QCheckBox *floorplanFlipY_cb;
    QDoubleSpinBox *floorplanYScale_sb;
    QGridLayout *gridLayout;
    QCheckBox *showOrigin;
    QPushButton *scaleY_pb;
    QPushButton *scaleX_pb;
    QPushButton *origin_pb;
    QLabel *label_10;
    QComboBox *comboBox_settroom;
    QCheckBox *saveFP;
    QLabel *label_12;
    QLabel *label_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QCheckBox *floorplanFlipX_cb;
    QSpinBox *floorplanYOff_sb;
    QPushButton *floorplanOpen_pb;
    QLabel *label_11;
    QLabel *label_4;
    QLabel *floorplanPath_lb;
    QSpinBox *floorplanXOff_sb;
    QLabel *label_9;
    QPushButton *pushButton_savesett;
    QPushButton *pushButton_test;
    QWidget *grid_tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QDoubleSpinBox *gridWidth_sb;
    QLabel *label_2;
    QDoubleSpinBox *gridHeight_sb;
    QCheckBox *gridShow;
    QWidget *tab;
    QPushButton *SendBtn;
    QPushButton *pushButton_Listen;
    QTextEdit *textEdit_Send_2;
    QComboBox *portNameComboBox;
    QPushButton *openPortBtn;
    QLineEdit *lineEdit_Port_2;
    QPushButton *pushButton_Send_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_13;
    QTextEdit *textEdit_Recv_2;
    QPushButton *pushButton_2;
    QLabel *duankou;
    QLabel *label_18;
    QPushButton *pushButton_3;
    QPushButton *pushButton_setroomip;
    QLabel *label_21;
    QCheckBox *checkBox_save;
    QWidget *tab_2;
    QPushButton *pushButton_read;
    QLabel *label_year;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_16;
    QComboBox *comboBox_room;
    QComboBox *comboBox_year;
    QComboBox *comboBox_mouth;
    QComboBox *comboBox_day;
    QComboBox *comboBox_hour;
    QLabel *label_17;
    QTextEdit *textEdit;
    QComboBox *comboBox_speed;
    QLabel *label_19;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_bofang;
    QLabel *label_20;

    void setupUi(QWidget *ViewSettingsWidget)
    {
        if (ViewSettingsWidget->objectName().isEmpty())
            ViewSettingsWidget->setObjectName(QString::fromUtf8("ViewSettingsWidget"));
        ViewSettingsWidget->resize(434, 613);
        verticalLayout = new QVBoxLayout(ViewSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(ViewSettingsWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(300, 300));
        config_tab = new QWidget();
        config_tab->setObjectName(QString::fromUtf8("config_tab"));
        showTagHistory = new QCheckBox(config_tab);
        showTagHistory->setObjectName(QString::fromUtf8("showTagHistory"));
        showTagHistory->setGeometry(QRect(20, 380, 109, 17));
        showGeoFencingMode = new QCheckBox(config_tab);
        showGeoFencingMode->setObjectName(QString::fromUtf8("showGeoFencingMode"));
        showGeoFencingMode->setGeometry(QRect(20, 50, 109, 17));
        zone1 = new QDoubleSpinBox(config_tab);
        zone1->setObjectName(QString::fromUtf8("zone1"));
        zone1->setGeometry(QRect(100, 90, 62, 22));
        zone1->setMaximum(300.000000000000000);
        zone1->setValue(2.000000000000000);
        zone2 = new QDoubleSpinBox(config_tab);
        zone2->setObjectName(QString::fromUtf8("zone2"));
        zone2->setGeometry(QRect(100, 130, 62, 22));
        zone2->setMaximum(300.000000000000000);
        zone2->setValue(4.000000000000000);
        label_z1 = new QLabel(config_tab);
        label_z1->setObjectName(QString::fromUtf8("label_z1"));
        label_z1->setGeometry(QRect(30, 90, 61, 20));
        label_z2 = new QLabel(config_tab);
        label_z2->setObjectName(QString::fromUtf8("label_z2"));
        label_z2->setGeometry(QRect(30, 130, 61, 20));
        inAlarm = new QRadioButton(config_tab);
        inAlarm->setObjectName(QString::fromUtf8("inAlarm"));
        inAlarm->setGeometry(QRect(130, 170, 91, 17));
        inAlarm->setChecked(true);
        outAlarm = new QRadioButton(config_tab);
        outAlarm->setObjectName(QString::fromUtf8("outAlarm"));
        outAlarm->setGeometry(QRect(20, 170, 91, 17));
        tagHistoryN = new QSpinBox(config_tab);
        tagHistoryN->setObjectName(QString::fromUtf8("tagHistoryN"));
        tagHistoryN->setGeometry(QRect(130, 380, 51, 22));
        tagHistoryN->setMinimum(1);
        tagHistoryN->setMaximum(10000);
        tagHistoryN->setValue(20);
        showTagTable = new QCheckBox(config_tab);
        showTagTable->setObjectName(QString::fromUtf8("showTagTable"));
        showTagTable->setGeometry(QRect(20, 430, 109, 17));
        showTagTable->setChecked(true);
        showAnchorTable = new QCheckBox(config_tab);
        showAnchorTable->setObjectName(QString::fromUtf8("showAnchorTable"));
        showAnchorTable->setGeometry(QRect(20, 460, 109, 17));
        showAnchorTable->setChecked(true);
        showAnchorTagCorrectionTable = new QCheckBox(config_tab);
        showAnchorTagCorrectionTable->setObjectName(QString::fromUtf8("showAnchorTagCorrectionTable"));
        showAnchorTagCorrectionTable->setEnabled(true);
        showAnchorTagCorrectionTable->setGeometry(QRect(20, 490, 191, 17));
        showAnchorTagCorrectionTable->setChecked(false);
        showNavigationMode = new QCheckBox(config_tab);
        showNavigationMode->setObjectName(QString::fromUtf8("showNavigationMode"));
        showNavigationMode->setGeometry(QRect(20, 20, 151, 17));
        showNavigationMode->setChecked(true);
        filtering = new QComboBox(config_tab);
        filtering->setObjectName(QString::fromUtf8("filtering"));
        filtering->setGeometry(QRect(120, 260, 111, 22));
        label_z1_2 = new QLabel(config_tab);
        label_z1_2->setObjectName(QString::fromUtf8("label_z1_2"));
        label_z1_2->setGeometry(QRect(20, 260, 81, 20));
        useAutoPos = new QCheckBox(config_tab);
        useAutoPos->setObjectName(QString::fromUtf8("useAutoPos"));
        useAutoPos->setEnabled(true);
        useAutoPos->setGeometry(QRect(20, 210, 161, 17));
        useAutoPos->setChecked(false);
        label_logingstatus = new QLabel(config_tab);
        label_logingstatus->setObjectName(QString::fromUtf8("label_logingstatus"));
        label_logingstatus->setGeometry(QRect(20, 300, 81, 20));
        logging_pb = new QPushButton(config_tab);
        logging_pb->setObjectName(QString::fromUtf8("logging_pb"));
        logging_pb->setGeometry(QRect(120, 300, 111, 23));
        label_logingstatus_2 = new QLabel(config_tab);
        label_logingstatus_2->setObjectName(QString::fromUtf8("label_logingstatus_2"));
        label_logingstatus_2->setGeometry(QRect(20, 400, 51, 20));
        label_logfile = new QLabel(config_tab);
        label_logfile->setObjectName(QString::fromUtf8("label_logfile"));
        label_logfile->setEnabled(true);
        label_logfile->setGeometry(QRect(20, 330, 211, 20));
        label_logfile->setFrameShape(QFrame::NoFrame);
        label_logfile->setScaledContents(false);
        label_logfile->setWordWrap(false);
        label_logfile->setOpenExternalLinks(false);
        label_logingstatus_3 = new QLabel(config_tab);
        label_logingstatus_3->setObjectName(QString::fromUtf8("label_logingstatus_3"));
        label_logingstatus_3->setGeometry(QRect(20, 240, 51, 20));
        checkBox = new QCheckBox(config_tab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 510, 61, 31));
        checkBox->setChecked(false);
        comboBox_2 = new QComboBox(config_tab);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 516, 41, 20));
        spinBox = new QSpinBox(config_tab);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(90, 540, 41, 21));
        tabWidget->addTab(config_tab, QString());
        floorplan_tab = new QWidget();
        floorplan_tab->setObjectName(QString::fromUtf8("floorplan_tab"));
        gridLayout_2 = new QGridLayout(floorplan_tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(floorplan_tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(floorplan_tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(floorplan_tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        floorplanXScale_sb = new QDoubleSpinBox(floorplan_tab);
        floorplanXScale_sb->setObjectName(QString::fromUtf8("floorplanXScale_sb"));
        floorplanXScale_sb->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(floorplanXScale_sb, 4, 1, 1, 1);

        floorplanFlipY_cb = new QCheckBox(floorplan_tab);
        floorplanFlipY_cb->setObjectName(QString::fromUtf8("floorplanFlipY_cb"));

        gridLayout_2->addWidget(floorplanFlipY_cb, 7, 1, 1, 1);

        floorplanYScale_sb = new QDoubleSpinBox(floorplan_tab);
        floorplanYScale_sb->setObjectName(QString::fromUtf8("floorplanYScale_sb"));
        floorplanYScale_sb->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(floorplanYScale_sb, 5, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        showOrigin = new QCheckBox(floorplan_tab);
        showOrigin->setObjectName(QString::fromUtf8("showOrigin"));

        gridLayout->addWidget(showOrigin, 0, 0, 1, 1);

        scaleY_pb = new QPushButton(floorplan_tab);
        scaleY_pb->setObjectName(QString::fromUtf8("scaleY_pb"));

        gridLayout->addWidget(scaleY_pb, 1, 2, 1, 1);

        scaleX_pb = new QPushButton(floorplan_tab);
        scaleX_pb->setObjectName(QString::fromUtf8("scaleX_pb"));

        gridLayout->addWidget(scaleX_pb, 1, 0, 1, 1);

        origin_pb = new QPushButton(floorplan_tab);
        origin_pb->setObjectName(QString::fromUtf8("origin_pb"));

        gridLayout->addWidget(origin_pb, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 8, 0, 1, 2);

        label_10 = new QLabel(floorplan_tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 4, 2, 1, 1);

        comboBox_settroom = new QComboBox(floorplan_tab);
        comboBox_settroom->addItem(QString());
        comboBox_settroom->addItem(QString());
        comboBox_settroom->addItem(QString());
        comboBox_settroom->addItem(QString());
        comboBox_settroom->addItem(QString());
        comboBox_settroom->setObjectName(QString::fromUtf8("comboBox_settroom"));

        gridLayout_2->addWidget(comboBox_settroom, 10, 0, 1, 1);

        saveFP = new QCheckBox(floorplan_tab);
        saveFP->setObjectName(QString::fromUtf8("saveFP"));

        gridLayout_2->addWidget(saveFP, 1, 1, 1, 1, Qt::AlignHCenter);

        label_12 = new QLabel(floorplan_tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 2, 1, 1);

        label_3 = new QLabel(floorplan_tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(floorplan_tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 12, 0, 1, 1);

        floorplanFlipX_cb = new QCheckBox(floorplan_tab);
        floorplanFlipX_cb->setObjectName(QString::fromUtf8("floorplanFlipX_cb"));

        gridLayout_2->addWidget(floorplanFlipX_cb, 6, 1, 1, 1);

        floorplanYOff_sb = new QSpinBox(floorplan_tab);
        floorplanYOff_sb->setObjectName(QString::fromUtf8("floorplanYOff_sb"));
        floorplanYOff_sb->setMinimum(-65536);
        floorplanYOff_sb->setMaximum(65536);

        gridLayout_2->addWidget(floorplanYOff_sb, 3, 1, 1, 1);

        floorplanOpen_pb = new QPushButton(floorplan_tab);
        floorplanOpen_pb->setObjectName(QString::fromUtf8("floorplanOpen_pb"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(floorplanOpen_pb->sizePolicy().hasHeightForWidth());
        floorplanOpen_pb->setSizePolicy(sizePolicy);
        floorplanOpen_pb->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(floorplanOpen_pb, 1, 0, 1, 1);

        label_11 = new QLabel(floorplan_tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 3, 2, 1, 1);

        label_4 = new QLabel(floorplan_tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        floorplanPath_lb = new QLabel(floorplan_tab);
        floorplanPath_lb->setObjectName(QString::fromUtf8("floorplanPath_lb"));

        gridLayout_2->addWidget(floorplanPath_lb, 0, 0, 1, 2);

        floorplanXOff_sb = new QSpinBox(floorplan_tab);
        floorplanXOff_sb->setObjectName(QString::fromUtf8("floorplanXOff_sb"));
        sizePolicy.setHeightForWidth(floorplanXOff_sb->sizePolicy().hasHeightForWidth());
        floorplanXOff_sb->setSizePolicy(sizePolicy);
        floorplanXOff_sb->setMinimum(-65536);
        floorplanXOff_sb->setMaximum(65535);

        gridLayout_2->addWidget(floorplanXOff_sb, 2, 1, 1, 1);

        label_9 = new QLabel(floorplan_tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 5, 2, 1, 1);

        pushButton_savesett = new QPushButton(floorplan_tab);
        pushButton_savesett->setObjectName(QString::fromUtf8("pushButton_savesett"));

        gridLayout_2->addWidget(pushButton_savesett, 10, 1, 1, 1);

        pushButton_test = new QPushButton(floorplan_tab);
        pushButton_test->setObjectName(QString::fromUtf8("pushButton_test"));

        gridLayout_2->addWidget(pushButton_test, 10, 2, 1, 1);

        tabWidget->addTab(floorplan_tab, QString());
        grid_tab = new QWidget();
        grid_tab->setObjectName(QString::fromUtf8("grid_tab"));
        layoutWidget = new QWidget(grid_tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 21, 183, 111));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(45, 0));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridWidth_sb = new QDoubleSpinBox(layoutWidget);
        gridWidth_sb->setObjectName(QString::fromUtf8("gridWidth_sb"));
        gridWidth_sb->setDecimals(2);
        gridWidth_sb->setSingleStep(0.100000000000000);
        gridWidth_sb->setValue(0.500000000000000);

        gridLayout_3->addWidget(gridWidth_sb, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(45, 0));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        gridHeight_sb = new QDoubleSpinBox(layoutWidget);
        gridHeight_sb->setObjectName(QString::fromUtf8("gridHeight_sb"));
        gridHeight_sb->setSingleStep(0.100000000000000);
        gridHeight_sb->setValue(0.500000000000000);

        gridLayout_3->addWidget(gridHeight_sb, 1, 1, 1, 1);

        gridShow = new QCheckBox(layoutWidget);
        gridShow->setObjectName(QString::fromUtf8("gridShow"));

        gridLayout_3->addWidget(gridShow, 2, 0, 1, 1);

        tabWidget->addTab(grid_tab, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        SendBtn = new QPushButton(tab);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setGeometry(QRect(270, 380, 75, 0));
        pushButton_Listen = new QPushButton(tab);
        pushButton_Listen->setObjectName(QString::fromUtf8("pushButton_Listen"));
        pushButton_Listen->setGeometry(QRect(140, 40, 51, 23));
        textEdit_Send_2 = new QTextEdit(tab);
        textEdit_Send_2->setObjectName(QString::fromUtf8("textEdit_Send_2"));
        textEdit_Send_2->setEnabled(true);
        textEdit_Send_2->setGeometry(QRect(20, 330, 281, 0));
        portNameComboBox = new QComboBox(tab);
        portNameComboBox->setObjectName(QString::fromUtf8("portNameComboBox"));
        portNameComboBox->setGeometry(QRect(110, 210, 69, 0));
        openPortBtn = new QPushButton(tab);
        openPortBtn->setObjectName(QString::fromUtf8("openPortBtn"));
        openPortBtn->setGeometry(QRect(200, 210, 61, 0));
        lineEdit_Port_2 = new QLineEdit(tab);
        lineEdit_Port_2->setObjectName(QString::fromUtf8("lineEdit_Port_2"));
        lineEdit_Port_2->setGeometry(QRect(80, 40, 51, 23));
        pushButton_Send_2 = new QPushButton(tab);
        pushButton_Send_2->setObjectName(QString::fromUtf8("pushButton_Send_2"));
        pushButton_Send_2->setGeometry(QRect(160, 390, 75, 0));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 410, 71, 0));
        comboBox = new QComboBox(tab);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8(":/icons/fail.jpg");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../../qt/qt/yuanmaserver/views"), QSize(), QIcon::Normal, QIcon::Off);
        }
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 70, 91, 30));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 70, 61, 30));
        textEdit_Recv_2 = new QTextEdit(tab);
        textEdit_Recv_2->setObjectName(QString::fromUtf8("textEdit_Recv_2"));
        textEdit_Recv_2->setGeometry(QRect(40, 110, 281, 81));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 470, 23, 0));
        duankou = new QLabel(tab);
        duankou->setObjectName(QString::fromUtf8("duankou"));
        duankou->setGeometry(QRect(60, 210, 31, 0));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(40, 40, 31, 23));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 410, 0, 20));
        pushButton_setroomip = new QPushButton(tab);
        pushButton_setroomip->setObjectName(QString::fromUtf8("pushButton_setroomip"));
        pushButton_setroomip->setGeometry(QRect(199, 69, 81, 31));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(30, 222, 54, 20));
        checkBox_save = new QCheckBox(tab);
        checkBox_save->setObjectName(QString::fromUtf8("checkBox_save"));
        checkBox_save->setGeometry(QRect(40, 200, 101, 18));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_read = new QPushButton(tab_2);
        pushButton_read->setObjectName(QString::fromUtf8("pushButton_read"));
        pushButton_read->setGeometry(QRect(270, 90, 51, 20));
        label_year = new QLabel(tab_2);
        label_year->setObjectName(QString::fromUtf8("label_year"));
        label_year->setGeometry(QRect(60, 90, 21, 16));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(60, 120, 21, 16));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 150, 21, 16));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(25, 60, 61, 20));
        comboBox_room = new QComboBox(tab_2);
        comboBox_room->addItem(QString());
        comboBox_room->addItem(QString());
        comboBox_room->addItem(QString());
        comboBox_room->addItem(QString());
        comboBox_room->addItem(QString());
        comboBox_room->setObjectName(QString::fromUtf8("comboBox_room"));
        comboBox_room->setGeometry(QRect(100, 60, 81, 22));
        comboBox_year = new QComboBox(tab_2);
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->addItem(QString());
        comboBox_year->setObjectName(QString::fromUtf8("comboBox_year"));
        comboBox_year->setGeometry(QRect(100, 90, 51, 22));
        comboBox_mouth = new QComboBox(tab_2);
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->addItem(QString());
        comboBox_mouth->setObjectName(QString::fromUtf8("comboBox_mouth"));
        comboBox_mouth->setGeometry(QRect(100, 120, 51, 22));
        comboBox_day = new QComboBox(tab_2);
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->setObjectName(QString::fromUtf8("comboBox_day"));
        comboBox_day->setGeometry(QRect(100, 150, 51, 22));
        comboBox_hour = new QComboBox(tab_2);
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->addItem(QString());
        comboBox_hour->setObjectName(QString::fromUtf8("comboBox_hour"));
        comboBox_hour->setGeometry(QRect(100, 180, 51, 22));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(40, 180, 41, 20));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 240, 291, 101));
        comboBox_speed = new QComboBox(tab_2);
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->setObjectName(QString::fromUtf8("comboBox_speed"));
        comboBox_speed->setGeometry(QRect(270, 60, 51, 21));
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(210, 60, 61, 16));
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setGeometry(QRect(150, 213, 141, 16));
        horizontalSlider->setMaximum(60);
        horizontalSlider->setOrientation(Qt::Horizontal);
        spinBox_bofang = new QSpinBox(tab_2);
        spinBox_bofang->setObjectName(QString::fromUtf8("spinBox_bofang"));
        spinBox_bofang->setGeometry(QRect(100, 210, 42, 20));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(45, 210, 31, 20));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(gridWidth_sb, gridHeight_sb);
        QWidget::setTabOrder(gridHeight_sb, floorplanOpen_pb);
        QWidget::setTabOrder(floorplanOpen_pb, floorplanXOff_sb);
        QWidget::setTabOrder(floorplanXOff_sb, floorplanYOff_sb);
        QWidget::setTabOrder(floorplanYOff_sb, floorplanXScale_sb);
        QWidget::setTabOrder(floorplanXScale_sb, floorplanYScale_sb);
        QWidget::setTabOrder(floorplanYScale_sb, floorplanFlipX_cb);
        QWidget::setTabOrder(floorplanFlipX_cb, floorplanFlipY_cb);

        retranslateUi(ViewSettingsWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *ViewSettingsWidget)
    {
        ViewSettingsWidget->setWindowTitle(QCoreApplication::translate("ViewSettingsWidget", "Form", nullptr));
        showTagHistory->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\230\276\347\244\272\345\216\206\345\217\262\350\275\250\350\277\271", nullptr));
        showGeoFencingMode->setText(QCoreApplication::translate("ViewSettingsWidget", " \345\233\264\346\240\217\346\250\241\345\274\217", nullptr));
        label_z1->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\214\272\345\237\237 1 (m)", nullptr));
        label_z2->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\214\272\345\237\237 2 (m)", nullptr));
        inAlarm->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\206\205\351\203\250\350\255\246\346\212\245", nullptr));
        outAlarm->setText(QCoreApplication::translate("ViewSettingsWidget", " \345\244\226\351\203\250\350\255\246\346\212\245", nullptr));
        showTagTable->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\230\276\347\244\272\346\240\207\347\255\276\350\241\250", nullptr));
        showAnchorTable->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\230\276\347\244\272\345\237\272\347\253\231\350\241\250", nullptr));
        showAnchorTagCorrectionTable->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\230\276\347\244\272\345\237\272\347\253\231\347\237\253\346\255\243\345\200\274", nullptr));
        showNavigationMode->setText(QCoreApplication::translate("ViewSettingsWidget", " \350\267\237\350\270\252/\345\257\274\350\210\252\346\250\241\345\274\217", nullptr));
        label_z1_2->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\273\244\346\263\242\351\200\211\351\241\271\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        useAutoPos->setToolTip(QCoreApplication::translate("ViewSettingsWidget", "You must connect to Anchor 0 to use this feature.", nullptr));
#endif // QT_CONFIG(tooltip)
        useAutoPos->setText(QCoreApplication::translate("ViewSettingsWidget", " \344\275\277\347\224\250\345\237\272\347\253\231\350\207\252\345\212\250\345\256\232\344\275\215", nullptr));
        label_logingstatus->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\274\200\345\247\213\350\256\260\345\275\225", nullptr));
        logging_pb->setText(QCoreApplication::translate("ViewSettingsWidget", " \345\274\200\345\247\213", nullptr));
        label_logingstatus_2->setText(QString());
        label_logfile->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\227\245\345\277\227\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_logingstatus_3->setText(QString());
        checkBox->setText(QCoreApplication::translate("ViewSettingsWidget", " \350\277\275\350\270\252", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "0", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "1", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "2", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "3", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "4", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("ViewSettingsWidget", "5", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("ViewSettingsWidget", "6", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("ViewSettingsWidget", "7", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(config_tab), QCoreApplication::translate("ViewSettingsWidget", "\351\205\215\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("ViewSettingsWidget", "X \346\257\224\344\276\213", nullptr));
        label_7->setText(QCoreApplication::translate("ViewSettingsWidget", "X \347\277\273\350\275\254", nullptr));
        label_8->setText(QCoreApplication::translate("ViewSettingsWidget", "Y \347\277\273\350\275\254", nullptr));
        floorplanFlipY_cb->setText(QString());
        showOrigin->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\230\276\347\244\272\345\216\237\347\202\271", nullptr));
        scaleY_pb->setText(QCoreApplication::translate("ViewSettingsWidget", "Y \346\257\224\344\276\213", nullptr));
        scaleX_pb->setText(QCoreApplication::translate("ViewSettingsWidget", "X \346\257\224\344\276\213", nullptr));
        origin_pb->setText(QCoreApplication::translate("ViewSettingsWidget", "\350\256\276\347\275\256\345\216\237\347\202\271", nullptr));
        label_10->setText(QCoreApplication::translate("ViewSettingsWidget", "pixels/m", nullptr));
        comboBox_settroom->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "2039", nullptr));
        comboBox_settroom->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "2037", nullptr));
        comboBox_settroom->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "\345\244\247\345\240\202", nullptr));
        comboBox_settroom->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "2038", nullptr));
        comboBox_settroom->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "2036", nullptr));

        saveFP->setText(QCoreApplication::translate("ViewSettingsWidget", "  \344\277\235\345\255\230\350\256\276\347\275\256", nullptr));
        label_12->setText(QCoreApplication::translate("ViewSettingsWidget", "pixels", nullptr));
        label_3->setText(QCoreApplication::translate("ViewSettingsWidget", "X \345\201\217\347\247\273", nullptr));
        label_5->setText(QCoreApplication::translate("ViewSettingsWidget", "Y \346\257\224\344\276\213", nullptr));
        floorplanFlipX_cb->setText(QString());
        floorplanOpen_pb->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\211\223\345\274\200", nullptr));
        label_11->setText(QCoreApplication::translate("ViewSettingsWidget", "pixels", nullptr));
        label_4->setText(QCoreApplication::translate("ViewSettingsWidget", "Y \345\201\217\347\247\273", nullptr));
        floorplanPath_lb->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\262\241\346\234\211\345\271\263\351\235\242\345\233\276", nullptr));
        label_9->setText(QCoreApplication::translate("ViewSettingsWidget", "pixesl/m", nullptr));
        pushButton_savesett->setText(QCoreApplication::translate("ViewSettingsWidget", " \344\277\235\345\255\230", nullptr));
        pushButton_test->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\265\213\350\257\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(floorplan_tab), QCoreApplication::translate("ViewSettingsWidget", "\345\271\263\351\235\242\345\233\276", nullptr));
        label->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\256\275\345\272\246 (m)", nullptr));
        label_2->setText(QCoreApplication::translate("ViewSettingsWidget", "\351\253\230\345\272\246 (m)", nullptr));
        gridShow->setText(QCoreApplication::translate("ViewSettingsWidget", "  \346\230\276\347\244\272\347\275\221\346\240\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(grid_tab), QCoreApplication::translate("ViewSettingsWidget", "\347\275\221\346\240\274", nullptr));
        SendBtn->setText(QCoreApplication::translate("ViewSettingsWidget", "Send", nullptr));
        pushButton_Listen->setText(QCoreApplication::translate("ViewSettingsWidget", "\344\276\246\345\220\254", nullptr));
        openPortBtn->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\211\223\345\274\200\347\253\257\345\217\243", nullptr));
        pushButton_Send_2->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\217\221\351\200\201", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewSettingsWidget", "\350\277\236\345\217\221", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "2039", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "2037", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "\345\244\247\345\240\202", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "2038", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "2036", nullptr));

        label_13->setText(QCoreApplication::translate("ViewSettingsWidget", "  \346\243\200\346\237\245\346\210\277\351\227\264\357\274\232", nullptr));
        textEdit_Recv_2->setHtml(QCoreApplication::translate("ViewSettingsWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\252\350\277\236\346\216\245</p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\201\234", nullptr));
        duankou->setText(QCoreApplication::translate("ViewSettingsWidget", "\347\253\257\345\217\243\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("ViewSettingsWidget", "\347\253\257\345\217\243\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ViewSettingsWidget", "PushButton", nullptr));
        pushButton_setroomip->setText(QCoreApplication::translate("ViewSettingsWidget", "\350\256\276\347\275\256\346\210\277\351\227\264ip", nullptr));
        label_21->setText(QString());
        checkBox_save->setText(QCoreApplication::translate("ViewSettingsWidget", "   \350\256\260\345\275\225\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ViewSettingsWidget", "\346\234\215\345\212\241\345\231\250", nullptr));
        pushButton_read->setText(QCoreApplication::translate("ViewSettingsWidget", "\350\257\273\345\217\226", nullptr));
        label_year->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\271\264\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\234\210\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\227\245\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("ViewSettingsWidget", "\351\200\211\346\213\251\346\210\277\351\227\264\357\274\232", nullptr));
        comboBox_room->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "2039", nullptr));
        comboBox_room->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "2037", nullptr));
        comboBox_room->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "\345\244\247\345\240\202", nullptr));
        comboBox_room->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "2038", nullptr));
        comboBox_room->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "2036", nullptr));

        comboBox_year->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "2020", nullptr));
        comboBox_year->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "2021", nullptr));
        comboBox_year->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "2022", nullptr));
        comboBox_year->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "2023", nullptr));
        comboBox_year->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "2024", nullptr));

        comboBox_mouth->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "01", nullptr));
        comboBox_mouth->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "02", nullptr));
        comboBox_mouth->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "03", nullptr));
        comboBox_mouth->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "04", nullptr));
        comboBox_mouth->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "05", nullptr));
        comboBox_mouth->setItemText(5, QCoreApplication::translate("ViewSettingsWidget", "06", nullptr));
        comboBox_mouth->setItemText(6, QCoreApplication::translate("ViewSettingsWidget", "07", nullptr));
        comboBox_mouth->setItemText(7, QCoreApplication::translate("ViewSettingsWidget", "08", nullptr));
        comboBox_mouth->setItemText(8, QCoreApplication::translate("ViewSettingsWidget", "09", nullptr));
        comboBox_mouth->setItemText(9, QCoreApplication::translate("ViewSettingsWidget", "10", nullptr));
        comboBox_mouth->setItemText(10, QCoreApplication::translate("ViewSettingsWidget", "11", nullptr));
        comboBox_mouth->setItemText(11, QCoreApplication::translate("ViewSettingsWidget", "12", nullptr));

        comboBox_day->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "01", nullptr));
        comboBox_day->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "02", nullptr));
        comboBox_day->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "03", nullptr));
        comboBox_day->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "04", nullptr));
        comboBox_day->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "05", nullptr));
        comboBox_day->setItemText(5, QCoreApplication::translate("ViewSettingsWidget", "06", nullptr));
        comboBox_day->setItemText(6, QCoreApplication::translate("ViewSettingsWidget", "07", nullptr));
        comboBox_day->setItemText(7, QCoreApplication::translate("ViewSettingsWidget", "08", nullptr));
        comboBox_day->setItemText(8, QCoreApplication::translate("ViewSettingsWidget", "09", nullptr));
        comboBox_day->setItemText(9, QCoreApplication::translate("ViewSettingsWidget", "10", nullptr));
        comboBox_day->setItemText(10, QCoreApplication::translate("ViewSettingsWidget", "11", nullptr));
        comboBox_day->setItemText(11, QCoreApplication::translate("ViewSettingsWidget", "12", nullptr));
        comboBox_day->setItemText(12, QCoreApplication::translate("ViewSettingsWidget", "13", nullptr));
        comboBox_day->setItemText(13, QCoreApplication::translate("ViewSettingsWidget", "14", nullptr));
        comboBox_day->setItemText(14, QCoreApplication::translate("ViewSettingsWidget", "15", nullptr));
        comboBox_day->setItemText(15, QCoreApplication::translate("ViewSettingsWidget", "16", nullptr));
        comboBox_day->setItemText(16, QCoreApplication::translate("ViewSettingsWidget", "17", nullptr));
        comboBox_day->setItemText(17, QCoreApplication::translate("ViewSettingsWidget", "18", nullptr));
        comboBox_day->setItemText(18, QCoreApplication::translate("ViewSettingsWidget", "19", nullptr));
        comboBox_day->setItemText(19, QCoreApplication::translate("ViewSettingsWidget", "20", nullptr));
        comboBox_day->setItemText(20, QCoreApplication::translate("ViewSettingsWidget", "21", nullptr));
        comboBox_day->setItemText(21, QCoreApplication::translate("ViewSettingsWidget", "22", nullptr));
        comboBox_day->setItemText(22, QCoreApplication::translate("ViewSettingsWidget", "23", nullptr));
        comboBox_day->setItemText(23, QCoreApplication::translate("ViewSettingsWidget", "24", nullptr));
        comboBox_day->setItemText(24, QCoreApplication::translate("ViewSettingsWidget", "25", nullptr));
        comboBox_day->setItemText(25, QCoreApplication::translate("ViewSettingsWidget", "26", nullptr));
        comboBox_day->setItemText(26, QCoreApplication::translate("ViewSettingsWidget", "27", nullptr));
        comboBox_day->setItemText(27, QCoreApplication::translate("ViewSettingsWidget", "28", nullptr));
        comboBox_day->setItemText(28, QCoreApplication::translate("ViewSettingsWidget", "29", nullptr));
        comboBox_day->setItemText(29, QCoreApplication::translate("ViewSettingsWidget", "30", nullptr));
        comboBox_day->setItemText(30, QCoreApplication::translate("ViewSettingsWidget", "31", nullptr));

        comboBox_hour->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "00", nullptr));
        comboBox_hour->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "01", nullptr));
        comboBox_hour->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "02", nullptr));
        comboBox_hour->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "03", nullptr));
        comboBox_hour->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "04", nullptr));
        comboBox_hour->setItemText(5, QCoreApplication::translate("ViewSettingsWidget", "05", nullptr));
        comboBox_hour->setItemText(6, QCoreApplication::translate("ViewSettingsWidget", "06", nullptr));
        comboBox_hour->setItemText(7, QCoreApplication::translate("ViewSettingsWidget", "07", nullptr));
        comboBox_hour->setItemText(8, QCoreApplication::translate("ViewSettingsWidget", "08", nullptr));
        comboBox_hour->setItemText(9, QCoreApplication::translate("ViewSettingsWidget", "09", nullptr));
        comboBox_hour->setItemText(10, QCoreApplication::translate("ViewSettingsWidget", "10", nullptr));
        comboBox_hour->setItemText(11, QCoreApplication::translate("ViewSettingsWidget", "11", nullptr));
        comboBox_hour->setItemText(12, QCoreApplication::translate("ViewSettingsWidget", "12", nullptr));
        comboBox_hour->setItemText(13, QCoreApplication::translate("ViewSettingsWidget", "13", nullptr));
        comboBox_hour->setItemText(14, QCoreApplication::translate("ViewSettingsWidget", "14", nullptr));
        comboBox_hour->setItemText(15, QCoreApplication::translate("ViewSettingsWidget", "15", nullptr));
        comboBox_hour->setItemText(16, QCoreApplication::translate("ViewSettingsWidget", "16", nullptr));
        comboBox_hour->setItemText(17, QCoreApplication::translate("ViewSettingsWidget", "17", nullptr));
        comboBox_hour->setItemText(18, QCoreApplication::translate("ViewSettingsWidget", "18", nullptr));
        comboBox_hour->setItemText(19, QCoreApplication::translate("ViewSettingsWidget", "19", nullptr));
        comboBox_hour->setItemText(20, QCoreApplication::translate("ViewSettingsWidget", "20", nullptr));
        comboBox_hour->setItemText(21, QCoreApplication::translate("ViewSettingsWidget", "21", nullptr));
        comboBox_hour->setItemText(22, QCoreApplication::translate("ViewSettingsWidget", "22", nullptr));
        comboBox_hour->setItemText(23, QCoreApplication::translate("ViewSettingsWidget", "23", nullptr));

        label_17->setText(QCoreApplication::translate("ViewSettingsWidget", " \346\227\266\351\227\264\357\274\232", nullptr));
        comboBox_speed->setItemText(0, QCoreApplication::translate("ViewSettingsWidget", "0.5", nullptr));
        comboBox_speed->setItemText(1, QCoreApplication::translate("ViewSettingsWidget", "1.0", nullptr));
        comboBox_speed->setItemText(2, QCoreApplication::translate("ViewSettingsWidget", "2.0", nullptr));
        comboBox_speed->setItemText(3, QCoreApplication::translate("ViewSettingsWidget", "4.0", nullptr));
        comboBox_speed->setItemText(4, QCoreApplication::translate("ViewSettingsWidget", "8.0", nullptr));
        comboBox_speed->setItemText(5, QCoreApplication::translate("ViewSettingsWidget", "max", nullptr));

        label_19->setText(QCoreApplication::translate("ViewSettingsWidget", "\346\222\255\346\224\276\351\200\237\345\272\246\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("ViewSettingsWidget", "\345\210\206\351\222\237\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ViewSettingsWidget", "\345\233\236\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewSettingsWidget: public Ui_ViewSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSETTINGSWIDGET_H
