/*************************************************************************
    > File Name: vector_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 03:32:37 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>

void printSize(std::vector<int> &vec)
{
	std::cout<<"vec.size="<<vec.size()<<std::endl;
	std::cout<<"vec.capacity="<<vec.capacity()<<std::endl;
}

int main(void)
{
	std::vector<int> vec;
	printSize(vec);

	std::cout<<std::endl;
	vec.push_back(1);
	printSize(vec);

	std::cout<<std::endl;
	vec.push_back(2);
	printSize(vec);

	std::cout<<std::endl;
	vec.push_back(3);
	printSize(vec);

	std::cout<<std::endl;
	vec.push_back(4);
	vec.push_back(5);
	printSize(vec);

	std::cout<<std::endl;
	for(size_t index=0; index<vec.size(); index++)
	{
		std::cout<<vec[index]<<std::endl;
	}

	std::cout<<std::endl;
	std::vector<int>::iterator it;
	for(it=vec.begin(); it<vec.end(); it++)
	{
		std::cout<<*it<<std::endl;
	}

	return 0;
}
