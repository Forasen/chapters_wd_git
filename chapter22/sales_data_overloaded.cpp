/*********************************************
> File  : sales_data_overloaded.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 01 Jul 2015 09:04:35 PM CST
 ********************************************/

#include<iostream>

class Sales_data
{
    friend std::istream& operator>>(std::istream& is, Sales_data& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Sales_data& rhs);
    friend Sales_data operator-(const Sales_data& lhs, const Sales_data& rhs);
public:
    Sales_data& operator+=(const Sales_data& rhs); 
    Sales_data& operator-=(const Sales_data& rhs);


private:
    std::string bookNo_;
    double price_;
    std::size_t units_sold;
    double revenue_;
};

Sales_data operator-(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sub = lhs;
    sub -= rhs;
    return sub;
}

Sales_data& Sales_data::operator-=(const Sales_data& rhs)
{
    units_sold -= rhs.units_sold;
    revenue_ -= rhs.revenue_;
    return *this;
}

Sales_data& operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum += rhs;
    return sum;
}

std::istream& operator>>(std::istream& is, Sales_data& rhs)
{
    double price;
    is>>rhs.bookNo_>>rhs.units_sold>>price;
    if(is)
    {
        rhs.revenue_ = price * units_sold;
    }
    else
    {
        rhs = Sales_data();
    }
    return is;
}

bool operator==(const Sales_data& lhs, const Sales_data& rhs)
{
    return lhs.isbn() == rhs.isbn() &&
        lhs.units_sold == rhs.units_sold &&
        lhs.revenue_ == rhs.revenue_;
}

bool operator!=(const Sales_data& lhs, const Sales_data& rhs)
{
    return !(lhs == rhs);
}
