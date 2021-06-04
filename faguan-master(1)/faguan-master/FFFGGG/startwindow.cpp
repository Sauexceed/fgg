#include "startwindow.h"
#include "ui_startwindow.h"
#include <QTimer>
#include <QPushButton>
#include <QSpinBox>
#include <QLabel>
#include <QDialog>
#include <QDebug>


StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);
    setWindowTitle("红黑夜法官 1.0");

    this->setFixedSize(1250,800);//固定窗口大小

   // QLabel *exlabel=new QLabel(this);//(骚图x2)
    //exlabel->setStyleSheet("border-image:url(:/image/exlabel.");

    QLabel *helplabel = new QLabel(this);
    helplabel->setFixedSize(1314,673);
    helplabel->setStyleSheet("border-image: url(:/image/introduction.jpg);");
    helplabel->hide();//帮助页面的设置

    ui->closeButton->setVisible(false);//隐藏关闭按钮
    //ui->titlelabel->setStyleSheet("color:???");//设置标题颜色<-现在直接在改变样式表中改

    connect(ui->actionExit,&QAction::triggered,this,&MainWindow::close);//菜单栏退出按钮实现

    connect(ui->StartButton,&QToolButton::clicked,ui->StartButton,[=](){
        ui->StartButton->setStyleSheet("border-image: url(:/image/playbutton.jpg);");
    });//设置两次，防止出现按钮区域空白！下同



    connect(ui->StartButton,&QToolButton::released,[=](){
        ui->StartButton->setStyleSheet("border-image: url(:/image/playbutton.jpg);");
        StartGame();
    });//点击按钮开始游戏

    connect(ui->helpButton,&QToolButton::clicked,ui->helpButton,[=](){
        ui->helpButton->setStyleSheet("border-image: url(:/image/exhelpbutton.jpg);");
    });//帮助按钮



    connect(ui->helpButton,&QToolButton::released,[=](){
        ui->helpButton->setStyleSheet("border-image: url(:/image/exhelpbutton.jpg);");
        QTimer::singleShot(100,this,[=](){    //每隔0.1秒刷新按钮！
            ui->helpButton->setVisible(false);
            ui->closeButton->setVisible(true);
            helplabel->show();
        });
    });//点击按钮打开帮助界面

    connect(ui->closeButton,&QToolButton::clicked,ui->closeButton,[=](){
        ui->closeButton->setStyleSheet("border-image: url(:/image/1_exitbutton.jpg);");
    });//关闭按钮


    connect(ui->closeButton,&QToolButton::released,[=](){
        ui->closeButton->setStyleSheet("border-image: url(:/image/1_exitbutton.jpg);");
        QTimer::singleShot(100,this,[=](){
            ui->helpButton->setVisible(true);
            ui->closeButton->setVisible(false);
            helplabel->hide();
        });
    });//关闭按钮关闭帮助界面
}

void StartWindow::paintEvent(QPaintEvent *event)//绘制背景图
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/image/back.jpeg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}

void StartWindow::StartGame()//游戏开始初始化
{
    QDialog *player_num_dialog = new QDialog(this);//创建选择人数窗口
    player_num_dialog->setFixedSize(300,140);
    player_num_dialog->setWindowTitle("选择玩家人数");
    player_num_dialog->setWindowIcon(QIcon(":/image/icon.jpg"));
    QSpinBox *num_box = new QSpinBox(player_num_dialog);
    num_box->move(190,30);
    num_box->setMinimum(3);
    QLabel *num_label = new QLabel("请选择玩家人数：",player_num_dialog);
    num_label->move(50,35);
    QPushButton *okbutton =new QPushButton("确认",player_num_dialog);
    okbutton->move(140,100);
    QPushButton *cancelbutton =new QPushButton("取消",player_num_dialog);
    cancelbutton->move(220,100);
    connect(okbutton,&QPushButton::clicked,player_num_dialog,[=](){
        int playernum = num_box->value();

        scene = new MainWindow(this,playernum);
        connect(scene,&MainWindow::restart,this,&StartWindow::show);//主界面监听返回，点击restart时，显示start界面！实现重玩！
        player_num_dialog->close();
        this->close();
        scene->show();
    });
    connect(cancelbutton,&QPushButton::clicked,player_num_dialog,[=](){
        player_num_dialog->close();
    });
    player_num_dialog->exec();//生成窗口
}

StartWindow::~StartWindow()
{
    delete ui;
}
