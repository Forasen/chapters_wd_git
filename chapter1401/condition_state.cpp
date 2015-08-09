/*********************************************
> File  : condition_state.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 02:01:44 PM CST
********************************************/

#include<iostream>
#include<fstream>

int main(void)
{
    int a;

    if(std::cin)
    while(std::cin>>a)
    {
        //std::cin>>a;
        std::cout<<"good : "<<std::cin.good()<<std::endl;
        std::cout<<"bad : "<<std::cin.bad()<<std::endl;
        std::cout<<"fail: "<<std::cin.fail()<<std::endl;
        std::cout<<"eof : "<<std::cin.eof()<<std::endl;
    }

    if(std::cin.bad() || std::cin.fail())
    {
        std::cout<<"clear the state!"<<std::endl;
        std::cin.clear();
        //continue;
    }
    return 0;
}
