/*********************************************
> File  : SocketIO.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 07 Jul 2015 07:29:59 PM CST
 ********************************************/

#ifndef __SOCKETIO_H__
#define __SOCKETIO_H__

#include "NonCopyable.h"
#include<sys/types.h>

namespace wd
{
    class SocketIO: NonCopyable
    {
    public:
        explicit SockIO(int sockfd)
            :sockfd_(sockfd)
        {

        }
        ssize_t readn(char* buf, size_t count);
        ssize_t writen(const char* buf, size_t count);
        ssize_t readline(char* usrbuf, size_t maxlen);

    private:
        ssize_t recv_peek(char* buf, size_t len);

    private:
        const int sockfd_;
    };
}

#endif
