/*********************************************
> File  : EpollPoller.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 03:03:16 PM CST
 ********************************************/

#ifndef __WD_EpollPoller_H__
#define __WD_EpollPoller_H__

#include<iostream>
#include "NonCopyalbe.h"
#include "TcpConnectionPtr.h"

#include<sys/epoll.h>
#include<vector>
#include<map>

namespace wd
{
	class EpollPoller: NonCopyalbe
	{
	public:
		explicit EpollPoller(int listenfd);
		~EpollPoller();
		void loop();
		void unloop();//关闭epoll
	private:
		void waitEpollFd();
		void handleConnection();
		void handleMessage();
	private:
		const int listenfd_;
		const epollfd_;
		bool isLooping_;

		typedef std::vector<struct epoll_event> EventList;
		EventList events_;//保存活跃的fd

		typedef std::map<int, TcpConnectionPtr> ConnectionList;
		ConnectionList lists_;//实现fd到conn的映射
	}
}

#endif
