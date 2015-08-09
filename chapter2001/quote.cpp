/*********************************************
> File  : quote.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 02:49:34 PM CST
 ********************************************/

#include<iostream>

class Quote
{
public:
    Quote() = default;
    Quote(const std::string bookNo, const double price)
        :bookNo_(bookNo), price_(price);
    {
        std::cout<<"Quote(const std::string bookNo, const double price)"<<std::endl;
    }
    virtual ~Quote() = default;
    virtual double net_price(std::size_t n)
    {
        return price_ * n;
    }
    std::string& isbn()
    {
        return bookNo_;
    }

protected:
    double price_;

private:
    std::string bookNo_;
};

double print_total(std::ostream& os, Quote& item, std::size_t n) override
{
    double ret = item.net_price(n);
    os<<"ISBN : "<<item.isbn()<<" # sold : "<<n<<" total due : "<<ret<<std::endl;
    return ret;
}

class Bulk_total
{
public:
    Bulk_total() = default;
    Bulk_total(const std::string, double, std::size_t, double);
    net_price(std::size_t n) const override;
private:
    std::size_t mim_qty = 0;
    double discount_ = 0.0;
}

double Bulk_total::net_price(std::size_t n) const
{
    if(n >= mim_qty)
    {
        return (1 - discount) * n * price_;
    }
    else
    {
        return n * price;
    }
}

Bulk_total::Bulk_total(const std::string& book, double price, std::size_t qty, double discount)
    :Quote(book, price), mim_qty(qty), discount_(discount)
{
    std::cout<<"Bulk_total::Bulk_total(const std::string& book, double price, std::size_t qty, double discount)"<<std::endl;
}
