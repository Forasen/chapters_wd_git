/*****************************************************
    > File  : operator_arrow.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 03:33:28 PM CST
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
    {

    }
    ~DataPtr()
    {
        delete pData_;
    }
    Data* operator->()//不含参数
    {
        return pData_;
    }
};

int main(void)
{
    DataPtr dp;
    std::cout<<"data's len = "<<dp->getlen()<<std::endl;
    std::cout<<(dp.operator->())->getlen()<<std::endl;

    return 0;
}
