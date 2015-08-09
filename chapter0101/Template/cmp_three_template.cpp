/*************************************************************************
    > File Name: cmp_three_template.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 09:51:07 PM CST
 ************************************************************************/

#include<iostream>

template<class T>
T MAX(T x, T y);

template<class T>
T MAX(T x, T y, T z)
{
	return x > y ? (x > z ? x : z) : (y > z ? y : z);
}

int main(void)
{
	int x = 1;
	int y = 3;
	int z = 2;
	double a = 2.1;
	double b = 3.2;
	std::cout<<"MAX<int>(1, 3, 2)="<<MAX<int>(x, y, z)<<std::endl;
	std::cout<<"MAX<int>(1, 3)="<<MAX<int>(x, y)<<std::endl;
	std::cout<<"MAX<double>(a, b)"<<MAX<double>(a, b)<<std::endl;

	std::cout<<"MAX('A', '8')="<<MAX('A', '8')<<std::endl;

	return 0;
}

template<typename T>

T MAX(T x, T y)
{
	return x > y ? x : y;
}
