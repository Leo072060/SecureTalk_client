#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QByteArray>
#include <QCryptographicHash>
#include <QDebug>
#include <QIcon>
#include <QMessageBox>
#include <QString>
#include <qstyle.h>

#include "msg.pb.h"
#include "networkManager.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resize(1200, 800);
    this->setMinimumSize(800, 600);

    this->setWindowIcon(QIcon(":/icon/SecureTalk.png"));
    this->setWindowTitle("SecureTalk");
    // this->setWindowOpacity(0.99);

    connect(NetworkManager::instance(), &NetworkManager::connected, this,
            [=]() { ui->pushButton_link->setIcon(QIcon(":/icon/link.svg")); });

    connect(NetworkManager::instance(), &NetworkManager::disconnected, this,
            [=]() { ui->pushButton_link->setIcon(QIcon(":/icon/link_off.svg")); });

    connect(NetworkManager::instance(), &NetworkManager::receivedMessage, this,
            [](MsgType msgType, const QByteArray &data) {
                qDebug() << "Received message type:" << msgType << "data:" << QString::fromUtf8(data);
            });

    connect(ui->pushButton_link, &QPushButton::clicked, this, [=]() {
        if (!NetworkManager::instance()->isConnected())
        {
            NetworkManager::instance()->connectToServer("127.0.0.1", 13111);
        }
        else
        {
            NetworkManager::instance()->disconnected();
        }
    });
    connect(ui->pushButton_login, &QPushButton::clicked, this, &MainWindow::loginButtonClicked);

    NetworkManager::instance()->connectToServer("127.0.0.1", 7777);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loginButtonClicked()
{
    QString username = ui->lineEdit_username->text();
    if (username.size() == 0)
    {
        QMessageBox::critical(this, "Error", "Username cannot be empty");
        return;
    }
    QString password = ui->lineEdit_password->text();
    if (password.size() == 0) QMessageBox::critical(this, "Error", "Password cannot be empty");

    QByteArray hashed    = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    QString    hashedStr = QString(hashed.toHex());

    // Construct protobuf
    msg::LoginRequest loginReq;
    loginReq.set_username(username.toStdString());
    loginReq.set_password(hashedStr.toStdString());

    // Serialize protobuf to QByteArray
    std::string serialized;
    if (!loginReq.SerializeToString(&serialized))
    {
        QMessageBox::critical(this, "Error", "Failed to serialize login request");
        return;
    }

    // Send protobuf message
    QByteArray msg(serialized.data(), serialized.size());
    NetworkManager::instance()->sendMessage(MsgType::LOGIN_REQUEST, msg);
}
