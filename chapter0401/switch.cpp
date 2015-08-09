/*************************************************************************
    > File Name: switch.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sat 13 Jun 2015 11:17:21 PM CST
 ************************************************************************/

#include<iostream>

void swap(int &val1, int &val2)
{
    int tmp = val1;
    val1 = val2;
    val2 = tmp;
}

int main(void)
{
    std::cout<<"Enter two numbers:"<<std::endl;
    int i, j;
    std::cin>>i>>j;
    swap(i, j);
    std::cout<<"result:"<<i<<", "<<j<<std::endl;

    argument//实参
    parameter//形参

    return 0;
}
