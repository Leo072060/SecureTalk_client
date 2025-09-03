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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <interactiveWidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    InteractiveWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_link;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_settings;
    QPushButton *pushButton_help;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    InteractiveWidget *widget_2;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_sign_up;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(748, 526);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0   rgba(15, 15, 20, 255),\n"
"        stop:0.5 rgba(25, 25, 35, 255),\n"
"        stop:1   rgba(10, 10, 15, 255)\n"
"    );\n"
"	padding: 0px 0px;\n"
"	margin: 0px 0px;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        widget = new InteractiveWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 55));
        widget->setMaximumSize(QSize(16777215, 55));
        widget->setStyleSheet(QString::fromUtf8("/* ------------------- \347\256\200\347\272\246\346\232\227\350\211\262\345\234\206\350\247\222\346\214\211\351\222\256\357\274\210\345\205\250\345\261\200 QPushButton\357\274\211 ------------------- */\n"
"QPushButton {\n"
"    background-color: rgba(50, 50, 50, 220);  /* \346\267\261\347\201\260\346\232\227\350\211\262\345\272\225 */\n"
"    color: rgba(220, 220, 220, 255);         /* \347\201\260\347\231\275\346\226\207\345\255\227 */\n"
"    border: 1px solid rgba(80, 80, 80, 180); /* \346\232\227\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 22px;                       /* \345\234\206\350\247\222 */\n"
"    padding: 6px 20px;                        /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"QPushButton:hover {\n"
"    background-color: rgba(70, 70, 70, 230);\n"
"    border: 1px solid rgba(120, 120, 120, 200);\n"
"}\n"
"\n"
"/* \351\274\240\346"
                        "\240\207\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(90, 90, 90, 240);\n"
"    border: 1px solid rgba(150, 150, 150, 220);\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QPushButton:disabled {\n"
"    background-color: rgba(40, 40, 40, 180);\n"
"    color: rgba(120, 120, 120, 150);\n"
"    border: 1px solid rgba(40, 40, 40, 120);\n"
"}\n"
""));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_link = new QPushButton(widget);
        pushButton_link->setObjectName("pushButton_link");
        pushButton_link->setMinimumSize(QSize(44, 44));
        pushButton_link->setMaximumSize(QSize(44, 44));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/link_off.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_link->setIcon(icon);
        pushButton_link->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_link);

        horizontalSpacer_2 = new QSpacerItem(496, 19, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_settings = new QPushButton(widget);
        pushButton_settings->setObjectName("pushButton_settings");
        pushButton_settings->setMinimumSize(QSize(44, 44));
        pushButton_settings->setMaximumSize(QSize(44, 44));
        pushButton_settings->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/settings.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_settings->setIcon(icon1);
        pushButton_settings->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_settings);

        pushButton_help = new QPushButton(widget);
        pushButton_help->setObjectName("pushButton_help");
        pushButton_help->setMinimumSize(QSize(44, 44));
        pushButton_help->setMaximumSize(QSize(44, 44));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/help.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_help->setIcon(icon2);
        pushButton_help->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_help);


        formLayout->setWidget(0, QFormLayout::SpanningRole, widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 400));
        widget_3->setStyleSheet(QString::fromUtf8("/* ------------------- \347\256\200\347\272\246\346\232\227\350\211\262\345\234\206\350\247\222\346\214\211\351\222\256\357\274\210\345\205\250\345\261\200 QPushButton\357\274\211 ------------------- */\n"
"QPushButton {\n"
"    background-color: rgba(50, 50, 50, 220);  /* \346\267\261\347\201\260\346\232\227\350\211\262\345\272\225 */\n"
"    color: rgba(220, 220, 220, 255);         /* \347\201\260\347\231\275\346\226\207\345\255\227 */\n"
"    border: 1px solid rgba(80, 80, 80, 180); /* \346\232\227\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;                       /* \345\234\206\350\247\222 */\n"
"    padding: 6px 20px;                        /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"QPushButton:hover {\n"
"    background-color: rgba(70, 70, 70, 230);\n"
"    border: 1px solid rgba(120, 120, 120, 200);\n"
"}\n"
"\n"
"/* \351\274\240\346"
                        "\240\207\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(90, 90, 90, 240);\n"
"    border: 1px solid rgba(150, 150, 150, 220);\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QPushButton:disabled {\n"
"    background-color: rgba(40, 40, 40, 180);\n"
"    color: rgba(120, 120, 120, 150);\n"
"    border: 1px solid rgba(40, 40, 40, 120);\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_2 = new InteractiveWidget(widget_3);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(240, 350));
        widget_2->setMaximumSize(QSize(240, 350));
        widget_2->setStyleSheet(QString::fromUtf8("/* \345\237\272\347\241\200\345\244\226\350\247\202 */\n"
"QLineEdit {\n"
"    background: #14161A;\n"
"    color: #E6E9EF;\n"
"    border: 1px solid #2A2F3A;\n"
"    border-radius: 8px;\n"
"    padding: 6px 10px;           /* \345\267\246\345\217\263\345\206\205\350\276\271\350\267\235 */\n"
"    min-height: 30px;\n"
"    selection-background-color: #2F6FED;  /* \351\200\211\344\270\255\346\226\207\346\234\254\345\272\225\350\211\262 */\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"/* \345\215\240\344\275\215\347\254\246\351\242\234\350\211\262\357\274\210Qt 5.12+ \346\224\257\346\214\201 ::placeholder\357\274\211*/\n"
"QLineEdit::placeholder {\n"
"    color: #6B7380;\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\345\276\256\344\272\256 */\n"
"QLineEdit:hover {\n"
"    border-color: #3A4250;\n"
"}\n"
"\n"
"/* \350\201\232\347\204\246\351\253\230\344\272\256\357\274\210\344\270\215\345\210\272\347\234\274\357\274\211*/\n"
"QLineEdit:focus {\n"
"    border-color: #4C8DFF;\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250"
                        " */\n"
"QLineEdit:disabled {\n"
"    background: #0F1114;\n"
"    color: #6B7380;\n"
"    border-color: #1F242C;\n"
"}\n"
"\n"
"/* \345\206\205\347\275\256\346\270\205\351\231\244\346\214\211\351\222\256\357\274\210Qt 5.2+\357\274\211*/\n"
"QLineEdit::clear-button {\n"
"    subcontrol-origin: content;\n"
"    subcontrol-position: center right;\n"
"    padding-right: 6px;  /* \344\270\216\345\217\263\350\276\271\350\267\235\347\232\204\351\227\264\351\232\224 */\n"
"}\n"
""));
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setGeometry(QRect(96, 22, 48, 48));
        label->setMaximumSize(QSize(50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/account.svg")));
        lineEdit_username = new QLineEdit(widget_2);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(35, 92, 170, 44));
        lineEdit_username->setMinimumSize(QSize(170, 44));
        lineEdit_username->setMaximumSize(QSize(170, 16777215));
        QFont font;
        font.setPointSize(14);
        lineEdit_username->setFont(font);
        lineEdit_username->setMaxLength(15);
        lineEdit_password = new QLineEdit(widget_2);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(35, 156, 170, 44));
        lineEdit_password->setMinimumSize(QSize(170, 44));
        lineEdit_password->setMaximumSize(QSize(170, 16777215));
        lineEdit_password->setFont(font);
        lineEdit_password->setMaxLength(15);
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_login = new QPushButton(widget_2);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(79, 220, 100, 30));
        pushButton_login->setMinimumSize(QSize(0, 0));
        pushButton_login->setMaximumSize(QSize(100, 16777215));
        pushButton_login->setStyleSheet(QString::fromUtf8(""));
        pushButton_sign_up = new QPushButton(widget_2);
        pushButton_sign_up->setObjectName("pushButton_sign_up");
        pushButton_sign_up->setGeometry(QRect(71, 295, 98, 32));
        pushButton_sign_up->setMaximumSize(QSize(100, 16777215));
        pushButton_sign_up->setStyleSheet(QString::fromUtf8(""));
        line_2 = new QFrame(widget_2);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(6, 272, 228, 16));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(widget_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        formLayout->setWidget(4, QFormLayout::FieldRole, widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(2, QFormLayout::FieldRole, line);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_link->setText(QString());
        pushButton_settings->setText(QString());
        pushButton_help->setText(QString());
        label->setText(QString());
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "username", nullptr));
        lineEdit_password->setInputMask(QString());
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_sign_up->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
