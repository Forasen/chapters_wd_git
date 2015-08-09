/*********************************************
> File  : debug_quote.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 08:32:43 PM CST
 ********************************************/

#include<iostream>
class Quote
{
public:
    Quote() = default;
    Quote(const std::string& bookNo, double price)
        :bookNo_(bookNo), price_(price)
    {}
    std::string& isbn()
    {
        return bookNo_;
    }
    virtual double net_price(std::size_t cnt) const 
    {
        return cnt * price_;
    }
    virtual ~Quote() = default;

    virtual void debug()
    {
        std::cout<<"ISBN : "<<bookNo_<<", price : "<<price_<<std::endl;
    }
private:
    std::string bookNo_;
protected:
    double price_;
};

class Bulk_quote: public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double price, std::size_t qrt, double discount)
        :Quote(book, price), min_qrt(qrt), discount_rate(discount)
    {}
    double net_price(std::size_t n) const override
    {
        if(n > min_qrt)
        {
            return (1 - discount_rate) * price_ * n;
        }
        else
        {
            return price_ * n;
        }
    }
    void debug() override
    {
        Quote::debug();
        std::cout<<"min_qrt : "<<min_qrt<<", discount_rate : "<<discount_rate<<std::endl;
    }
private:
    std::size_t min_qrt;
    double discount_rate;
};
int main()
{

    return 0;
}
