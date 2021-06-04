#ifndef VOTEDIALOG_H
#define VOTEDIALOG_H

#include <QDialog>

namespace Ui {
class VoteDialog;
}

class VoteDialog : public QDialog
{
    Q_OBJECT//QT界面用

public:
    explicit VoteDialog(QWidget *parent,int playernum);//构造函数，初始化选择窗口
    ~VoteDialog();//默认析构函数

private:
    Ui::VoteDialog *ui;//ui指针

signals:
    void senddata(int data);//选择编号信号

};

#endif // VOTEDIALOG_H
