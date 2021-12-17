// -------------------------------------------------------------------------------------------------------------------
//
//  File: ViewSettingsWidget.cpp
//
//  Copyright 2016 (c) Decawave Ltd, Dublin, Ireland.
//
//  All rights reserved.
//
//  Author:
//
// -------------------------------------------------------------------------------------------------------------------

#include "ViewSettingsWidget.h"
#include "ui_ViewSettingsWidget.h"
#include "RTLSDisplayApplication.h"
#include "QPropertyModel.h"
#include "ViewSettings.h"
#include "OriginTool.h"
#include "ScaleTool.h"
#include "GraphicsView.h"
#include "GraphicsWidget.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>

#include <QUrl>
//liwenfeng
#include<QIcon>
#include "ViewSettingsWidget.h"
#include "ui_ViewSettingsWidget.h"
#include"ui_mainwindow.h"
#include "RTLSDisplayApplication.h"
#include "QPropertyModel.h"
#include "ViewSettings.h"
#include "OriginTool.h"
#include "ScaleTool.h"
#include "GraphicsView.h"
#include "GraphicsWidget.h"
#include <QScrollArea>
#include<Qlabel>
#include <QFileDialog>
#include <QMessageBox>
#include <QHBoxLayout>
#include<QPushButton>
#include<QTextCursor>
#include <QTcpServer>
#include <QTcpSocket>
#include<QCheckBox>
#include<QDateTime>
#include <QPainter>
#include <QtNetwork>
extern int poinnum;
extern QPointF poin[50000];
extern QMap<quint64, Tag*> _tags;
extern QString nowroomnane;
int z=1;
int hostroy=0;
long long currentTime;
typedef enum
{
    COM1,      //com1
    COM2,   //com2
    COM3,      //com3
    COM4,    //com4
    COM5,     //com5
    COM6,      //com6
    COM7,   //com7
    COM8,      //com8
    COM9,    //com9
    COM10,     //com10
    COM11,      //com11
    COM12,   //com12
    COM13,      //com13
    COM14,    //com14
    COM15,     //com15
}COM_Types;
ViewSettingsWidget::ViewSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewSettingsWidget),
    _floorplanOpen(false)
{
    ui->setupUi(this);

 //liwenfeng
    ui->portNameComboBox->addItem("COM1",COM1);
    ui->portNameComboBox->addItem("COM2",COM2);
    ui->portNameComboBox->addItem("COM3",COM3);
    ui->portNameComboBox->addItem("COM4",COM4);
    ui->portNameComboBox->addItem("COM5",COM5);
    ui->portNameComboBox->addItem("COM6",COM6);
    ui->portNameComboBox->addItem("COM7",COM7);
    ui->portNameComboBox->addItem("COM8",COM8);
    ui->portNameComboBox->addItem("COM9",COM9);
    ui->portNameComboBox->addItem("COM10",COM10);
    ui->portNameComboBox->addItem("COM11",COM11);
    ui->portNameComboBox->addItem("COM12",COM12);
    ui->portNameComboBox->addItem("COM13",COM13);
    ui->portNameComboBox->addItem("COM14",COM14);
    ui->portNameComboBox->addItem("COM15",COM15);
    void_roomidread();

    QIcon icon2(":/icons/fail.jpg");
    for (int i=0;i<=4;i++) {
        ui->comboBox->setItemIcon(i,icon2);
    }
    socket_list = new QList<QTcpSocket*>;

    ui->lineEdit_Port_2->setText("8800");
    ui->pushButton_Send_2->setEnabled(false);
    ui->comboBox_speed->setCurrentIndex(1);
    ui->horizontalSlider->setMaximum(59);
    i_speed=280;
    killTimer(m_timer);
    server = new QTcpServer();
    tagid=0;

    //连接信号槽

    connect(server,&QTcpServer::newConnection,this,&ViewSettingsWidget::server_New_Connect);
    //jerry add
//    ui->lineEdit_prot->setText("9999");
//    ui->pushButton_Send->setEnabled(false);
//    QObject::connect(ui->pushButton, SIGNAL(release),this,SLOT(on_pushButton_released()));


    //ui->tabWidget->setCurrentIndex(0);
    //ui->tabWidget->removeTab(2);

    QObject::connect(ui->floorplanOpen_pb, SIGNAL(clicked()), this, SLOT(floorplanOpenClicked()));

    QObject::connect(ui->scaleX_pb, SIGNAL(clicked()), this, SLOT(scaleClicked()));
    QObject::connect(ui->scaleY_pb, SIGNAL(clicked()), this, SLOT(scaleClicked()));
    QObject::connect(ui->origin_pb, SIGNAL(clicked()), this, SLOT(originClicked()));

    QObject::connect(ui->saveFP, SIGNAL(clicked()), this, SLOT(saveFPClicked()));
    QObject::connect(ui->gridShow, SIGNAL(clicked()), this, SLOT(gridShowClicked()));
    QObject::connect(ui->showOrigin, SIGNAL(clicked()), this, SLOT(originShowClicked()));
    QObject::connect(ui->showTagHistory, SIGNAL(clicked()), this, SLOT(tagHistoryShowClicked()));
    QObject::connect(ui->showGeoFencingMode, SIGNAL(clicked()), this, SLOT(showGeoFencingModeClicked()));
    QObject::connect(ui->showNavigationMode, SIGNAL(clicked()), this, SLOT(showNavigationModeClicked()));
    //liwenfeng

    QObject::connect(ui->useAutoPos, SIGNAL(clicked()), this, SLOT(useAutoPosClicked()));
    QObject::connect(ui->showTagTable, SIGNAL(clicked()), this, SLOT(tagAncTableShowClicked()));
    QObject::connect(ui->showAnchorTable, SIGNAL(clicked()), this, SLOT(tagAncTableShowClicked()));
    QObject::connect(ui->showAnchorTagCorrectionTable, SIGNAL(clicked()), this, SLOT(tagAncTableShowClicked()));

    QObject::connect(ui->zone1, SIGNAL(editingFinished()), this, SLOT(zone1EditFinished()));
    QObject::connect(ui->zone2, SIGNAL(editingFinished()), this, SLOT(zone2EditFinished()));

    QObject::connect(ui->zone1, SIGNAL(valueChanged(double)), this, SLOT(zone1ValueChanged(double)));
    QObject::connect(ui->zone2, SIGNAL(valueChanged(double)), this, SLOT(zone2ValueChanged(double)));
    QObject::connect(ui->inAlarm, SIGNAL(clicked()), this, SLOT(alarmSetClicked()));
    QObject::connect(ui->outAlarm, SIGNAL(clicked()), this, SLOT(alarmSetClicked()));

    QObject::connect(ui->tagHistoryN, SIGNAL(valueChanged(int)), this, SLOT(tagHistoryNumberValueChanged(int)));

    QObject::connect(RTLSDisplayApplication::viewSettings(), SIGNAL(showSave(bool)), this, SLOT(showSave(bool)));
    QObject::connect(RTLSDisplayApplication::viewSettings(), SIGNAL(showGO(bool, bool)), this, SLOT(showOriginGrid(bool, bool)));
    QObject::connect(RTLSDisplayApplication::viewSettings(), SIGNAL(setFloorPlanPic()), this, SLOT(getFloorPlanPic()));
    QObject::connect(RTLSDisplayApplication::client(), SIGNAL(enableFiltering()), this, SLOT(enableFiltering()));

    QObject::connect(ui->logging_pb, SIGNAL(clicked()), this, SLOT(loggingClicked()));

    //QObject::connect(RTLSDisplayApplication::client(), SIGNAL(enableAutoPositioning(int)), this, SLOT(enableAutoPositioning(int)));

    _logging = false ;

    ui->label_logfile->setText("");
    if(_logging)
    {
        ui->logging_pb->setText("停止");
        ui->label_logingstatus->setText("停止记录");
    }
    else
    {
        ui->logging_pb->setText("开始");
        ui->label_logingstatus->setText("开始记录");
    }

    //_enableAutoPos = false; //auto positioning only works when connected to Anchor #0, so it is disabled until connected to Anchor #0
    //ui->useAutoPos->setDisabled(true);

    RTLSDisplayApplication::connectReady(this, "onReady()");
}

