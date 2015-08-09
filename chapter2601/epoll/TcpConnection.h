/*********************************************
> File  : TcpConnection.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 07 Jul 2015 08:35:31 PM CST
 ********************************************/

#ifndef __TCPCONNECTION_H__
#define __TCPCONNECTION_H__

#include "NonCopyable.h"
#include<memory.h>
#include<functional>
#include "Socket.h"
#include "SocketIO.h"

namespace wd
{
    class TcpConnection;

    typedef std::shared_ptr<TcpConnection> TcpConnectionPtr;

    class TcpConnection: NonCopyable,
        public std::enable_shared_from_this<TcpConnection>
    {
    public:
        typedef std::function<void(const TcpConnectionPtr&)> TcpConnectionCallback;
        explicit TcpConnection(int sockfd);
        ~TcpConnection();

        //C++11 move semantics
        void setConnectCallback(TcpConnection cb)
        {
            onConnectCallback_ = std::move(cb);
        }
        void setMessageCallback(TcpConnectionCallback cb)
        {
            onMessageCallback_ =  std::move(cb);
        }
        void setCloseCallback(TcpConnectionCallback cb)
        {
            onCloseCallback_ = std::move(cb);
        }
        void handleConnectCallback();
        void handleMessageCallback();
        void handleCloseCallback();

        void shutdown()
        {
            sockfd_.shutdownWrite();
            isShutdownWrite_ = true;
        }

        ssize_t readn(char* buf, size_t count);
        ssize_t writen(const char* buf, size_t count);
        ssize_t readline(char* usrbuf, size_t maxlen);
        std::string receive();
        void send(const std::string &s);

        const InetAddress& getLocalAddr() const
        {
            return localAddr_;
        }
        const InetAddress& getPeerAddr() const
        {
            return peerAddr_;
        }

    private:
        Socket sockfd_;
        SocketIO sockIO_;
        const InetAddress localAddr_;
        const InetAddress peerAddr_;
        bool isShutdownWrite_;

        TcpConnectionCallback onConnectCallback_;
        TcpConnectionCallback onMessageCallback_;
        TcpConnectionCallback onCloseCallback_;
    };
}

#endif
