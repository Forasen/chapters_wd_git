/*************************************************************************
    > File Name: string_cin.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 04:02:12 PM CST
 ************************************************************************/

#include<iostream>

#include<string>

int main()
{
	char buf[1024] = {
		0
	};

	//char* pstr = "Hello, World";

	std::string s1 = "wangdao";
	std::cout<<"s1:"<<s1<<std::endl;
	std::string s2 = "NewYork";
	std::string s3 = s1 + s2;
	std::cout<<"s3:"<<s3<<std::endl;

	char ch = 'A';
	std::string s4 = s1 + ch;
	std::cout<<"s4:"<<s4<<std::endl;

	int a = 3;
	int b(4);
	int c = a + b;
	std::cout<<"c="<<c<<std::endl;

	int size = s4.size();
	int index;

	for(index=0; index<size; index++)
	{
		std::cout<<s4[index]<<" ";
	}
	std::cout<<std::endl;


	std::string::iterator it = s4.begin();
	for(; it!=s4.end(); it++)
	{
		std::cout<<*it<<" ";
	}
	std::cout<<std::endl;

	std::string substr = s4.substr(0, 7);
	std::cout<<"s4's substr:"<<substr<<std::endl;


	return 0;
}