void ViewSettingsWidget::onReady()
{
    QPropertyDataWidgetMapper *mapper = QPropertyModel::newMapper(RTLSDisplayApplication::viewSettings(), this);
    mapper->addMapping(ui->gridWidth_sb, "gridWidth");
    mapper->addMapping(ui->gridHeight_sb, "gridHeight");

    mapper->addMapping(ui->floorplanFlipX_cb, "floorplanFlipX", "checked");
    mapper->addMapping(ui->floorplanFlipY_cb, "floorplanFlipY", "checked");
    mapper->addMapping(ui->gridShow, "showGrid", "checked");
    mapper->addMapping(ui->showOrigin, "showOrigin", "checked");

    mapper->addMapping(ui->floorplanXOff_sb, "floorplanXOffset");
    mapper->addMapping(ui->floorplanYOff_sb, "floorplanYOffset");

    mapper->addMapping(ui->floorplanXScale_sb, "floorplanXScale");
    mapper->addMapping(ui->floorplanYScale_sb, "floorplanYScale");
    mapper->toFirst();

    QObject::connect(ui->floorplanFlipX_cb, SIGNAL(clicked()), mapper, SLOT(submit())); // Bug with QDataWidgetMapper (QTBUG-1818)
    QObject::connect(ui->floorplanFlipY_cb, SIGNAL(clicked()), mapper, SLOT(submit()));
    QObject::connect(ui->gridShow, SIGNAL(clicked()), mapper, SLOT(submit())); // Bug with QDataWidgetMapper (QTBUG-1818)
    QObject::connect(ui->showOrigin, SIGNAL(clicked()), mapper, SLOT(submit()));

    //by default the Geo-Fencing is OFF

    ui->showTagHistory->setChecked(true);

    ui->zone1->setDisabled(true);
    ui->zone2->setDisabled(true);
    ui->label_z1->setDisabled(true);
    ui->label_z2->setDisabled(true);
    ui->outAlarm->setDisabled(true);
    ui->inAlarm->setDisabled(true);

    ui->tabWidget->setCurrentIndex(0);

    RTLSDisplayApplication::graphicsWidget()->zone1Value(ui->zone1->value());
    RTLSDisplayApplication::graphicsWidget()->zone2Value(ui->zone2->value());
    RTLSDisplayApplication::graphicsWidget()->setAlarm(ui->inAlarm->isChecked(), ui->outAlarm->isChecked());

    ui->filtering->setEnabled(false);
    ui->filtering->addItems(RTLSDisplayApplication::client()->getLocationFilters());
    QObject::connect(ui->filtering, SIGNAL(currentIndexChanged(int)), this, SLOT(updateLocationFilter(int)));
}

