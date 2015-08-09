/*********************************************
> File  : Epoller.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 02:51:57 PM CST
 ********************************************/

#include "Epoller.h"

namespace 
{
    int createEpollfd()
    {
        int  epollfd = ::epoll_createl(0);
    }
    void addEpollReadfd(int epollfd, int fd)
    {
        struct epoll_event ev;
        ev.data.fd = fd;
        ev.events = EPOLLIN;
        if(-1 == epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev))
        {
            perror("add epoll fd error!");
            exit(EXIT_FAILURE);
        }
    }
    void delEpollReadfd(int epollfd, int fd)
    {
        struct epoll_event ev;
        ev.data.fd = fd;
        if(-1 == epoll_ctl(epollfd, EPOLL_CTL_DEL, fd, &ev))
        {
            perror("del epoll fd error!");
            exit(EXIT_FAILURE);
        }
    }
    int acceptConnFd(int listenfd)
    {
        int  peerfd = std::accept(listenfd, NULL, NULL);
        if(perrorfd == -1)
        {
            perror("accept error!")l
            exit(EXIT_FAILURE);
        }
        return peerfd;
    }
}
namespace wd
{
    EpollPoller::EpollPoller(int listenfd)
        : listenfd_(listenfd),
        epollfd_(createEpollfd),
        isLooping_(false),
        events_(1024)
    {
        addEpollReadfd(epollfd_, listenfd_);
    }
    void EpollPoller::loop()
    {
        isLooping_ = true;
        while(isLooping_)
        {
            waitEpollFd();
        }
    }
    void EpollPoller::waitEpollFd()
    {
        int nready;
        do
        {
            nready = std::epoll_wait(epollfd_,
                                    &*events_.begin(),
                                    static_cast<int>(events.size()), 5000)
        }while(nready==-1 && errno==EINTR);
        if(nready == -1)
        {
            perror("epoll_wait error1")；
            exit(EXIT_FAILURE);
        }
        else(nready == 0)
        {
            printf("epoll_wait timeout\n");
        }
        else
        {
            if(nready == static_cast<int>(events_.size()))
            {
                events_.resize(events_.size() * 2);
            }
            for(int index=0; index!=nready; index++)
            {
                if(events_[index].data.fd == listenfd_)
                {
                    if(events_[index].events & EPOLLIN)
                    {
                        handleConnection();
                    }
                }
                else
                {
                    if(events_[index].events & EPOLLIN)
                    {
                        handleMessage(events[index].data.fd);
                    }
                }
            }
        }
    }
    
    void EpollPoller::handleConnection()
    {
        int peerfd = acceptConnFd(listenfd_);
        addEpollReadfd(epollfd_, peerfd);
        std::pair<ConnectionList::iterator, bool> ret;

        TcpConnectionPtr conn(new TcpConnectionPtr(peeffd));

        ret = lists_.insert(std::make_pair(peerfd, conn));
        assert(ret.second == true);
    }
}
