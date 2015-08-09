/*********************************************
    > File  : template_overload.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 02:40:01 PM CST
 ********************************************/

#include<iostream>

template <class T>
T MAX(T a, T b);

int MAX(int a, int b)
{
    std::cout<<"int MAX:";
    return a > b ? a : b;
}
template <class T>
T MAX(T a, T b, T c)
{
    std::cout<<"3"<<std::endl;
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int main(void)
{
    int a = 3;
    int b = 5;
    double aa = 3.2;
    double bb = 5.3;
    std::cout<<MAX(a, b)<<std::endl;
    std::cout<<MAX<int>(a, b)<<std::endl;
    std::cout<<MAX(aa, bb)<<std::endl;

    std::cout<<MAX(3, 6, 2)<<std::endl;

    return 0;
}

template <class T>
T MAX(T a, T b)
{
    std::cout<<"T MAX:";
    return a > b ? a : b;
}