ViewSettingsWidget::~ViewSettingsWidget()
{
    delete ui;
}


void ViewSettingsWidget::enableFiltering(void)
{
     ui->filtering->setEnabled(true);
     if(z==1)
     {
     ui->filtering->setCurrentIndex(2);
     z--;
     }
}

void ViewSettingsWidget::updateLocationFilter(int index)
{
     RTLSDisplayApplication::client()->setLocationFilter(index);
}

int ViewSettingsWidget::applyFloorPlanPic(const QString &path)
{
    QPixmap pm(path);

    if (pm.isNull())
    {
        //QMessageBox::critical(this, "Could not load floor plan", QString("Failed to load image : %1").arg(path));
        return -1;
    }

    ui->floorplanPath_lb->setText(QFileInfo(path).fileName());
    RTLSDisplayApplication::viewSettings()->setFloorplanPixmap(pm);
    _floorplanOpen = true;
    ui->floorplanOpen_pb->setText("清除");

    return 0;
}

void ViewSettingsWidget::getFloorPlanPic()
{
    applyFloorPlanPic(RTLSDisplayApplication::viewSettings()->getFloorplanPath());
}

void ViewSettingsWidget::floorplanOpenClicked()
{
    if(_floorplanOpen == false)
    {
        QString path = QFileDialog::getOpenFileName(this, "Open Bitmap", QString(), "Image (*.png *.jpg *.jpeg *.bmp)");
        if (path.isNull()) return;

        if(applyFloorPlanPic(path) == 0) //if OK set/save the path string
        {
            RTLSDisplayApplication::viewSettings()->floorplanShow(true);
            RTLSDisplayApplication::viewSettings()->setFloorplanPath(path);
            qDebug()<<path;
        }
        _floorplanOpen = true;
        ui->floorplanOpen_pb->setText("清除");
    }
    else
    {
       RTLSDisplayApplication::viewSettings()->floorplanShow(false);
       RTLSDisplayApplication::viewSettings()->clearSettings();
       _floorplanOpen = false;
       ui->floorplanOpen_pb->setText("打开");
       ui->floorplanFlipX_cb->setChecked(false);
       ui->floorplanFlipY_cb->setChecked(false);
       ui->floorplanXScale_sb->setValue(0.0);
       ui->floorplanYScale_sb->setValue(0.0);
       ui->floorplanXOff_sb->setValue(0.0);
       ui->floorplanYOff_sb->setValue(0.0);
       ui->floorplanPath_lb->setText("");
    }
}

void ViewSettingsWidget::showOriginGrid(bool orig, bool grid)
{
    Q_UNUSED(orig)

    ui->gridShow->setChecked(grid);
    ui->showOrigin->setChecked(orig);
}

void ViewSettingsWidget::gridShowClicked()
{
    RTLSDisplayApplication::viewSettings()->setShowGrid(ui->gridShow->isChecked());
}

void ViewSettingsWidget::originShowClicked()
{
    RTLSDisplayApplication::viewSettings()->setShowOrigin(ui->showOrigin->isChecked());
}

void ViewSettingsWidget::showNavigationModeClicked()
{
    if(ui->showNavigationMode->isChecked())
    {
        ui->showGeoFencingMode->setChecked(false);
        showGeoFencingModeClicked();
    }
    else
    {
        ui->showGeoFencingMode->setChecked(true);
        showGeoFencingModeClicked();
    }
}


void ViewSettingsWidget::showGeoFencingModeClicked()
{
    RTLSDisplayApplication::graphicsWidget()->showGeoFencingMode(ui->showGeoFencingMode->isChecked());

    if(ui->showGeoFencingMode->isChecked())
    {
        ui->showTagHistory->setDisabled(true);
        ui->tagHistoryN->setDisabled(true);

        ui->zone1->setEnabled(true);
        ui->zone2->setEnabled(true);
        ui->label_z1->setEnabled(true);
        ui->label_z2->setEnabled(true);
        ui->outAlarm->setEnabled(true);
        ui->inAlarm->setEnabled(true);

        ui->showNavigationMode->setChecked(false);

        //if(_enableAutoPos)
        //{
            //set auto positioning to off when in geo-fencing mode
            RTLSDisplayApplication::client()->setUseAutoPos(false);
            ui->useAutoPos->setDisabled(true);
        //}
    }
    else
    {
        ui->showTagHistory->setDisabled(false);
        ui->tagHistoryN->setDisabled(false);

        ui->zone1->setDisabled(true);
        ui->zone2->setDisabled(true);
        ui->label_z1->setDisabled(true);
        ui->label_z2->setDisabled(true);
        ui->outAlarm->setDisabled(true);
        ui->inAlarm->setDisabled(true);

        //if(_enableAutoPos)
        //{
            ui->useAutoPos->setDisabled(false);
            useAutoPosClicked();
        //}

        ui->showNavigationMode->setChecked(true);
    }

}

//void ViewSettingsWidget::enableAutoPositioning(int enable)
//{
//    _enableAutoPos = enable;
//    ui->useAutoPos->setDisabled(!enable);
//}

void ViewSettingsWidget::tagHistoryNumberValueChanged(int value)
{
    RTLSDisplayApplication::graphicsWidget()->tagHistoryNumber(value);
}

