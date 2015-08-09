/*************************************************************************
  > File Name: namespace.cpp
  > Author: NewYork
  > Mail: 2287794993@qq.com 
  > Created Time: Wed 10 Jun 2015 04:51:53 PM CST
 ************************************************************************/

#include<iostream>

namespace yaya
{
	int num = 5;
	class Ex
	{
		public:
			void func();
	};
}


namespace yaya
{
	void Ex::func()
	{
		std::cout<<"world! I am yaya!"<<std::endl;
		std::cout<<"num(yaya)="<<num<<std::endl;
	}
}

namespace haha
{
	int num = 6;
	class Ex
	{
		public:
			void func()
			{
				std::cout<<"hello! I am haha!"<<std::endl;
				std::cout<<"num(haha)="<<num<<std::endl;
			}
	};
}
int main(void)
{
	yaya::Ex cya;
	haha::Ex cha;
	cya.func();
	cha.func();

	return 0;
}
