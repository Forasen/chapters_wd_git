/*********************************************
  > File  : SocketIO.cpp
  > Author: NewYork
  > Mail  : 2287794993@qq.com 
  > Time  : Tue 07 Jul 2015 07:45:09 PM CST
 ********************************************/

#include "SocketIO.h"
#include<unistd.h>
#include<errno.h>
#include<sys/socket.h>

namespace wd
{
	ssize_t SocketIO::readn(char* buf, size_t count)
	{
		size_t nleft = count;
		ssize_t nread;
		char* bufp = (char*)buf;

		while(nleft > 0)
		{
			nread = read(sockfd_, bufp, nleft);
			if(nread == -1)
			{
				if(errno == EINTR)
				{
					continue;
				}
				else
				{
					return -1;
				}
			}
			else if(nread == 0)
			{
				break;
			}
			else
			{
				nleft -= nread;
				bufp += nread;
			}
		}
		return (count - nleft);
	}
	ssize_t SocketIO::writen(const char* buf, size_t count)
	{
		size_t nleft = count;
		ssize_t nwrite;
		const char* bufp = (char*)buf;

		while(nleft > 0)
		{
			nwrite = write(sockfd_, bufp, nleft);
			if(nwrite == -1)
			{
				if(errno == EINTR)
				{
					continue;
				}
				else
				{
					return -1;
				}
			}
			else if(nwrite == 0)
			{
				break;
			}
			else
			{
				nleft -= nwrite;
				bufp += nwrite;
			}
		}
		return count - nleft;
	}


	ssize_t SocketIO::recv_peek(char* buf, size_t len)
	{
		int nread;
		do
		{
			nread = recv(sockfd_, buf, len, MSG_PEEK);
		}while(nread==-1 && errno==EINTR);

		return nread;
	}

	ssize_t SocketIO::readline(char* usrbuf, size_t maxlen)
	{
		size_t nleft = maxlen -1;
		char* bufp = usrbuf;
		size_t total = 0;//读取的字节数
		ssize_t nread;
		while(nleft > 0)
		{
			nread = recv_peek(bufp, nleft);
			if(nread <= 0)
			{
				return nread;
			}
			for(ssize_t index=0; index<nread; index++)
			{
				if(bufp[index] == '\n')//找到\n
				{
					size_t nsize = i + 1;
					if(readn(bufp, nsize)!=static_cast<ssize_t>(nsize))
					{
						return -1;
					}
					else
					{
						bufp += nsize;
						total -= nsize;
						*bufp = 0;
						return total;
					}
				}
			}
			if(readn(bufp, nread) != nread)//未找到\n
			{
				return -1;
			}
			bufp += nread;
			total += nread;
			nleft -= nread;
		}
		*bufp = 0;
		return maxlen - 1;
	}
}
