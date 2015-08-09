/*********************************************
> File  : server.c
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 04 Jul 2015 10:07:37 AM CST
 ********************************************/

#include<stdio.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
#include<netinet/in.h>

int main(int argc, char* argv[])
{
    int sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(fd == -1)
    {
        perror("socket error!");
        exit(EXIT_FAILURE);
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port  = hton(9999);
    server_addr.sin_addr.s_addr = inet_addr("169.254.177.30");

    int on = 1;
    if(setsockopt(sock_fd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)) < 0)
    {//SO_REUSEPORT
        perror("setsockopt error!");
        exit(EXIT_FAILURE);
    }
    if(bind(sock_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1)
    {
        perror("bind error!");
        exit(EXIT_FAILURE);
    }

    if(listen(sock_fd, 10) < 10)
    {
        perror("listen error!");
        exit(EXIT_FAILURE);
    }

    int remote_fd = accept(sock_fd, NULL, NULL);
    char buf[1024];
    memset(buf, 0, sizeof(buf));
    int nread = read(remote_fd, buf, sizeof(buf));
    int nwrite = write(remote_fd, buf, strlen(buf));


    return 0;
}

int main(void)
{
    InetAddress inetAddress("");
    Socket socket;

    socket.ready();
    int peerfd = socket.accept();

    SocketIOI 
}
