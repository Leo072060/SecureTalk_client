/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menumenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0   rgba(255, 255, 255, 200),\n"
"        stop:0.5 rgba(245, 245, 245, 190),\n"
"        stop:1   rgba(230, 230, 230, 180)\n"
"    );\n"
"    border: 1px solid rgba(200, 200, 200, 120);\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background: transparent;\n"
"    color: #333;\n"
"    font-family: \"Helvetica Neue\", \"Segoe UI\", sans-serif;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 6px 12px;\n"
"    margin: 2px 6px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background: rgba(255, 255, 255, 120);\n"
"    color: #007aff;   \n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(100, 270, 80, 18));
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #fdfdfd,\n"
"        stop:1 #e5e5e5\n"
"    );\n"
"    color: #000000;\n"
"    border: 1px solid #c8c8c8;\n"
"    border-radius: 8px;\n"
"    padding: 6px 14px;\n"
"    font-size: 15px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #ffffff,\n"
"        stop:1 #f0f0f0\n"
"    );\n"
"    border: 1px solid #a0a0a0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #dcdcdc,\n"
"        stop:1 #c8c8c8\n"
"    );\n"
"    border: 1px solid #909090;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #f5f5f5;\n"
"    color: #aaaaaa;\n"
"    border: 1px solid #dddddd;\n"
"}\n"
""));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(90, 190, 611, 20));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(90, 230, 611, 20));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 35));
        menumenu = new QMenu(menuBar);
        menumenu->setObjectName("menumenu");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menumenu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
