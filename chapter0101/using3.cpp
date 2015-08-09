/*************************************************************************
    > File Name: using3.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 05:25:35 PM CST
 ************************************************************************/

#include<iostream>

namespace B
{
	int num = 2;
}

extern int num = 0;

namespace A
{
	int num = 1;
	void dispA()
	{
		int num = 11;
		std::cout<<"dispA->num="<<num<<std::endl;
		std::cout<<"A->num="<<A::num<<std::endl;
		std::cout<<"B->num="<<B::num<<std::endl;
		std::cout<<"extern->num="<<::num<<std::endl;
	}
}

int main(void)
{
	A::dispA();
	return 0;
}
