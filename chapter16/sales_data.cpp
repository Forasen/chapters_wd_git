/*********************************************
> File  : sales_data.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 09:33:44 PM CST
********************************************/

#include<iostream>

extern const int bufSize = func();

extern const int bufSize;

struct Sales_data
{
    Sales_data(std::string isbn, double price)
        :isbn_(isbn_), price_(price)
    {
        
    }
    void read(std::istream, Sales_data& rhs)
    {

    }
    std::string isbn() const
    {
        std::cout<<"std::string isbn() const"<<std::endl;
        return isbn_;
    }
    Sales_data& combine(const Sales_data& rhs);
    double avg_price() const;

private: 
    std::string isbn_;
    double price_;
    double revenue_ = 0.0;
    int units_sold_;
};

Sales_data& combine(const Sales_data& rhs)
{
    this->units_sold_ += rhs.units_sold_;
    this->revenue_ += rhs.revenue_;

    return *this;
}
double Sales_data::avg_price() const
{
    {
        if(units_sold_)
        {
            return revenue / units_sold_;
        }
        else
        {
            return 0;
        }
    }

}
int main(void)
{
    Sales_data total;
    if(read(std::cin, total))
    {
        Sales_data trans;
        while(read(std::cin, trans))
        {
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, total)<<std::endl;
            }
        }
    }
    else
    {
        std::cout<<"No data?"<<std::endl;
    }
    return 0;
}

