/*********************************************
> File  : InetAddress.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 09:18:06 PM CST
 ********************************************/

#include "InetAddress.h"
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>

namespace wd
{
    static_assert(sizeof(InetAddress) == sizeof(struct sockaddr_in), "InetAddress Error!");

    InetAddress::InetAddress(uint16_t port)
    {
        memset(&addr_, 0, sizeof(addr_));
        addr_.sin_family = AF_INET;
        addr_.sin_port = htons(port);
        addr_.sin_add.s_addr = INADDR_ANY;
    }
    InetAddress::InetAddress(const std::string& ip, const uint16_t port)
    {
        memset(&addr_, 0, sizeof(addr_));
        addr_.sin_family = AF_INET;
        addr_.sin_addr.s_addr = htohl(atoi(ip.c_str()));
    }
    InetAddress::InetAddress(const struct sockaddr_in& addr)
        :addr_(addr)
    {
          
    }
    
    std::string toIp() const
    {
        return inet_ntoa(addr_.sin_addr);
    }
    uint16_t toPort() const
    {
        return ntohs(addr_.sin_port);
    }
}
