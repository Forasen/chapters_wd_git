/*************************************************************************
  > File Name: overload.cpp
  > Author: NewYork
  > Mail: 2287794993@qq.com 
  > Created Time: Wed 10 Jun 2015 03:16:38 PM CST
 ************************************************************************/

#include<iostream>
//进行C与C++的混合编程
#ifdef __cpluscplus
extern "C"
{
#endif
	int add(int a, int b)
	{
		return a + b;
	}
#ifdef __cplusplus
}
#endif

double add(double a,  double b)
{
	return a + b;
}
double add(double a, int b , double c)
{
	return a + b + c;
}
int main()
{
	int a = 3;
	int b = 4;
	double a1 = 30;
	double b1 = 40;
	std::cout<<"a+b="<<add(a, b)<<std::endl;
	std::cout<<"a1+b1="<<add(a1, b1)<<std::endl;
}
