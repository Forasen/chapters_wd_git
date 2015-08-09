/*********************************************
> File  : improved_sales_data.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 02:52:54 PM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<iostream>

class Sales_data
{

public:
    std::string isbn() const
    {
        return bookNo_;
    }
    Sales_data& combine(const Sales_data&);
    double arg_price() const;

public:
//private:
    std::string bookNo_;
public:
    unsigned int units_sold_ = 0;
    double revenue_ = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    this->units_sold_ += rhs.units_sold_;
    this->revenue_ += rhs.revenue_;

    return *this;
}
Sales_data& add(const Sales_data&, const Sales_data&);

std::ostream& print(std::ostream&, const Sales_data&);
 
std::istream& read(std::istream&, Sales_data&);

int main(void)
{
    return 0;
}

std::istream& add(const std::istream& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

std::istream& read(std::istream& is, Sales_data& rhs)
{
    double price = 0.0;
    is>>rhs.bookNo_>>rhs.units_sold_>>price;
    rhs.revenue_ = rhs.units_sold_ * price;
    
    return is;
}
std::ostream& print(std::ostream& os, const Sales_data& rhs)
{
    os<<rhs.isbn()<<", "<<rhs.units_sold_<<", "<<rhs.revenue_<<", "<<rhs.arg_price;

    return os;
}
