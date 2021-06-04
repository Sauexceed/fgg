/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *picturelabel;
    QTableWidget *form;
    QLabel *periodlabel;
    QPushButton *speechbutton;
    QTextEdit *Input_textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *daylabel1;
    QLabel *daylabel2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *playerlabel2;
    QLabel *playerlabel1;
    QLCDNumber *lcdNumber;
    QLabel *timerlabel;
    QTextEdit *Output_textEdit;
    QLabel *endtitlelabel;
    QLabel *endtextlabel;
    QToolButton *exitbutton;
    QToolButton *restartbutton;
    QLabel *tablelabel;
    QLabel *speechtextlabel;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *daylabel;
    QLabel *daylabel_c;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 780);
        MainWindow->setMinimumSize(QSize(1200, 780));
        MainWindow->setMaximumSize(QSize(1200, 780));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/titleicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        picturelabel = new QLabel(centralWidget);
        picturelabel->setObjectName(QStringLiteral("picturelabel"));
        picturelabel->setGeometry(QRect(440, 140, 271, 381));
        form = new QTableWidget(centralWidget);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(800, 170, 391, 411));
        form->setStyleSheet(QString::fromUtf8(" \n"
" \n"
"color: rgb(255, 11, 137);\n"
"font: 12pt \"\346\245\267\344\275\223\";"));
        periodlabel = new QLabel(centralWidget);
        periodlabel->setObjectName(QStringLiteral("periodlabel"));
        periodlabel->setGeometry(QRect(450, 30, 291, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        periodlabel->setFont(font);
        periodlabel->setStyleSheet(QLatin1String(" \n"
"color: rgb(255, 12, 97);\n"
"font: 75 24pt \"Agency FB\";"));
        speechbutton = new QPushButton(centralWidget);
        speechbutton->setObjectName(QStringLiteral("speechbutton"));
        speechbutton->setGeometry(QRect(770, 660, 75, 81));
        speechbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/speechbutton.png);"));
        Input_textEdit = new QTextEdit(centralWidget);
        Input_textEdit->setObjectName(QStringLiteral("Input_textEdit"));
        Input_textEdit->setGeometry(QRect(400, 580, 361, 161));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Input_textEdit->setFont(font1);
        Input_textEdit->setStyleSheet(QString::fromUtf8(" \n"
"border-image: url(:/image/outputback.jpg);\n"
" \n"
" \n"
"color: rgb(255, 85, 0);\n"
"font: 12pt \"\346\226\260\345\256\213\344\275\223\";"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 252, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        daylabel1 = new QLabel(layoutWidget);
        daylabel1->setObjectName(QStringLiteral("daylabel1"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font2.setPointSize(20);
        daylabel1->setFont(font2);
        daylabel1->setStyleSheet(QStringLiteral("color: rgb(0, 255, 255);"));

        horizontalLayout->addWidget(daylabel1);

        daylabel2 = new QLabel(layoutWidget);
        daylabel2->setObjectName(QStringLiteral("daylabel2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Palatino Linotype"));
        font3.setPointSize(20);
        daylabel2->setFont(font3);
        daylabel2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));

        horizontalLayout->addWidget(daylabel2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(510, 90, 124, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        playerlabel2 = new QLabel(layoutWidget1);
        playerlabel2->setObjectName(QStringLiteral("playerlabel2"));
        QFont font4;
        font4.setFamily(QStringLiteral("Lato"));
        font4.setPointSize(20);
        playerlabel2->setFont(font4);
        playerlabel2->setStyleSheet(QStringLiteral("color: rgb(0, 255, 127);"));

        horizontalLayout_2->addWidget(playerlabel2);

        playerlabel1 = new QLabel(layoutWidget1);
        playerlabel1->setObjectName(QStringLiteral("playerlabel1"));
        playerlabel1->setFont(font2);
        playerlabel1->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        horizontalLayout_2->addWidget(playerlabel1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(700, 550, 61, 23));
        lcdNumber->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        timerlabel = new QLabel(centralWidget);
        timerlabel->setObjectName(QStringLiteral("timerlabel"));
        timerlabel->setGeometry(QRect(590, 550, 101, 21));
        timerlabel->setStyleSheet(QLatin1String(" \n"
"font: 75 12pt \"Agency FB\";\n"
"color: rgb(170, 255, 255);"));
        Output_textEdit = new QTextEdit(centralWidget);
        Output_textEdit->setObjectName(QStringLiteral("Output_textEdit"));
        Output_textEdit->setGeometry(QRect(20, 170, 281, 421));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(14);
        Output_textEdit->setFont(font5);
        Output_textEdit->setStyleSheet(QString::fromUtf8(" \n"
"\n"
" \n"
"color: rgb(81, 38, 85);\n"
"font: 14pt \"\346\245\267\344\275\223\";"));
        Output_textEdit->setReadOnly(true);
        endtitlelabel = new QLabel(centralWidget);
        endtitlelabel->setObjectName(QStringLiteral("endtitlelabel"));
        endtitlelabel->setGeometry(QRect(460, 130, 261, 121));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font6.setPointSize(48);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        endtitlelabel->setFont(font6);
        endtitlelabel->setStyleSheet(QString::fromUtf8(" \n"
"font: 48pt \"\346\245\267\344\275\223\";\n"
"color: rgb(226, 62, 255);"));
        endtextlabel = new QLabel(centralWidget);
        endtextlabel->setObjectName(QStringLiteral("endtextlabel"));
        endtextlabel->setGeometry(QRect(430, 240, 311, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(36);
        endtextlabel->setFont(font7);
        endtextlabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        exitbutton = new QToolButton(centralWidget);
        exitbutton->setObjectName(QStringLiteral("exitbutton"));
        exitbutton->setGeometry(QRect(650, 430, 101, 101));
        exitbutton->setStyleSheet(QLatin1String(" \n"
"border-image: url(:/image/exit.png);\n"
"border-image: url(:/image/exit.png);"));
        restartbutton = new QToolButton(centralWidget);
        restartbutton->setObjectName(QStringLiteral("restartbutton"));
        restartbutton->setGeometry(QRect(390, 430, 111, 111));
        restartbutton->setStyleSheet(QLatin1String(" \n"
"border-image: url(:/image/restart.jpg);"));
        tablelabel = new QLabel(centralWidget);
        tablelabel->setObjectName(QStringLiteral("tablelabel"));
        tablelabel->setGeometry(QRect(800, 130, 211, 51));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font8.setPointSize(28);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        tablelabel->setFont(font8);
        tablelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 28pt \"\351\232\266\344\271\246\";"));
        speechtextlabel = new QLabel(centralWidget);
        speechtextlabel->setObjectName(QStringLiteral("speechtextlabel"));
        speechtextlabel->setGeometry(QRect(20, 130, 151, 41));
        speechtextlabel->setFont(font8);
        speechtextlabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 28pt \"\351\232\266\344\271\246\";"));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 50, 204, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        daylabel = new QLabel(layoutWidget2);
        daylabel->setObjectName(QStringLiteral("daylabel"));
        daylabel->setFont(font2);
        daylabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(daylabel);

        daylabel_c = new QLabel(layoutWidget2);
        daylabel_c->setObjectName(QStringLiteral("daylabel_c"));
        daylabel_c->setFont(font2);
        daylabel_c->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(daylabel_c);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        picturelabel->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        form->raise();
        periodlabel->raise();
        speechbutton->raise();
        Input_textEdit->raise();
        lcdNumber->raise();
        timerlabel->raise();
        Output_textEdit->raise();
        endtitlelabel->raise();
        endtextlabel->raise();
        exitbutton->raise();
        restartbutton->raise();
        tablelabel->raise();
        speechtextlabel->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\272\242\351\273\221\345\244\234\346\263\225\345\256\230", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        picturelabel->setText(QString());
        periodlabel->setText(QApplication::translate("MainWindow", "\346\235\221\351\225\277\351\200\211\344\270\276\345\217\221\350\250\200\351\230\266\346\256\265", Q_NULLPTR));
        speechbutton->setText(QString());
        daylabel1->setText(QApplication::translate("MainWindow", "\345\244\251\346\225\260\357\274\232", Q_NULLPTR));
        daylabel2->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        playerlabel2->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        playerlabel1->setText(QApplication::translate("MainWindow", "\345\217\267\347\216\251\345\256\266", Q_NULLPTR));
        timerlabel->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\227\266\351\227\264", Q_NULLPTR));
        endtitlelabel->setText(QApplication::translate("MainWindow", "\346\270\270\346\210\217\347\273\223\346\235\237", Q_NULLPTR));
        endtextlabel->setText(QString());
        exitbutton->setText(QString());
        restartbutton->setText(QString());
        tablelabel->setText(QApplication::translate("MainWindow", "\347\216\251\345\256\266\344\277\241\346\201\257\350\241\250", Q_NULLPTR));
        speechtextlabel->setText(QApplication::translate("MainWindow", "\345\217\221\350\250\200\345\206\205\345\256\271", Q_NULLPTR));
        daylabel->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\230\266\346\256\265\357\274\232", Q_NULLPTR));
        daylabel_c->setText(QApplication::translate("MainWindow", "\347\231\275\345\244\251", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
