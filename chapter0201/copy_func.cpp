/*************************************************************************
    > File Name: copy_func.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 09:16:05 PM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>

class Computer
{
private:
    char* brand_;
    float price_;
public:

#if 1
    Computer(char* brand, float price)
    :price_(price)
    {
        std::cout<<"create object"<<std::endl;
        brand_ = new char[strlen(brand) + 1];
        strcpy(brand_, brand);
    }
#endif

#if 0
    Computer(const Computer &pc)
    {
        brand_ = pc.brand_;
        price_ = pc.price_;
    }
#endif
    
    Computer(const Computer &pc1)
    :price_(pc1.price_)
    {
        brand_ = new char[strlen(pc1.brand_) + 1];
        strcpy(brand_, pc1.brand_);
    }
    ~Computer()
    {
        printf("&brand_=%x\n", brand_);
        delete []brand_;
        std::cout<<"clear the source!"<<std::endl;
    }

    void print()
    {
        std::cout<<"brand:"<<brand_<<", "<<"price:"<<price_<<std::endl;
    }
};

int main(void)
{
    Computer pc("Ehaha", 1000);
    pc.print();

    std::cout<<std::endl;
    Computer pc2 = pc;
    pc2.print();

    return 0;
}
