/*********************************************
> File  : client.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 07:17:45 PM CST
 ********************************************/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define ERR_EXIT(m)\
    do\
    {\
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)
void do_service(int sockfd);

int main(int argc, char* argv[])
{
    int peerfd = socket(AF_INET, SOCK_STREAM, 0);
    if(peerfd == -1)
    {
        ERR_EXIT("socket");
    }
    struct sockaddr_in client_addr;
    memset(client_addr, 0, sizeo(client_addr));
    client_addr.sin_family = AF_INET;
    client_addr.sin_addr.s_addr = inet_addr("192.168.175.128");
    client_addr.sin_port = htons(9999);
    socklen_t sock_len = sizeof(client_addr);
    if(-1 == connect(sockdf, (struct sockaddr&)*client_addr, sock_len))
    {
        ERR_EXIT("connect");
    }
    do_service(peerfd);
}

void do_service(int sockfd)
{
    char recv_buf[1024];
    memset(recv_buf, 0, sizeof(recv_buf));
    char send_buf[1024];
    memset(send_buf, 0, sizeof(send_buf));
    while(1)
    {
        fgets(send_buf, sizeof(send_buf), stdin);
        write(sockfd, send_buf, strlen(send_buf));

        int nread = read(sockfd, recv_buf, sizeof(recv_buf));
        if(nread == -1)
        {
            if(errno == EINTR)
            {
                continue;
            }
            else
            {
                ERR_EXIT("read");
            }
        }
        else if(nread == 0)
        {
            std::cout<<"server close!"<<std::endl;
            close(sockfd);
            exit(EXIT_FAILURE);
        }
        else
        {
            std::cout<<"receive message : "<<recv_buf<<std::endl;
        }
        memset(send_buf, 0, sizeof(send_buf));
        memset(recv_buf, 0, sizeof(recv_buf));
    }
}
