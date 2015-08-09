/*********************************************
> File  : EpollPoller.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 08 Jul 2015 07:56:34 AM CST
 ********************************************/

#include "EpollPoller.h"
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<sys/epoll.h>
#include<unistd.h>
#include<errno.h>
#include<assert.h>

namespace
{
	int createEpollFd()
	{
		int epollfd = epoll_create1(0);
		if(epollfd == -1)
		{
			perror("create epoll fd error!");
			exit(EXIT_FAILURE);
		}
		return epollfd;
	}
	void addEpollReadFd(int epollfd, int fd)
	{
		struct epoll_event ev;
        ev.data.fd = fd;
        ev.events = EPOLLIN;
        if(epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev) == -1)
        {
            perror("add epoll fd error!\n");
            exit(EXIT_FAILURE);
        }
        
	}
}
