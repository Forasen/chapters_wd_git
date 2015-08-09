/*********************************************
> File  : connection_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 09:36:35 AM CST
 ********************************************/

#include<iostream>
#include<memory>
using namespace std;

struct connection{
};
struct destination{
};
connection connect(destination* d)
{
    std::cout<<"打开连接"<<std::endl;
    return connection();
}
void disconnect(connection& c)
{
    std::cout<<"断开链接"<<std::endl;
}
void end_connection(connection* c)
{
    disconnect(c);
}

void f(destination c)
{
    
}
