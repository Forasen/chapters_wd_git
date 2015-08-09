/*********************************************
> File  : test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 08:53:45 PM CST
 ********************************************/

#include<iostream>

struct Data
{
    int ival1;
    int ival2;
    //std::string str;
};

int main(void)
{
    Data d = {
        1
    };
    //constexpr int mf = 20;
    int mf = 20;
    //const int mf = 20;
    int a[mf];

    //std::cout<<"ival1 = "<<d.ival1<<", ival2 = "<<d.ival2<<std::endl;

    return 0;
}
