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
            [=](MsgType msgType, const QByteArray &data) {
                qDebug() << "Received message type:" << msgType << "data:" << QString::fromUtf8(data);
                if (msgType == HEARTBEAT)
                {
                    NetworkManager::instance()->sendMessage(MsgType::HEARTBEAT, QString("pong"));
                }
                else if (msgType == LOGIN_RESPONSE)
                {
                    qDebug()<<"aaa\n";
                    msg::LoginResponse loginRsp;
                    loginRsp.ParseFromArray(data.constData(), data.size());

                    if (loginRsp.state() == msg::LoginResponse::StateCode::LoginResponse_StateCode_SUCCESS)
                    {
                        QMessageBox::information(this, "Info", "登录成功");
                        // 这里可以执行登录成功后的逻辑，比如跳转界面
                    }
                    else if (loginRsp.state() == msg::LoginResponse::StateCode::LoginResponse_StateCode_USER_NOT_FOUND)
                    {
                        QMessageBox::warning(this, "Warning", "用户不存在");
                        // 可以清空用户名输入框或提示重新输入
                    }
                    else if (loginRsp.state() ==
                             msg::LoginResponse::StateCode::LoginResponse_StateCode_INVALID_CREDENTIALS)
                    {
                        QMessageBox::critical(this, "Error", "用户名或密码错误");
                        // 可以清空密码输入框
                    }
                    else
                    {
                        QMessageBox::information(this, "Info", "未知错误");
                        // 处理其他未定义状态
                    }
                }
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

    // Construct protobuf
    msg::LoginRequest loginReq;
    loginReq.set_username(username.toStdString());
    loginReq.set_password(password.toStdString());

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
