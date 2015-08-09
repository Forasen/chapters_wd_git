/*********************************************
> File  : redefine_base_derived.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 08:31:33 AM CST
********************************************/

#include<iostream>

class Base
{
    //private:
    protected:
    double price_;
    private:
    std::string isbn_;

    public:
    Base(std::string isbn, double price)
    :isbn_(isbn), price_(price)
    {
        std::cout<<"Base(std::string isbn)"<<std::endl;
    }
    std::string book() const
    {
        return isbn_;
    }
    virtual double net_book(std::size_t cnt) const
    {
        return (cnt * price_);
    }
    virtual ~Base()
    {}
};

class Derived: public Base
{
private:
    std::size_t qty_;
    double disc_rate_;
public:
    Derived(std::string isbn, double price, std::size_t qty, double disc_rate)
    :Base(isbn, price), qty_(qty), disc_rate_(disc_rate)
    {
        std::cout<<"Derived constructor is called!"<<std::endl;
    }
    double net_book(int cnt)
    {
        if(qty_ < cnt)
        {
            return (cnt * (1 - disc_rate_) * price_);
        }
    }
    Derived(const Derived& rhs)
        :Base(rhs)
    {

    }
    Derived& operator=(const Derived& rhs)
    {
        if(this != &rhs)
        {
            Base::operator=(rhs);
        }
    }
};

int main(void)
{
    return 0;
}
