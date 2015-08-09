/*********************************************
> File  : connection.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 09:21:21 AM CST
 ********************************************/

#include<iostream>
#include<memory>
using namespace std;

struct destinatino{

};
struct connection{

};

connection connect(destinatino* pd)
{
    std::cout<<"打开连接"<<std::endl;
    return connection();
}

void disconnect(connection c)
{
    std::cout<<"关闭链接"<<std::endl;
}

//未使用shared_ptr<connection>的版本
void f(destinatino& d)
{
    std::cout<<"直接管理connect"<<std::endl;
    connection c = connect(&d);
    std::cout<<std::endl;
}

void end_connection(connection* p)
{
    disconnect(*p);
}
void f1(destinatino& d)
{
    std::cout<<"使用shared_ptr<connection>管理内存"<<std::endl;
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
    
    std::cout<<std::endl;
}

int main(void)
{
    destinatino d;
    std::cout<<"+++++++++++++++f(d)+++++++++++++++"<<std::endl;
    f(d);
    std::cout<<"+++++++++++++++f(d)+++++++++++++++"<<std::endl;
    f1(d);

    return 0;
}
