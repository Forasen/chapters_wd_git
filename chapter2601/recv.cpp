/*********************************************
> File  : recv.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 07:53:14 AM CST
 ********************************************/

#include<iostream>

int recvn(int sockfd, char* buf, int len)
{
    int recv_curr;
    int recv_sum = 0;
    while(recv_sum < len)
    {
        int recv_curr = recv(sockfd, (char*)buf+recv_sum, len-recv_sum, 0);
        if(recv_curr == -1)
        {
            perror("error: recv!");
            close(sockfd);
            exit(EXIT_FAILURE);
        }
        recv_sum += recv_curr;
    }
    return recv_sum;
}

int main(void)
{
    int recv_sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(recv_sockfd == -1)
    {
        perror("recv: socket!");
        exit(EXIT_FAILURE);
    }
    struct sockaddr_in recv_addr;
}
