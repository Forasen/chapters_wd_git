/*************************************************************************
    > File Name: default.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 02:59:34 PM CST
 ************************************************************************/

#include<iostream>
#if 0
int add(int a, int b = 10)//缺省参数，或者为默认的参数
{
	return  a + b;
}
#endif
#if 1
int add(int a, int b, int c=10, int d=20)//就会与上面的add函数产生二义性
//如果函数使用了缺省的参数，对于函数的参数列表必须采取从右到
//到左的这种顺序去提供缺省参数
{
	return a + b + c + d;
}
#endif
int main()
{
	int ival1 = 3;
	int ival2 = 4;
	int ival3 = 5;
	int ival4 = 6;

	//std::cout<<"add(ival1):"<<add(ival1)<<std::endl;
	std::cout<<"add(ival1, ival2):"<<add(ival1, ival2)<<std::endl;
}
