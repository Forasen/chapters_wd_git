/*********************************************
> File  : disc_quote.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 09:20:04 PM CST
 ********************************************/

#include<iostream>

class Quote
{
public:
    Quote() = default;
    Quote(std::string& book, double price)
        :bookNo_(book), price_(price)
    {}
    std::string isbn() const
    {
        return bookNo_;
    }
    virtual double net_price(std::size_t cnt) const
    {
        return price_ * cnt;
    }
    virtual ~Quote() = default;
    

private:
    std::string bookNo_;
protected:
    double price_;
};

class Disc_quote: public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(std::string& book, double price, std::size_t cnt , double disc)
        :Quote(book, price), quantity(cnt), discount(disc)
    {}
    double net_price(std::size_t cnt) const=0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

class Bult_quote: public Disc_quote
{
public:
    Bult_quote() = default;
    Bult_quote(std::string& book, double price, std::size_t cnt, double disc)
        :Disc_quote(book, price, cnt, disc)
    {
    }
    double net_price(std::size_t cnt) const //override
    {
        if(cnt > quantity)
        {
            return (1 - discount) * cnt * price_;
        }
        else
        {
            return cnt * price_;
        }
    }
};

int main(void)
{
    Disc_quote dq;
    return 0;
}
