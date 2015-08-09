/*********************************************
> File  : item_book.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 08:53:21 PM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<string.h>

class item_base
{
public:
    item_base(std::string book="", double sales_price=0.0)
        :isbn_(book), price_(sales_price)
    {}
    std::string book() const
    {
        return isbn_;
    }
    virtual double net_price(std::size_t n) const
    {
        return (n * price_);
    }
    virtual ~item_base()
    {}

private:
    std::string isbn_;
protected:
    double price_;
};
#if 1
class Bulk_item: public item_base
{
public:
    double net_price(std::size_t) const;
private:
    std::size_t min_qty;
    double discount;
};

double Bulk_item::net_price(std::size_t cnt) const
{
    if(cnt > min_qty)
    {
        return (cnt * (1-discount) * price_);
    }
    else
    {
        return (cnt * price_);
    }
}
#endif
//class Bulk_item :public item_base;
//class Bulk_item;
//class item_base;

class Lds_item: public item_base
{
public:
    Lds_item(const std::string& book = "",
            double sales_price = 0.0,
            size_t qty = 0, double disc_rate = 0.0)
        :item_base(book, sales_price),
         max_qty(qty), discount(disc_rate)
    {}
    double net_price(std::size_t cnt) const
    {
        if(cnt <= max_qty)
        {
            return (cnt* (1-discount) * price_);
        }
        else
        {
            return ((cnt - (max_qty*discount))*price_);
        }
    }
private:
    size_t max_qty;
    double discount;
};

double print_total(std::ostream& os, const item_base& item, std::size_t n)
{
    os<<"ISBN : "<<item.book()
      <<"\tnumber sold : "<<n<<"\ttotal price : "
      <<item.net_price(n)<<std::endl;
}

int main(void)
{
    item_base item;
    Bulk_item derived;

    print_total(std::cout, item, 10);
    print_total(std::cout, derived, 10);
    item_base* p = &item;
    Bulk_item bulk;

    item_base* baseP = &derived;
    double d = baseP->item_base::net_price(42);


    return 0;
}
