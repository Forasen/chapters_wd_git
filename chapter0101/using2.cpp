/*************************************************************************
  > File Name: using2.cpp
  > Author: NewYork
  > Mail: 2287794993@qq.com 
  > Created Time: Wed 10 Jun 2015 05:18:58 PM CST
 ************************************************************************/

#include<iostream>

namespace A
{
	int num = 10;
}

namespace B
{
	using A::num;
	void dispB()
	{
		std::cout<<"num="<<num<<std::endl;
	}
}

int main(void)
{
	B::dispB();

	return 0;
}
