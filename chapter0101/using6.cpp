/*************************************************************************
    > File Name: using6.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 07:26:13 PM CST
 ************************************************************************/

#include<iostream>

float float1 = 88.8f;

namespace 
{
	float fUnnameSpaceFloat = 99.9f;
}

namespace ns1
{
	const int integer1 = 100;
	const double double1 = 100.5;
	float float1 = 55.5f;
	void printValue();
	namespace Inner
	{
		double innerdouble = 66.6;

	}
}

int main(void)
{
	std::cout<<"global>>"<<::float1<<std::endl;
	std::cout<<"un>>"<<fUnnameSpaceFloat<<std::endl;
	std::cout<<"ns1:integer1>>"<<ns1::integer1<<std::endl;
	std::cout<<"ns1:double1>>"<<ns1::double1<<std::endl;
	std::cout<<"ns1:float1>>"<<ns1::float1<<std::endl;
	std::cout<<"Inner:::innerdouble>>"<<ns1::Inner::innerdouble<<std::endl;

	std::cout<<std::endl;
	ns1::printValue();
}

void ns1::printValue()
{
	std::cout<<"global>>"<<::float1<<std::endl;
	std::cout<<"un>>"<<fUnnameSpaceFloat<<std::endl;
	std::cout<<"integer1>>"<<integer1<<std::endl;
	std::cout<<"double1>>"<<double1<<std::endl;
	std::cout<<"float1>>"<<float1<<std::endl;
}
