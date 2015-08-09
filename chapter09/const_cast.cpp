/*********************************************
    > File  : const_cast.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 09:54:41 AM CST
 ********************************************/

#include<iostream>
#include<stdio.h>

int func(int& a)
{
    ++a;

    int *pa = &a;
    printf("pa=%x\n", pa);
    return a;
}

int main(void)
{
    const int ival = 10;
    //int ret = func(ival);
    //const_cast作用是移除常量属性，但是对于常量本身而言
    //其值不会被修改，只是用来传递参数的
    int ret = func(const_cast<int&>(ival));

    std::cout<<"ret = "<<ret<<std::endl;
    std::cout<<"ival = "<<ival<<std::endl;

    printf("&iva = %x\n", &ival);

    return 0;
}
