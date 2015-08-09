/*************************************************************************
    > File Name: computer.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 11:39:01 AM CST
 ************************************************************************/

#include<iostream>

class computer
{
private:
    char brand_[20];
    float price_;
    static float total_price_;

public:
    computer(float price)
        :price_(price)
    {
        total_price_ += price_;
    }
    ~computer()
    {
        total_price_ -= price_;
    }

    void print()
    {
        std::cout<<"the total price is:"<<total_price_<<std::endl;
    }
};

float computer::total_price_ = 0.0f;//static

int main(void)
{
    computer pc1(1000);
    std::cout<<"the 1st computer"<<std::endl;
    pc1.print();

    computer pc2(2000);
    std::cout<<"the 2nd computer"<<std::endl;
    pc2.print();

    computer pc3(3000);
    std::cout<<"the 3rd computer"<<std::endl;
    pc3.print();

    pc1.~computer();
    std::cout<<"after quit computer1"<<std::endl;
    pc3.print();

    std::cout<<"sizeof(computer)>>"<<sizeof(computer)<<std::endl;

    return 0;
}
