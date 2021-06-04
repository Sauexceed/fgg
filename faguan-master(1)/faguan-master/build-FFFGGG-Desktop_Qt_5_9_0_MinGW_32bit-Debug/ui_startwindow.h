/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QToolButton *StartButton;
    QLabel *titlelabel;
    QLabel *picturelabel;
    QToolButton *helpButton;
    QToolButton *closeButton;
    QLabel *endTextLabel;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName(QStringLiteral("StartWindow"));
        StartWindow->resize(1200, 780);
        StartWindow->setMinimumSize(QSize(1200, 780));
        StartWindow->setMaximumSize(QSize(1200, 780));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/titleicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        StartWindow->setWindowIcon(icon);
        actionExit = new QAction(StartWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(StartWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StartButton = new QToolButton(centralWidget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setEnabled(true);
        StartButton->setGeometry(QRect(970, 560, 111, 121));
        StartButton->setStyleSheet(QLatin1String("border-image: url(:/image/playbutton.jpg);\n"
"border-image: url(:/image/playbutton.jpg);"));
        titlelabel = new QLabel(centralWidget);
        titlelabel->setObjectName(QStringLiteral("titlelabel"));
        titlelabel->setGeometry(QRect(110, 70, 511, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(72);
        titlelabel->setFont(font);
        titlelabel->setCursor(QCursor(Qt::ArrowCursor));
        titlelabel->setAutoFillBackground(false);
        titlelabel->setStyleSheet(QStringLiteral("color: rgb(0, 255, 255);"));
        titlelabel->setFrameShadow(QFrame::Raised);
        titlelabel->setTextFormat(Qt::RichText);
        titlelabel->setScaledContents(false);
        titlelabel->setAlignment(Qt::AlignCenter);
        titlelabel->setWordWrap(false);
        picturelabel = new QLabel(centralWidget);
        picturelabel->setObjectName(QStringLiteral("picturelabel"));
        picturelabel->setGeometry(QRect(460, 140, 271, 381));
        helpButton = new QToolButton(centralWidget);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setGeometry(QRect(1100, 670, 81, 81));
        helpButton->setStyleSheet(QLatin1String("border-image: url(:/image/exhelpbutton.jpg);\n"
"border-image: url(:/image/exhelpbutton.jpg);"));
        closeButton = new QToolButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(1100, 670, 81, 81));
        closeButton->setStyleSheet(QLatin1String(" \n"
"border-image: url(:/image/1_exitbutton.jpg);\n"
"border-image: url(:/image/1_exitbutton.jpg);"));
        endTextLabel = new QLabel(centralWidget);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setGeometry(QRect(430, 240, 311, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(36);
        endTextLabel->setFont(font1);
        endTextLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        StartWindow->setCentralWidget(centralWidget);
        titlelabel->raise();
        picturelabel->raise();
        StartButton->raise();
        helpButton->raise();
        closeButton->raise();
        endTextLabel->raise();
        menuBar = new QMenuBar(StartWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        StartWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionExit);

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QApplication::translate("StartWindow", "\347\272\242\351\273\221\345\244\234\346\263\225\345\256\230", Q_NULLPTR));
        actionExit->setText(QApplication::translate("StartWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        StartButton->setText(QString());
        titlelabel->setText(QApplication::translate("StartWindow", "\347\272\242\351\273\221\345\244\234\346\263\225\345\256\230", Q_NULLPTR));
        picturelabel->setText(QString());
        helpButton->setText(QString());
        closeButton->setText(QString());
        endTextLabel->setText(QString());
        menu->setTitle(QApplication::translate("StartWindow", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
