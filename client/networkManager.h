#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QObject>
#include <QTcpSocket>

#include "networkMsg.h"

class NetworkManager : public QObject
{
    Q_OBJECT

  private:
    explicit NetworkManager(QObject *parent = nullptr);

  public:
    static NetworkManager *instance();

    void connectToServer(const QString &host, quint16 port);
    void sendMessage(MsgType msgType, const QString &msg);
    bool isConnected();

  signals:
    void connected();
    void disconnected();
    void receivedMessage(MsgType &msgType, const QByteArray &data);

  private:
    QTcpSocket *socket = nullptr;
    QByteArray  buffer;
};

#endif // NETWORKMANAGER_H
