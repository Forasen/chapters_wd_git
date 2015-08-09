/*************************************************************************
    > File Name: setfill2.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 10:28:22 PM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>

int main(void)
{
    std::cout<<"A:"<<std::setw(10)<<42<<'\n'
    <<"B:"<<std::setfill('*')<<std::setw(10)<<42<<std::endl;

    return 0;
}
