/*********************************************
> File  : Socket.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 07 Jul 2015 03:52:49 PM CST
 ********************************************/

#include "Socket.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netinet/tcp.h>
#include<netdb.h>

namespace wd
{
    Socket::Socket(int  sockfd)
        :sockfd_(sockfd)
    {
    }
    Socket::~Socket()
    {
        close(sockfd_);
    }
    void Socket::bindAddress(const InetAddress& addr)
    {
        if(-1 == bind(sockfd_, (SA*)&addr, sizeof(SA))
        {
            fprintf(stderr, "error: bind!");
            exit(EXIT_FAILURE);
        }
    }
    void Socket::listen()
    {
        if(-1 == listen(sockfd_, SOMAXCONN))
        {
            fprintf(stderr, "listen address error!\n");
            exit(EXIT_FAILURE);
        }
    }
    int Socket::accept()
    {
        int fd = accept(sockfd_, NULL, NULL);
        if(fd == -1)
        {
            fprintf(stderr, "accept error\n");
            exit(EXIT_FAILURE);
        }
        return fd;
    }
    void Socket::shutdownWrite()
    {
        if(-1 == shutdown(sockfd_, SHUT_WR))
        {
            fprintf(stderr, "error: shutdown!\n");
            exit(EXIT_FAILURE);
        }
    }

    void Socket::setTcpNoDelay(bool on)
    {
        int optval = on ? 1 : 0;
        if(-1 == setsockopt(sockfd_, 
                           IPPROTO_TCP,
                           TCP_NODELAY,
                           &optval,
                           static_cast<socklen_t>(sizeof(optval))))
        {
            fprintf(stderr, "setTcpNoDelay error!\n");
            exit(EXIT_FAILURE);
        }
    }

    void Socket::setReuseAddr(bool on)
    {
        int  ptrval = on ? 1 : 0; if(-1 == setsockopt(sockfd_, 
                            SOL_SOCKET, 
                            SO_REUSEADDR, 
                            &optval, 
                            static_cast<socklen_t>(sizeof(optval))))
        {
            fprintf(stderr, "setReuseAddr!\n");
            exit(EXIT_FAILURE);
        }
    }

    void Socket::setReusePort(bool on)
    {
    #ifdef SO_REUSEPORT
        int optval = on ? 1 : 0;
        int ret = setsockopt(sockfd_, 
                            SOL_SOCKET,
                           SO_REUSEPORT,
                           &optval,
                           static_cast<socklen_t>(sizeof(optval))));
        if(ret < 0)
        {
            fprintf(stderr, "setReusePort error!\n");
            exit(EXIT_FAILURE);
        }
    #else
        if(on)
        {
            fprintf(stderr, "SO_REUSEPORT is not supported!\n");
        }
    #endif
    }
    void Socket::setKeepAlive(bool on)
    {
        int optval = on ? 1 : 0;
        if(-1 == setsockopt(sockfd_,
                           SOL_SOCKET,
                           SO_KEEPALIVE,
                           &optval,
                           static_cast<socklen_t>(sizeof(optval))))
        {
            fprintf(stderr, "setKeepAlive error!\n");
            exit(EXIT_FAILURE);
        }
    }
    InetAddress Socket::getLocalAddr(int sockfd)
    {
        struct sockaddr_in addr;
        socklen_t len = sizeof(addr);
        if(-1 == getsockname(sockfd_, (SA*)&addr, len))
        {
            fprintf(stderr, "getLocalAddr error!\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            return InetAddress(sockfd_);
        }
    }
    InetAddress Socket::getPeerAddr(int sockfd)
    {
        struct sockaddr_in addr;
        socklen_t len = sizeof(addr);
        if(-1 == getpeername(sockfd_, (SA*)&addr, len))
        {
            fprintf(stderr, "getPeerAddr error!\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            return InetAddress(addr);
        }
    }
}
