/*********************************************
    > File  : template_func_1.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 09:48:32 AM CST
 ********************************************/

#include<iostream>

template <class T1, class T2, int number>
double func(T1 a, int b, T2 c)
{
    return a + number + b + c;
}

int main(void)
{
    std::cout<<"func<int, int, 1>(2, 3, 4)="<<func<int, int, 1>(2, 3, 4)<<std::endl;

    return 0;
}