void ViewSettingsWidget::zone1EditFinished(void)
{
    RTLSDisplayApplication::graphicsWidget()->zone1Value(ui->zone1->value());
}

void ViewSettingsWidget::zone2EditFinished(void)
{
    RTLSDisplayApplication::graphicsWidget()->zone2Value(ui->zone2->value());
}

void ViewSettingsWidget::zone1ValueChanged(double value)
{
    RTLSDisplayApplication::graphicsWidget()->zone1Value(value);
}

void ViewSettingsWidget::zone2ValueChanged(double value)
{
    RTLSDisplayApplication::graphicsWidget()->zone2Value(value);
}

void ViewSettingsWidget::useAutoPosClicked()
{
    RTLSDisplayApplication::client()->setUseAutoPos(ui->useAutoPos->isChecked());

    RTLSDisplayApplication::graphicsWidget()->anchTableEditing(!ui->useAutoPos->isChecked());
}

void ViewSettingsWidget::tagAncTableShowClicked()
{
    RTLSDisplayApplication::graphicsWidget()->setShowTagAncTable(ui->showAnchorTable->isChecked(),
                                                                 ui->showTagTable->isChecked(),
                                                                 ui->showAnchorTagCorrectionTable->isChecked());
}

void ViewSettingsWidget::setTagHistory(int h)
{
    ui->tagHistoryN->setValue(h);
}


void ViewSettingsWidget::tagHistoryShowClicked()
{
    RTLSDisplayApplication::graphicsWidget()->setShowTagHistory(ui->showTagHistory->isChecked());
}


void ViewSettingsWidget::loggingClicked(void)
{
    if(_logging == false)
    {
        _logging = true ;
        RTLSDisplayApplication::client()->openLogFile("");
        ui->logging_pb->setText("停止");
        ui->label_logingstatus->setText("开始记录");
        ui->label_logfile->setText(RTLSDisplayApplication::client()->getLogFilePath());
    }
    else
    {
        RTLSDisplayApplication::client()->closeLogFile();
        ui->logging_pb->setText("开始");
        ui->label_logingstatus->setText("停止记录");
        ui->label_logfile->setText("");
        ui->saveFP->setChecked(false);
        _logging = false ;
    }
}


void ViewSettingsWidget::alarmSetClicked()
{
    RTLSDisplayApplication::graphicsWidget()->setAlarm(ui->inAlarm->isChecked(), ui->outAlarm->isChecked());
}

void ViewSettingsWidget::saveFPClicked()
{
    RTLSDisplayApplication::viewSettings()->setSaveFP(ui->saveFP->isChecked());

    if(ui->saveFP->isChecked())
    {
        //save the current settings when clicked
       emit saveViewSettings();
    }
}

void ViewSettingsWidget::showSave(bool save)
{
    ui->saveFP->setChecked(save);
}

void ViewSettingsWidget::originClicked()
{
    OriginTool *tool = new OriginTool(this);
    QObject::connect(tool, SIGNAL(done()), tool, SLOT(deleteLater()));
    RTLSDisplayApplication::graphicsView()->setTool(tool);
}

void ViewSettingsWidget::scaleClicked()
{
    ScaleTool *tool = NULL;

    if (QObject::sender() == ui->scaleX_pb)
        tool = new ScaleTool(ScaleTool::XAxis, this);
    else if (QObject::sender() == ui->scaleY_pb)
        tool = new ScaleTool(ScaleTool::YAxis, this);

    QObject::connect(tool, SIGNAL(done()), tool, SLOT(deleteLater()));
    RTLSDisplayApplication::graphicsView()->setTool(tool);
}

//jerry
//void ViewSettingsWidget::on_pushButton_released()
//{
//    if(ui->pushButton->text() == tr("侦听"))
//    {
//        //从输入框获取端口号
//        int port = ui->lineEdit_prot->text().toInt();
//        emit Signal_button_connect(port, true);
//    }
//    else
//    {
//        emit Signal_button_connect(0, false);
//    }
//}

//void ViewSettingsWidget::on_pushButton_Send_clicked()
//{
//    QString cmd = ui->textEdit_3->toPlainText().toLatin1();
//    cmd.append("\r\n");
//    qDebug() << cmd;
//    emit Signal_button_send(cmd.toLatin1());
//}


//void ViewSettingsWidget::Slot_Sever_State(bool state)
//{
//    if(state == true)
//    {
//        //监听开启
//        qDebug()<< "Listen succeessfully!";
//        ui->pushButton->setText("取消侦听");//修改按键文字
//    }
//    else
//    {
//        //监听关闭
//        ui->pushButton->setText("侦听");//修改按键文字
//        ui->pushButton_Send->setEnabled(false);
//    }
//}

//void ViewSettingsWidget::Slot_Client_Connect()
//{
//    ui->pushButton_Send->setEnabled(true);
//}

//void ViewSettingsWidget::Slot_Client_Disconnect()
//{
//    ui->pushButton_Send->setEnabled(false);
//}

//void ViewSettingsWidget::Slot_Client_Recvdata(QByteArray data)
//{
//    qDebug()<< "recv data";
//    QString str =  tr(data);
//    //刷新显示
//    ui->textEdit_4->setText(str+"!!!");
//}

