/*********************************************
> File  : EpollPoller.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 08 Jul 2015 07:47:09 AM CST
 ********************************************/

#ifndef __EPOLL_POLLER_H__
#define __EPOLL_POLLER_H__

#include "NonCopyable.h"
#include<vector>
#include<map>
#include<sys/epoll.h>
#include "TcpConnection.h"

namespace wd
{
    class EpollPoller: NonCopyable
    {
    public:
        typedef TcpConnection::TcpConnectionCallback EpollCallback;
        explicit EpollPoller(listenfd);
        ~EpollPoller();

        void loop();
        void unloop();//关闭epoll

        void setConnectCallback(EpollCallback cb)
        {
            onConnectCallback_ = std::move(cb);
        }
        void setMessageCallback(EpollCallback cb)
        {
            onMessageCallback_ = std::move(cb);
        }
        void setCloseCallback(EpollCallback cb)
        {
            onCloseCallback_ = std::move(cb);
        }


    private:
        void waitEpollFd();//循环
        void handleConnection();//处理accept
        void handleMessage(int peerfd);//处理message
    private:
        const int epollfd_;
        const int listenfd_;
        bool isLooping_;
        
        typedef std::vector<struct epoll_event> EventList;
        EventList events_;//保存活跃的fd

        typedef std::map<int, TcpConnectionPtr> ConnectionList;
        ConnectionList lists_;

        EpollCallback onConnectCallback_;
        EpollCallback onMessageCallback_;
        EpollCallback onCloseCallback_;
    };
}


#endif
