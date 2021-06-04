#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPainter>
#include <QSpinBox>
#include <QDebug>
#include <QPushButton>
#include <QDialog>
#include <QCloseEvent>
#include <cmath>
#include "data.h"
#include "player.h"
#include "votedialog.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT//QT界面
public:
    explicit MainWindow(QWidget *parent,int num);
    void paintEvent(QPaintEvent *);//绘图事件，绘制背景图片
    void closeEvent(QCloseEvent *);//关闭窗口事件
    void EndGame(int type);//游戏结束
    ~MainWindow();
private:
    Ui::MainWindow *ui;//ui指针
    Data D_data;//平台类
    QTimer Timer_show,Timer_speech;//显示计时器,发言计时器
    QTimer Timer_vote;//投票计时器
    QTimer Timer_night;//夜晚计时器
    int village_head_pos =0;//当前村长位置，0为无村长
    int left_time;//剩余时间
    int direction = 0;//0为从村长右边玩家开始发言，1为从村长左边玩家开始发言
    int Operator = 1;//当前操作玩家
    int day_num =1;//游戏进行天数
    int speech_time = 120 ,vote_time = 45;//发言和投票的限制时间
    float village_head_votenum = 0.5;//村长票数改变量
signals:
    void restart();//返回信号
private slots:
    void Run();//游戏开始运行
    void Speech();//发言阶段
    void Vote();//投票阶段
    void Night();//夜晚阶段
    void Turn_left();//向左切换
    void Turn_right();//向右切换

};

#endif // MAINWINDOW_H
