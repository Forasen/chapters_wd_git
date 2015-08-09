/*************************************************************************
    > File Name: setfill.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 10:24:30 PM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>

int main(void)
{
    std::cout<<"defalut fill:"<<std::setw(10)<<42<<'\n'
    <<"setfill('*'):"<<std::setfill('*')
    <<std::setw(10)<<42<<'\n';

    return 0;
}
