/*********************************************
> File  : TcpConnection.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 10:08:07 AM CST
 ********************************************/

#ifndef __WD_TCPCONNECTION_H__
#define __WD_TCPCONNECTION_H__

#include<iostream>
#include<memory>
#include "Socket.h"
#include "SocketIO.h"

class TcpConnection;
typedef std::shared_ptr<TcpConnection> TcpConnection
class TcpConnection:public NonCopyable,
                    std::enable_shared_from_this<TcpConnection>
{
public:
    explicit TcpConnection(int peerfd);
    std::string receive();
    void send(std::string &msg);
private:
    ssize_t readn(char* buf, std::size_t count);
    ssize_t writen(char* buf, std::size_t count);
    ssize_t readline(char* buf, std::size_t maxlen);
private:
    Socket sockfd_;
    SocketIO sockIO_;
    const InetAddress localAddr_;
    const InetAddress peerAddr_;
    bool isShutdownWrite_;//是否关闭写端
};


#endif
