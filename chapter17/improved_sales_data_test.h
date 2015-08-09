/*********************************************
> File  : improved_sales_data_test.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 03:48:21 PM CST
 ********************************************/

#include<iostream>

class Sales_book
{
public:
    std::string bookNo_;
    double revenue_;
    unsigned int units_sold_;
public:
    Sales_book& combine(const Sales_book& rhs);
    double avg_price() const
    {
        return units_sold_ ? revenue_ / units_sold_ : 0;
    }
	std::string isbn() const
	{
		return bookNo_;
	}
};

Sales_book& Sales_book::combine(const Sales_book& rhs)
{
	this->revenue_ += rhs.revenue_;
	this->units_sold_ += rhs.units_sold_;

	return *this;
}
Sales_book& add(const Sales_book& lhs, const Sales_book& rhs)
{
    Sales_book sum(lhs);
    sum.combine(rhs);

    return sum;
}

std::istream& read(std::istream& is, Sales_book& rhs)
{
    double price = 0.0;
    is>>rhs.bookNo_>>rhs.units_sold_>>price;
    rhs.revenue_ = rhs.units_sold_ * price;

    return is;
}

std::ostream& print(std::ostream& os, const Sales_book& rhs)
{
	os<<"ISBN， "<<"销售量， "<<"总收益， "<<"平均价格"<<std::endl;
    os<<rhs.isbn()<<"\t"<<rhs.units_sold_<<"\t"<<rhs.revenue_<<"\t"<<rhs.avg_price();

    return os;
}
