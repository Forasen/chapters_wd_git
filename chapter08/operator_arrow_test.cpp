/*****************************************************
    > File  : ./operator_arrow_test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 03:47:52 PM CST
 ****************************************************/

#include<iostream>

class Data
{
public:
	int getlen()
	{
		return 5;
	}
};

class DataPtr
{
private:
	Data* pData_;

public:
	DataPtr()
		:pData_(new Data)
	{}
	~DataPtr()
	{
		delete pData_;
	}
	Data* operator->()
	{
		return pData_;
	}
};

int main(void)
{
	DataPtr pd;
	std::cout<<"pd="<<pd->getlen()<<std::endl;

	std::cout<<"pd2="<<(pd.operator->())->getlen()<<std::endl;

	return 0;
}
