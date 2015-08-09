/*********************************************
> File  : quote_self.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 04:20:28 PM CST
 ********************************************/

#include<iostream>

class Base
{
public:
    Base() = default;
    Base(const std::string bookNo, double price)
        :bookNo_(bookNo), price_(price)
    {
        std::cout<<"Base(const std::string bookNo, double price)"<<std::endl;
    }
    virtual double  net_price(std:size_t cnt) const 
    {
        return (cnt * price_);
    }
    virtual ~Base() = default;
    std::string& isbn() const
    {
        return bookNo_;
    }

private:
    std::string bookNo_;

protected:
    double price_;
};
class Bulk_quote: public Base
{
public:
    double net_price(std::size_t cnt) override
    {
        if(cnt >= min_qty)
        {
            return cnt * price * (1 - discout);
        }
        else
        {
            return cnt * price;
        }
    }
private:
    std::size_t mim_qty;
    double discout;
};

class Limited_quote
{
public:
    double net_price(std::size_t cnt) override
    {
        if(cnt <= min_qty)
        {
            return (1 - discout_) * cnt *  price;
        }
        else
        {
            return (min_qty * (1 - discout_)) * price_ + (cnt - min_qty) * price;
        }
    }
private:
    std::size_t min_qtyi_;
    double discout_;
};

double print_total(std::ostream& os, const Base& rhs, std::size_t n)
{
    double ret = rhs.net_price(n);
    std::cout<<"ISBN : "<<rhs.isbn()<<" # sold_cnt : "<<n<<" total due : "<<ret<<std::endl;

    return ret;
}