//liwenfen
void ViewSettingsWidget::on_pushButton_Listen_clicked()
{
    QHostInfo info = QHostInfo::fromName(QHostInfo::localHostName());
    foreach(QHostAddress address,info.addresses())
    {
         if(address.protocol() == QAbstractSocket::IPv4Protocol)
             ip=address.toString();
    }
    if(ui->pushButton_Listen->text() == tr("侦听"))
    {
        //从输入框获取端口号
        int port = ui->lineEdit_Port_2->text().toInt();

        //监听指定的端口
        if(!server->listen(QHostAddress::Any, port))
        {
            //若出错，则输出错误信息
            qDebug()<<server->errorString();
            return;
        }
        //修改按键文字
        ui->pushButton_Listen->setText("取消侦听");
        qDebug()<< "Listen succeessfully!";

        static int j=100;
        for (int i=0;i<j;i++) {
            socket_list->append(NULL);
        }


    }
    else
    {
        int num=number;
        QIcon icon2(":/icons/fail.jpg");
        for (int i=0;i<5;i++)
        {
            ui->comboBox->setItemIcon(i,icon2);
            if(socket_list->at(i)!=NULL&&socket_list->at(i)->state() == QAbstractSocket::ConnectedState)
            {
                //关闭连
                socket_list->at(i)->disconnectFromHost();
               // socket_list->replace(i,NULL);
                qDebug()<<number;
            }
        }
        number=-1;
        //取消侦听
        server->close();
        //修改按键文字
        ui->pushButton_Listen->setText("侦听");
        //发送按键失能
        ui->pushButton_Send_2->setEnabled(false);
    }

}

void ViewSettingsWidget::on_pushButton_Send_2_clicked()
{
    qDebug() << "Send: " << ui->textEdit_Send_2->toPlainText();
    //获取文本框内容并以ASCII码形式发送
//    socket->write(ui->textEdit_Send_2->toPlainText().toUtf8());
//    socket->flush();
    for(int i=0;i<=number;i++)
    {
    socket_list->at(i)->write(ui->textEdit_Send_2->toPlainText().toUtf8());
    socket_list->at(i)->flush();
    }
}

void ViewSettingsWidget::server_New_Connect()
{
    socket = server->nextPendingConnection();
    qDebug()<<socket->peerAddress().toString();
//    static int j=100;
//    for (int i=0;i<j;i++) {
//        socket_list->append(NULL);
//    }
//        socket_list->append(socket);
//        socket_list->append(socket);
//        socket_list->append(socket);
//        socket_list->append(socket);
//        socket_list->at(0)->reset();
//        socket_list->at(1)->peerAddress()=QHostAddress("::ffff:192.168.0.152");
//        socket_list->at(2)->peerAddress()=QHostAddress("::ffff:192.168.0.152");
//        socket_list->at(3)->peerAddress()=QHostAddress("::ffff:192.168.0.152");
    //获取客户端连接
//    QString IP;

//    IP=(socket->peerAddress()).toString();
    number++;
  //  QIcon icon1(":/icons/DWctrler.ico");
    QIcon icon1(":/zhaobeitubiao.png");
//    socket_list->append(socket);
//    socket_list[0].append(socket);
    //连接QTcpSocket的信号槽，以读取新数
        if(socket->peerAddress().toString()+"\r\n"==roomid[0])
            {
                socket_list->replace(0,socket);
                qDebug()<<"2039连接";
                ui->comboBox->setItemIcon(0,icon1);
            }
        else if(socket->peerAddress().toString()+"\r\n"==roomid[1])
            {
                socket_list->replace(1,socket);
                qDebug()<<"2037连接";
                ui->comboBox->setItemIcon(1,icon1);
            }
        else if(socket->peerAddress().toString()+"\r\n"==roomid[2])
            {
                socket_list->replace(2,socket);
                qDebug()<<"大堂连接";
                ui->comboBox->setItemIcon(2,icon1);
            }
        else if(socket->peerAddress().toString()+"\r\n"==roomid[3])
            {
                socket_list->replace(3,socket);
                qDebug()<<"2038连接";
                ui->comboBox->setItemIcon(3,icon1);
            }
        else if(socket->peerAddress().toString()+"\r\n"==roomid[4])
            {
                socket_list->replace(4,socket);
                qDebug()<<"2036连接";
                ui->comboBox->setItemIcon(4,icon1);
            }
    QObject::connect(socket, &QTcpSocket::readyRead, this, &ViewSettingsWidget::socket_Read_Data);
    QObject::connect(socket, &QTcpSocket::disconnected, this, &ViewSettingsWidget::socket_Disconnected);
    //发送按键使能
    ui->pushButton_Send_2->setEnabled(true);
    qDebug() << "A Client connect!";

   // qDebug()<<socket_list->at(0)->peerAddress();
    //qDebug()<<socket->peerAddress();
}

//每当接收数据，执行本函数
void ViewSettingsWidget::socket_Read_Data()
{
    //读取缓冲区数据，如果该房间未连接，文本窗口显示未连接

        for(int i=0;i<socket_list->size();i++)
        {
           if(socket_list->at(i)==NULL)continue;
                buffer = socket_list->at(i)->readAll();// readAll();
                if(buffer!="")
                {
                buffer1=buffer;
                qDebug()<<socket_list->at(i)->peerAddress();
                if(buffer.mid(60,1)==QString::number(tagid,10))
                ui->comboBox->setCurrentIndex(i);
                if(ui->comboBox->currentIndex()==i)
                    {
                    emit sendchuandi(buffer,500);
                    chucun=buffer;
                    }
                break;
                }
        }

    if(!buffer.isEmpty())
    {
        ui->textEdit_Recv_2->setText(buffer1);
        ui->textEdit_Recv_2->moveCursor(QTextCursor::End);
    }

    void_chucun();
}

