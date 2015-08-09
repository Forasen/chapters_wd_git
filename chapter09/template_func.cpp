/*********************************************
    > File  : template_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 05:38:23 PM CST
 ********************************************/

#include<iostream>

//template参数列表的参数只能是类型参数int型
//函数模版不能在函数体内声明
template <class T, int NUM>
T func(T a)
{
    return a * NUM;
}
int main(void)
{
    int add(int a, int b);//普通的函数可以在函数体内声明
    std::cout<<func<int, 4>(3)<<std::endl;

    return 0;
}
