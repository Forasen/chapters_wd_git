/*************************************************************************
    > File Name: io_test_1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 03:40:14 PM CST
 ************************************************************************/

#include<iostream>


void printStatus()
{
	std::cout<<"bad :"<<std::cin.bad()<<std::endl;
	std::cout<<"fail:"<<std::cin.fail()<<std::endl;
	std::cout<<"eof :"<<std::cin.eof()<<std::endl;
	std::cout<<"good:"<<std::cin.good()<<std::endl;
}
int main(void)
{
	printStatus();

	int num;
	while(std::cin>>num)
	{
		std::cout<<num<<std::endl;
	}
	printStatus();

	std::cin.clear();
	
	return 0;

}
