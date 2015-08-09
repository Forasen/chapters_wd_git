/*************************************************************************
    > File Name: computer1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 02:36:04 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>

class computer
{
private:
    char* brand_;
    float price_;
    static float total_price_;

public:
    computer(const char* brand, float price)
        :price_(price)
    {
        std::cout<<"copy_constructor_func"<<std::endl;

        brand_ = new char[strlen(brand) + 1];
        strcpy(brand_, brand);
        total_price_ += price_;
    }
    ~computer()
    {
        std::cout<<"~computer"<<std::endl;
        if(brand_)
        {
            delete []brand_;
            brand_ = NULL;
        }
        total_price_ -= price_;
    }

    static void print_total()
    {
        //std::cout<<"price:"<<price_<<std::endl;
        std::cout<<"the total price:"<<total_price_<<std::endl;
    }

    static void print(computer &pc);
};

float computer::total_price_ = 0.0f;

void computer::print(computer &pc)
{
    std::cout<<"brand:"<<pc.brand_<<std::endl;
    std::cout<<"price:"<<pc.price_<<std::endl;
}

int main(void)
{
    computer pc1("IBM", 7000);
    //pc1.print();
    computer::print(pc1);//static for func member can use with class Name
    pc1.print_total();


    computer pc2("THINK", 9999);
    computer::print(pc2);
    pc2.print_total();

    std::cout<<std::endl;

    pc2.~computer();
    pc2.print_total();



    return 0;
}
