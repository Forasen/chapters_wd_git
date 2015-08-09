/*********************************************
> File  : virtual.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 11:27:37 AM CST
 ********************************************/

#include<iostream>

class Quote
{
public:
    std::string isbn() const
    {
        return bookNo_;
    }
    Quote() = default;
    Quote(const std::string bookNo, double sales_price)
        :bookNo_(bookNo), price_(sales_price)
    {
        std::cout<<"Quote(const std::string bookNo, double sales_price)"<<std::endl;
    }
    virtual double new_price(std::size_t n) const
    {
        std::cout<<"virtual double new_price(std::size_t n) const"<<std::endl; 
        return n * price_;
    }
    double print_total(std::ostream& os, const Quote& item, std::size_t n)
    {
        double ret = item.net_price(n);
    }
    virtual ~Quote() = default;

private:
    std::string bookNo_;
protected:
    double price_;
};

std::string Quote::isbn() const
{
    return bookNo_;
}

class Bulk_quote: public Quote
{
public:
    double net_price(std::size_t n) const override;
    {
        return n * price_;
    }
    double print_total(std::ostream& &os, const Quote& item, std::size_t n)
    {
        double ret = item.net_price(n);
    }
private:
    double price_;
    std::string bookNo_;
};
