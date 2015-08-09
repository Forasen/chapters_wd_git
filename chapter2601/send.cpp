/*********************************************
> File  : send.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 07:38:53 AM CST
 ********************************************/

#include<iostream>

int sendn(int sockfd, char* buf, int len)
{
    int send_curr = 0;
    int send_sum = 0;
    while(send_sum < len)
    {
        int send_curr = send(sockfd, (char*)buf + send_sum, len-send_sum, 0);
        if(send_curr == -1)
        {
            perror("error: send!");
            close(sockfd);
            exit(EXIT_FAILURE);
        }
        send_sum += send_curr;
    }
    return send_sum;
}

int main(void)
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd == -1)
    {
        perror("error: send socket!");
        exit(EXIT_FAILURE);
    }
    struct sockaddr_in send_addr
}
