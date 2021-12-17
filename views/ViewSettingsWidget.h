// -------------------------------------------------------------------------------------------------------------------
//
//  File: ViewSettingsWidget.h
//
//  Copyright 2016 (c) Decawave Ltd, Dublin, Ireland.
//
//  All rights reserved.
//
//  Author:
//
// -------------------------------------------------------------------------------------------------------------------

#ifndef VIEWSETTINGSWIDGET_H
#define VIEWSETTINGSWIDGET_H
//liwenfeng
#include<QTime>
#include<QTimerEvent>
#include <QTimer>
#include <QtSerialPort/QSerialPort>


#include <QWidget>
#include "RTLSClient.h"
#include <QTcpServer>       //监听套接字
#include <QTcpSocket>       //通讯套接字，只有服务器才有两个套接字

namespace Ui {
class ViewSettingsWidget;
}

class ViewSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ViewSettingsWidget(QWidget *parent = 0);
    ~ViewSettingsWidget();

    int applyFloorPlanPic(const QString &path);
 //liwenfeng
    QByteArray buffer;
    QString buffer1;
    QString chucun;
    Ui::ViewSettingsWidget *ui;
    QArrayData IP;
    int number=-1;
    int namenumber=0;
    int disnum=0;
signals:
   void sendchuandi(QByteArray soc,int a);


signals:
    //jerry
//    void Signal_button_connect(int port,bool is_open);
//    void Signal_button_send(QByteArray buf);


    void saveViewSettings(void);

protected slots:
    void onReady();

    //void enableAutoPositioning(int enable);

    void floorplanOpenClicked();
    void updateLocationFilter(int index);
    void enableFiltering(void);
    void originClicked();
    void scaleClicked();

    void gridShowClicked();
    void originShowClicked();
    void tagHistoryShowClicked();

    void saveFPClicked();
    void tagAncTableShowClicked();
    void useAutoPosClicked();
    void showGeoFencingModeClicked();
    void showNavigationModeClicked();
    void alarmSetClicked();

    void zone1ValueChanged(double);
    void zone2ValueChanged(double);
    void zone1EditFinished(void);
    void zone2EditFinished(void);
    void tagHistoryNumberValueChanged(int);

    void showOriginGrid(bool orig, bool grid);
    void getFloorPlanPic(void);
    void showSave(bool);

    void setTagHistory(int h);
    void loggingClicked(void);


//private slots:
//   //jerry add
//   void Slot_Sever_State(bool state);
//   void Slot_Client_Connect();
//   void Slot_Client_Disconnect();
//   void Slot_Client_Recvdata(QByteArray data);
//   void on_pushButton_Send_clicked();
//   void on_pushButton_released();
private:
    //Ui::ViewSettingsWidget *ui;

    bool _logging ;
    bool _floorplanOpen ;

    //bool _enableAutoPos;


private slots:
    void on_pushButton_Listen_clicked();

    void on_pushButton_Send_2_clicked();

    void server_New_Connect();

    void socket_Read_Data();

    void socket_Disconnected();

    void on_comboBox_currentIndexChanged(const QString &arg1);

public:
    QTcpServer* server;
    QTcpSocket* socket;
    QList<QHostAddress*> *host_list;
    QList<QTcpSocket*> *socket_list;
    //liwenfeng
public:
    void void_chucun();
    QString ip;
   int tagid;
private slots:


    void on_openPortBtn_clicked();//利用“转到槽”添加的槽函数声明

    void on_SendBtn_clicked();
    void read_Com();			//手动添加的槽函数声明，用于读出串口缓冲区的内容
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();
    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_read_clicked();


    void on_checkBox_stateChanged(int arg1);

    void on_comboBox_speed_currentIndexChanged(const QString &arg1);

    void on_horizontalSlider_sliderReleased();
    void on_horizontalSlider_sliderPressed();


    void on_filtering_currentIndexChanged(const QString &arg1);


    void on_horizontalSlider_valueChanged(int value);


    void on_pushButton_savesett_clicked();

    void void_roommap(QString map);
    void void_roomidread();

    void on_pushButton_setroomip_clicked();


    void on_spinBox_textChanged(const QString &arg1);

    void on_checkBox_save_stateChanged(int arg1);


    void on_pushButton_4_clicked();

private:

    QSerialPort serial;
protected:
    void timerEvent(QTimerEvent *event);
    int m_timer;
    int m_read;
    int read;
    QString s_mini;
    int i_mini;
    int i_speed;
    bool b_read;
    bool b_save;
    int i_save;
    QByteArray array1;
    QString str_read[50000];
    QString roomid[5];
};
#endif // VIEWSETTINGSWIDGET_H
