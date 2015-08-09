/*********************************************
> File  : InetAddress.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 09:02:54 PM CST
 ********************************************/

#ifndef __INET_ADDRESS_H__
#define __INET_ADDRESS_H__

#include<cstring>
#include<netinet/in.h>

typedef struct sockaddr SA;
typedef struct sockaddr_in SAI;

namespace wd
{
    class InetAddress
    {
    public:
        explicit InetAddress(uint16_t port);
        InetAddress(const std::string& ip, const unit16_t port);
        InetAddress(const struct sockaddr_in& addr);

        void setSockAddrInet(const struct sockaddr_in& addr)
        {
            addr_ = addr;
        }
        const struct sockaddr_in* getSockAddrInet() const
        {
            return &addr_;
        }
        std::string toIp() const;
        uint16_t toPort() const;

    private:
        struct sockaddr_in addr_;
    };
}


#endif
