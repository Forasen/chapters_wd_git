/*********************************************
> File  : send.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 04 Jul 2015 11:21:24 AM CST
 ********************************************/

#include<iostream>

int sendn(int sockfd, char* buf, int len)
{
    int send_sum = 0;
    int sends;
    while(send_sum < len)
    {
        sends = send(sockfd, (char*)buf+send_sum, len-send_sum, 0);
        if(sends == -1)
        {
            perror("error: send!");
            close(sockfd);
            exit(EXIT_FAILURE);
        }
        send_sum += sends;
    }
    return send_sum;
}

int readn(int sockfd, char* buf, int len)
{
    int recvs;
    int recv_sum = 0;
    while(read_sum < len)
    {
        recvs = recv(sockfd, (char*)buf+recv_sum, len-recv_sum, 0);
        if(recvs == -1)
        {
            perror("error: recv!");
            close(sockfd);
            exit(EXIT_FAILURE);
        }
        recv_sum += recvs;
    }
    return recv_sum;
}

int main(void)
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd == -1)
    {
        perror("error: socket!");
        close(sockfd);
        exit(EXIT_FAILURE);
    }
}