void ViewSettingsWidget::socket_Disconnected()
{
    QIcon icon2(":/icons/fail.jpg");
    ui->comboBox->setItemIcon(0,icon2);
    ui->comboBox->setItemIcon(1,icon2);
    ui->comboBox->setItemIcon(2,icon2);
    ui->comboBox->setItemIcon(3,icon2);
    ui->comboBox->setItemIcon(4,icon2);
    //发送按键失能
    //ui->pushButton_Send_2->setEnabled(false);
   // qDebug() << "Disconnected!"<<number;
    number--;
}

void ViewSettingsWidget::on_comboBox_currentIndexChanged(const QString &arg1)
{
    nowroomnane=ui->comboBox->currentText();
    ui->showGeoFencingMode->click();
    ui->showGeoFencingMode->click();
    double cx,cy,xscale,yscale;
    double qianx=ui->floorplanXOff_sb->text().toDouble();
    double qiany=ui->floorplanYOff_sb->text().toDouble();
    xscale=ui->floorplanXScale_sb->text().toDouble();
    yscale=ui->floorplanYScale_sb->text().toDouble();
    qDebug()<<"测试";
    QDir d;
    QString path;
    path="setting/";
    d.mkpath(path);
    QString filename =(path+"/"+ui->comboBox->currentText()+".txt");
    QString x,y,point;
    if(filename.isEmpty() == false)
        {
            QFile file(filename);
            bool isok = file.open(QIODevice::ReadOnly);
            if(isok == true)
            {
                ui->floorplanXOff_sb->setValue(file.readLine().toInt());
                ui->floorplanYOff_sb->setValue(file.readLine().toInt());
                ui->floorplanXScale_sb->setValue(file.readLine().toDouble());
                ui->floorplanYScale_sb->setValue(file.readLine().toDouble());
                QString str=file.readLine();
                if(str=="true\r\n")ui->floorplanFlipX_cb->setChecked(true);
                else ui->floorplanFlipX_cb->setChecked(false);
                str=file.readLine();
                if(str=="true\r\n")ui->floorplanFlipY_cb->setChecked(true);
                else ui->floorplanFlipY_cb->setChecked(false);
                str=file.readLine();
                if(!(str=="true\r\n"))
                ui->showOrigin->setChecked(false);
            }
            file.close();
        }
    namenumber=ui->comboBox->currentIndex();
    ui->floorplanFlipX_cb->click();
    ui->floorplanFlipX_cb->click();
    double houx=ui->floorplanXOff_sb->text().toDouble();
    double houy=ui->floorplanYOff_sb->text().toDouble();
    cx=qianx-houx;
    cy=qiany-houy;
    qDebug()<<cx;
    qDebug()<<cy;
    for(int i=0;i<poinnum;i++)
    {
        if(poin[i].rx()==0&&poin[i].ry()==0)
        {
            poin[i].rx()==poin[i-1].rx();
            poin[i].ry()==poin[i-1].rx();
        }
        else {
            poin[i].rx()+=cx/xscale;
            poin[i].ry()-=cy/yscale;
        }
    }
    for(int i=0;i<hostroy;i+=2)
    {
        poin[poinnum+i].rx()=poin[poinnum+i-1].rx()+0.0001;
        poin[poinnum+i].ry()=poin[poinnum+i-1].ry()+0.0001;
        poin[poinnum+i+1].rx()=poin[poinnum+i].rx()-0.0001;
        poin[poinnum+i+1].ry()=poin[poinnum+i].ry()-0.0001;
    }
}

void ViewSettingsWidget::read_Com()
{
    QByteArray temp=serial.read(1);//在缓冲区中读一个byte

}
void ViewSettingsWidget::on_openPortBtn_clicked()
{
    if(ui->portNameComboBox->isEnabled())
        {
            ui->openPortBtn->setText("关闭串口");		//按下“OpenPort”后，按键显示为“ClosePort”
            m_timer=startTimer(100);
            ui->portNameComboBox->setDisabled(true);	//按下“OpenPort”后，禁止再修改COM口
            serial.setPortName(ui->portNameComboBox->currentText());	//设置COM口
            serial.setBaudRate(QSerialPort::Baud115200,QSerialPort::AllDirections);//设置波特率和读写方向
            serial.setDataBits(QSerialPort::Data8);		//数据位为8位
            serial.setFlowControl(QSerialPort::NoFlowControl);//无流控制
            serial.setParity(QSerialPort::NoParity);	//无校验位
            serial.setStopBits(QSerialPort::OneStop);	//一位停止位
            serial.close();					//先关串口，再打开，可以保证串口不被其它函数占用。
            if(serial.open(QIODevice::ReadWrite))		//以可读写的方式打开串口
            {
                connect(&serial,SIGNAL(readyRead()),this,SLOT(read_Com()));	//把串口的readyRead()信号绑定到read_Com()这个槽函数上
            }
        }
    else
        {
            ui->openPortBtn->setText("打开串口");		//按下“ClosePort”后，按键显示为“OpenPort”
            ui->portNameComboBox->setEnabled(true);		//按下“ClosePort”后，COM口可被修改
            killTimer(m_timer);
            serial.close();					//关串口
        }
}

