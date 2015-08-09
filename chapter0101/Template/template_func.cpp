/*************************************************************************
    > File Name: template_func.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 09:17:30 PM CST
 ************************************************************************/

#include<iostream>

template<typename T, int NUM>

T fun(T a)
{
	return a * NUM;
}

int main(void)
{
	std::cout<<fun<int, 4>(3)<<std::endl;
}
