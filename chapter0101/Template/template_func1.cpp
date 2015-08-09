/*************************************************************************
    > File Name: template_func1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 09:26:41 PM CST
 ************************************************************************/

#include<iostream>

template<class T>

T max(T x, T y);

int main(void)
{
	int x = 1;
	int y = 2;
	std::cout<<"max(1, 2)="<<max(x, y)<<std::endl;
	double a = 3.9;
	double b = 2.9;
	std::cout<<"max(3.9, 2.9)="<<max(a, b)<<std::endl;

	return 0;
}


//template<class T>

T max(T a, T b)
{
	return a > b ? a : b;
}
