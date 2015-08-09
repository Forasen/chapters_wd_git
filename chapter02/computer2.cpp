/*************************************************************************
    > File Name: computer2.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 03:56:33 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stdio.h>
class Computer
{
private:
    float fPrice_;
    char* pBrand_;
public:

    Computer(const char* str, float p)
    : fPrice_(p)
    {
        pBrand_ = new char[strlen(str) + 1];
        strcpy(pBrand_, str);
    }
#if 0
    Computer(const Computer &pc)
    {
        pBrand_ = pc.pBrand_;//浅拷贝
        fPrice_ = pc.fPrice_;
    }
#endif

    ~Computer()
    {
        printf("address=%x\n", pBrand_);
        delete pBrand_;
        pBrand_ = NULL;
        std::cout<<"清理现场"<<std::endl;
    }


    Computer(const Computer &pc)
        :pBrand_(pc.pBrand_), fPrice_(pc.fPrice_)
    {
        pBrand_ = new char[strlen(pc.pBrand_) + 1];//深拷贝
        strcpy(pBrand_, pc.pBrand_);
    }


    void print()
    {
        std::cout<<"品牌："<<pBrand_<<", "<<"单价："<<fPrice_<<std::endl;
    }
};

int main(void)
{
    Computer pc1("Dell", 998);
    pc1.print();

    std::cout<<std::endl;
    //pc1.~Computer();
    //Computer *pc2 = new Computer("Lenovo", 10000);
    Computer pc2 = pc1;
    pc2.print();
    //delete pc2;

    return 0;
}
