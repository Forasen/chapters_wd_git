/*************************************************************************
    > File Name: computer.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 11:18:31 AM CST
 ************************************************************************/

#include<iostream>

class computer
{
private:
   char pBrand_[20];
    float fPrice_;
public:
    void print()
    {
        std::cout<<"brand:"<<pBrand<<std::endl;
        std::cout<<"price:"<<price<<std::endl;
    }
    void setBrand(char* pstr);
    void setPrice(float price)
    {
        fPrice_ = price;
    }
}

