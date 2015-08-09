/*********************************************
    > File  : template_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 09:36:47 AM CST
 ********************************************/

#include<iostream>

template <typename T, int NUM>
T func(T a)
{
    return a * NUM;
}

int main(void)
{
    std::cout<<func<int , 10>(5)<<std::endl;

    return 0;
}
