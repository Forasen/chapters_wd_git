/*********************************************
> File  : Socket.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 11:59:44 PM CST
 ********************************************/

#ifndef __SOCKET_H__
#define __SOCKET_H__

#include "NonCopyable.h"
#include "InetAddress.h"
#define SOMAXCONN 10

namespace wd
{
    class Socket::NonCopyable
    {
    public:
        explicit Socket(int sockfd);
        ~Socket();

        int fd() const 
        {
            return sockfd_;
        }
        void bindAddress(const InetAddress& addr);
        void listen();
        int accept();

        void shutdownWrite();

        void setTcpNoDelay(bool on);
        void setReuseAddr(bool on);
        void setReusePort(bool on);
        void setKeepAlive(bool on);

        static InetAddress getLocalAddr(int sockfd);
        static InetAddress getPeerAddr(int sockfd);

    private:
        const  int sockfd_;
    };
}

#endif