void ViewSettingsWidget::on_SendBtn_clicked()
{
    QString str=socket_list->at(namenumber)->readAll().toHex();
    QByteArray temp1 = socket_list->at(namenumber)->readAll();
    serial.write(buffer,buffer.size());

    //serial.write(ui->textEdit_Recv_2->toPlainText().toUtf8(),ui->textEdit_Recv_2->toPlainText().size());//以ASCII码的形式通过串口发送出去。
    qDebug()<<temp1;
}
void ViewSettingsWidget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()==m_timer)
    {
        QString str1[3];
        for (int var = 0; var < 3; ++var)
        {
        if(str_read[read+var].mid(0, 1)=="m")
        {

            str1[var]=str_read[read+var];
        }
        else {
            ui->horizontalSlider->setValue(str_read[read+var].mid(0,2).toInt());
            ui->spinBox_bofang->setValue(str_read[read+var].mid(0,2).toInt());
            str1[var]=str_read[read+var].remove(0,2);
        }
        }
        if(str1[0].mid(0,2)!="ma")
        {
            read=read-1;
        }

        QByteArray bu=(str1[0]+"\r").toLatin1();
        QByteArray bu1=(str1[1]+str1[2]).toLatin1();
        emit sendchuandi(bu,500);
        emit sendchuandi(bu1,500);
        read=read+3;if((str1[0].mid(0,1)!="m"))
        {
            ui->pushButton_read->click();
            ui->pushButton_read->click();

        }
    }
}
void ViewSettingsWidget::on_pushButton_clicked()
{
    m_timer=startTimer(100);
}

void ViewSettingsWidget::on_pushButton_2_clicked()
{
    killTimer(m_timer);
}

//void ViewSettingsWidget::on_pushButton_3_clicked()
//{
//    emit sendchuandi(buffer,500);
//    qDebug()<<"asd";
//}



void ViewSettingsWidget::on_checkBox_stateChanged(int arg1)
{

    for(int i=0;i<poinnum;i++)
    {
        poin[i].rx()=0;
        poin[i].ry()=0;
    }
    GraphicsWidget *g=new GraphicsWidget;
    int i=ui->comboBox_2->currentIndex();
  //  emit centerAt(1.0, 1.0);
    g->zhuizong(arg1,i);
    poinnum=0;
}

void ViewSettingsWidget::on_comboBox_2_currentIndexChanged(int index)
{
    ui->checkBox->stateChanged(0);
    ui->checkBox->setChecked(Qt::Unchecked);
    qApp->processEvents();
    tagid=(ui->comboBox_2->currentIndex());
    qDebug()<<ui->comboBox_2->currentIndex();
   // ui->checkBox->isChecked()==!ui->checkBox->isChecked();
}


void ViewSettingsWidget::void_chucun()
{
    if(ui->checkBox_save->isChecked()==true)
    {
    QDateTime da_time;
    QString str=da_time.currentDateTime().toString("yyyyMMdd HHmmss");
    QDir d;
    QString path;
    QString file_name;
    //储存-------------------
    path="path/";
    file_name=da_time.currentDateTime().toString("yyyyMMddHH");
    d.mkpath(path);
    QString filename =(path+file_name+".txt");
    if(filename.isEmpty() == false)
        {
            QFile file(filename);
            bool isok = file.open(QIODevice::WriteOnly|QIODevice::Append);
            if(isok == true)
            {
                file.write(QString::number(QDateTime::currentMSecsSinceEpoch()-currentTime).toUtf8()+"->\n"+chucun.toUtf8());
            }
            file.close();
        }
    }
}
void ViewSettingsWidget::on_pushButton_read_clicked()
{
    QString path;
    path="path/"+ui->comboBox_room->currentText()+"/"+ui->comboBox_year->currentText()
            +ui->comboBox_mouth->currentText()+ui->comboBox_day->currentText()
            +"/"+ui->comboBox_hour->currentText()+".txt";
    qDebug()<<path;
    QString filename =(path);
       if(filename.isEmpty() == false)
       {
           QFile file(filename);
           bool isok = file.open(QIODevice::ReadOnly);//以只读的方式打开文件
           if(isok == true)
           {
               int i=0;
               while(file.atEnd() == false)
               {
                   str_read[i]=file.readLine();
                   i++;
               }
           }
           file.close();//文件读取完毕后关闭文件。
        }
       if(m_read==false)
       {
       m_timer=startTimer(i_speed);
       m_read=true;
       ui->pushButton_read->setText("停止");
       ui->horizontalSlider->setEnabled(true);
       }
       else
       {
           poinnum=0;
           killTimer(m_timer);
           m_read=false;
           ui->pushButton_read->setText("读取");
           int i=0;
           while(str_read[i+1]!=""&&str_read[i+2]!="")
           {
               str_read[i]="";
               //ui->textEdit->append(array);
              // emit sendchuandi(array1,500);
               i++;
           }
          read=0;
       }
      //m_read=startTimer(2000);
}
void ViewSettingsWidget::on_comboBox_speed_currentIndexChanged(const QString &arg1)
{
    if(ui->comboBox_speed->currentIndex()==0)
        i_speed=560;
    else if(ui->comboBox_speed->currentIndex()==1)
        i_speed=280;
    else if(ui->comboBox_speed->currentIndex()==2)
        i_speed=140;
    else if(ui->comboBox_speed->currentIndex()==3)
        i_speed=70;
    else if(ui->comboBox_speed->currentIndex()==4)
        i_speed=35;
    else if(ui->comboBox_speed->currentIndex()==5)
        i_speed=2;
    killTimer(m_timer);
    m_timer=startTimer(i_speed);

}

