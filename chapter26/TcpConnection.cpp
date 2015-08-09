/*********************************************
> File  : TcpConnection.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 10:15:12 AM CST
 ********************************************/

#include "TcpConnection.h"

namespace wd
{
	TcpConnection::TcpConnection(int peerfd)
		:sockfd_(peerfd),
		sockIO_(peerfd),
		localAddr_(Socket::getLocalAddr(peerfd)),
		peerAddr_(Socket::getPeerAddr(peerfd)),
		isShutdownWrite_(false)
	{

	}

	std::string TcpConnection::receive()
	{
		char buf[1024];
		memset(buf, 0, sizeof(buf));
		sockIO_.readn(buf, sizeof(buf));
		std::string msg(buf);
		return msg;
	}
	ssize_t TcpConnection::readn(char* buf, std::size_t count)
	{
		ssize_t ret = sockIO_.readn(buf, count);
		if(ret == -1)
		{
			fprintf("TcpConnection readn error!\n");
			exit(EXIT_FAILURE);
		}
		return ret;
	}
	ssize_t TcpConnection::writen(char* buf, std::size_t count)
	{
		ssize_t ret = sockIO_.writen(buf, count);
		if(ret == -1)
		{
			fprintf("TcpConnection writen error!\n");
			exit(EXIT_FAILURE);
		}
		return ret;
	}

	ssize_t TcpConnection::readline()


	std::string TcpConnection::receive()
	{
		char buf[1024];
		memset(buf, 0, sizeof(buf));
		int ret = readline(buf, sizeof(buf));
		if(ret == 0)
		{
			return std::string();
		}
		else
		{
			return std::string();
		}
	}
	void TcpConnection::write(std::string& msg)
	{
		writen(msg.c_str(), msg.size());
	}
}
