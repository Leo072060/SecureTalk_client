#include "networkManager.h"

#include <QApplication>

NetworkManager *NetworkManager::instance()
{
    static NetworkManager *instance = new NetworkManager(qApp);
    return instance;
}

NetworkManager::NetworkManager(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);

    connect(socket, &QTcpSocket::connected, this, &NetworkManager::connected);

    connect(socket, &QTcpSocket::disconnected, this, &NetworkManager::disconnected);

    connect(socket, &QTcpSocket::readyRead, this, [this]() {
        // Append all available data from the socket to the buffer
        buffer.append(socket->readAll());

        while (true)
        {
            QDataStream in(buffer);
            in.setByteOrder(QDataStream::BigEndian);

            // Check if we have enough data to read MsgType
            if (buffer.size() < sizeof(quint16) + sizeof(quint32)) break;

            // Read the message type
            quint16 typeVal;
            in >> typeVal;
            MsgType msgType = static_cast<MsgType>(typeVal);

            // Read the message length
            quint32 msgLen;
            in >> msgLen;

            // Check if the entire message has been received
            if (buffer.size() < sizeof(quint16) + sizeof(quint32) + msgLen) break; // Wait for more data

            // Extract the message payload
            QByteArray msgData = buffer.mid(sizeof(quint16) + sizeof(quint32), msgLen);

            // Emit a signal with the message type and data
            emit receivedMessage(msgType, msgData);

            // Remove the processed message from the buffer
            buffer = buffer.mid(sizeof(quint16) + sizeof(quint32) + msgLen);
        }
    });
}

void NetworkManager::connectToServer(const QString &host, quint16 port)
{
    if (socket->state() == QAbstractSocket::ConnectedState)
    {
        socket->disconnectFromHost();
    }

    socket->connectToHost(host, port);
}

void NetworkManager::sendMessage(MsgType msgType, const QString &msg)
{
    // Check if the socket exists and is connected
    if (!socket || socket->state() != QAbstractSocket::ConnectedState) return;

    // Ignore empty messages
    if (msg.isEmpty()) return;

    // Ensure the message size does not exceed the maximum uint32 value
    if (msg.size() > UINT32_MAX) return;

    // Prepare a packet to hold the message type, length, and data
    QByteArray packet;

    QDataStream out(&packet, QIODevice::WriteOnly);
    out.setByteOrder(QDataStream::BigEndian);

    // Write the message type and data to the packet
    QByteArray msgData = msg.toUtf8();
    out << static_cast<quint16>(msgType);
    out << static_cast<quint32>(msgData.size());
    packet.append(msgData);

    // Send the packet through the socket
    socket->write(packet);
    socket->flush();

    qDebug() << "Send message:"
             << "Type =" << static_cast<int>(msgType)
             << "Length =" << msg.size()
             << "Content =" << msg;
}

bool NetworkManager::isConnected()
{
    return socket->state() == QAbstractSocket::ConnectedState;
}
