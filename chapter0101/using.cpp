/*************************************************************************
    > File Name: using.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 05:12:40 PM CST
 ************************************************************************/

#include<iostream>

namespace A
{
	void dispA()
	{
		std::cout<<"This is A"<<std::endl;
	}
}
using A::dispA;

void dispEx()
{
	std::cout<<"This is outside"<<std::endl;
}

namespace B
{
	void dispB()
	{
		dispEx();
		dispA();
		std::cout<<"This is B"<<std::endl;
	}
}

int main(void)
{
	B::dispB();
	dispA();
	
	return 0;
}
