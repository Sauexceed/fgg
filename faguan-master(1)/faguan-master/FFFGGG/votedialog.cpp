#include "votedialog.h"
#include "ui_votedialog.h"
#include <QDebug>

VoteDialog::VoteDialog(QWidget *parent,int playernum) :
    QDialog(parent),
    ui(new Ui::VoteDialog)
{
    ui->setupUi(this);
    setWindowTitle("投票");
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(playernum);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
       int num=ui->spinBox->value();
       close();
       emit senddata(num);
    });
}

VoteDialog::~VoteDialog()
{
    delete ui;
}
