#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include "mainwindow.h"

namespace Ui {
class StartWindow;
}

class StartWindow : public QMainWindow
{
    Q_OBJECT//QT界面用

public:
    explicit StartWindow(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);//绘图事件，绘制背景图片
    ~StartWindow();//默认析构函数

private:
    Ui::StartWindow *ui;//ui设计界面
    MainWindow *scene = nullptr;//主界面指针

public slots:
    void StartGame();//游戏开始初始化
};



#endif // STARTWINDOW_H
