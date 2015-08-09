/*************************************************************************
    > File Name: io.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 04:26:44 PM CST
 ************************************************************************/

#include<iostream>

int main(void)
{
	std::cout<<"hello world"<<std::endl;

	std::string str;

#if 0
	while(std::cin >> str)
	{
		std::cout<<"str>>"<<str<<std::endl;
	}
#endif

	while(getline(std::cin, str))
	{

		std::cout<<"str>>"<<str<<std::endl;

	}

	return 0;
}