void ViewSettingsWidget::on_horizontalSlider_sliderReleased()
{
    ui->pushButton_read->click();
    int i=0;
    while(str_read[i].mid(0,2).toInt()!=(ui->horizontalSlider->value()))
    {
        i++;
    }
    read=i;
    ui->spinBox_bofang->setValue(ui->horizontalSlider->value());
}
void ViewSettingsWidget::on_horizontalSlider_sliderPressed()
{

    ui->pushButton_read->click();
}

void ViewSettingsWidget::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox_bofang->setValue(ui->horizontalSlider->value());
}
void ViewSettingsWidget::on_filtering_currentIndexChanged(const QString &arg1)
{
    //ui->checkBox->setChecked(false);
}
void ViewSettingsWidget::on_pushButton_savesett_clicked()
{
    QDir d;
    QString path;
    path="setting/";
    d.mkpath(path);
    QString filename =(path+"/"+ui->comboBox_settroom->currentText()+".txt");
    QString x,y,point;
    if(ui->floorplanFlipX_cb->isChecked()) x="true";
    else x="false";
    if(ui->floorplanFlipY_cb->isChecked()) y="true";
    else y="false";
    if(ui->showOrigin->isChecked()) point="true";
    else point="false";
    if(filename.isEmpty() == false)
        {
            QFile file(filename);
            bool isok = file.open(QIODevice::WriteOnly);
            if(isok == true)
            {
                file.write(ui->floorplanXOff_sb->text().toUtf8()+"\r\n");
                file.write(ui->floorplanYOff_sb->text().toUtf8()+"\r\n");
                file.write(ui->floorplanXScale_sb->text().toUtf8()+"\r\n");
                file.write(ui->floorplanYScale_sb->text().toUtf8()+"\r\n");
                file.write(x.toLatin1()+"\r\n");
                file.write(y.toLatin1()+"\r\n");
                file.write(point.toLatin1()+"\r\n");
            }
            file.close();
        }
}


void ViewSettingsWidget::void_roommap(QString map)
{
    if(_floorplanOpen == false)
    {
        QString path = "C:/Users/Administrator/Desktop/qt/qt(kalman filtering)/res/QQ.png";
        if (path.isNull()) return;

        if(applyFloorPlanPic(path) == 0) //if OK set/save the path string
        {
            RTLSDisplayApplication::viewSettings()->floorplanShow(true);
            RTLSDisplayApplication::viewSettings()->setFloorplanPath(path);
            qDebug()<<path;
        }
        _floorplanOpen = true;
        ui->floorplanOpen_pb->setText("清除");
    }
    else
    {
       RTLSDisplayApplication::viewSettings()->floorplanShow(false);
       RTLSDisplayApplication::viewSettings()->clearSettings();
       _floorplanOpen = false;
       ui->floorplanOpen_pb->setText("打开");
       ui->floorplanFlipX_cb->setChecked(false);
       ui->floorplanFlipY_cb->setChecked(false);
       ui->floorplanXScale_sb->setValue(0.0);
       ui->floorplanYScale_sb->setValue(0.0);
       ui->floorplanXOff_sb->setValue(0.0);
       ui->floorplanYOff_sb->setValue(0.0);
       ui->floorplanPath_lb->setText("");
    }
}
void ViewSettingsWidget::void_roomidread()
{

    QDir d;
    QString path;
    path="setting/";
    d.mkpath(path);
    QString filename =(path+"/roomid.txt");
    QString x,y,point;
    if(filename.isEmpty() == false)
        {
        QTextCodec *codec=QTextCodec::codecForName("utf-8");
            QFile file(filename);
            bool isok = file.open(QIODevice::ReadOnly);
            if(isok == true)
            {
                int i=0;
                while(file.atEnd() == false)
                {
                    QTextCodec *codec=QTextCodec::codecForName("GB2312");
                    QString con=codec->toUnicode(file.readLine());
                    con=con.split('\r')[0];
                    qDebug()<<con;
                    ui->comboBox->setItemText(i,con);
                    ui->comboBox_settroom->setItemText(i,con);
                            // 按指定编码格式修改获取的数据
                    roomid[i]=file.readLine();
                    qDebug()<<roomid[i];
                    i++;
                }
            }
            file.close();
        }
    nowroomnane=ui->comboBox->currentText();
}

void ViewSettingsWidget::on_pushButton_setroomip_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "Open roomip", "./setting/roomid.txt", "TXT (*id.txt)");
    QDesktopServices::openUrl(QUrl::fromLocalFile(QFileInfo(path).canonicalFilePath()));
}



void ViewSettingsWidget::on_pushButton_4_clicked()
{
    poin[3].rx()=20;
    poin[3].ry()=20;
}

void ViewSettingsWidget::on_spinBox_textChanged(const QString &arg1)
{
    hostroy=ui->spinBox->cleanText().toInt();
}

void ViewSettingsWidget::on_checkBox_save_stateChanged(int arg1)
{
    currentTime =QDateTime::currentMSecsSinceEpoch();
}
