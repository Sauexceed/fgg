/********************************************************************************
** Form generated from reading UI file 'votewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTEWINDOW_H
#define UI_VOTEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoteDialog
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QDialog *VoteDialog)
    {
        if (VoteDialog->objectName().isEmpty())
            VoteDialog->setObjectName(QStringLiteral("VoteDialog"));
        VoteDialog->resize(300, 140);
        VoteDialog->setMinimumSize(QSize(300, 140));
        VoteDialog->setMaximumSize(QSize(300, 140));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/titleicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VoteDialog->setWindowIcon(icon);
        pushButton = new QPushButton(VoteDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 100, 75, 23));
        widget = new QWidget(VoteDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 50, 180, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);

        horizontalLayout->addWidget(spinBox);


        retranslateUi(VoteDialog);

        QMetaObject::connectSlotsByName(VoteDialog);
    } // setupUi

    void retranslateUi(QDialog *VoteDialog)
    {
        VoteDialog->setWindowTitle(QApplication::translate("VoteDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VoteDialog", "\347\241\256\350\256\244", Q_NULLPTR));
        label->setText(QApplication::translate("VoteDialog", "\350\257\267\351\200\211\346\213\251\344\275\240\346\203\263\346\212\225\347\245\250\347\232\204\347\216\251\345\256\266\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VoteDialog: public Ui_VoteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTEWINDOW_H
