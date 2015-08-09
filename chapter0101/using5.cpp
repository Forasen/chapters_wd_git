/*************************************************************************
  > File Name: using5.cpp
  > Author: NewYork
  > Mail: 2287794993@qq.com 
  > Created Time: Wed 10 Jun 2015 07:13:55 PM CST
 ************************************************************************/

#include<iostream>


extern int num = 0;


namespace A
{
	int num = 1;
	namespace B
	{
		int num = 2;
		void dispB()
		{
			int num = 3;
			std::cout<<"dispB->num="<<num<<std::endl;
			std::cout<<"B->num="<<B::num<<std::endl;
			std::cout<<"A->num="<<A::num<<std::endl;
			std::cout<<"extern->num="<<::num<<std::endl;
		}
	}
}

int main(void)
{
	A::B::dispB();

	return 0;
}
