/*********************************************
> File  : my_sales_data.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 02:24:52 PM CST
 ********************************************/

#include<iostream>

class Sales_data
{
    friend std::istream& read(std::istream& is, Sales_data& rhs);
    friend std::ostream& print(std::ostream& os, const Sales_data& rhs);
    friend Sales_data& add(const Sales_data& lhs, const Sales_data& rhs);
private:
    double sellingPrice = 0.0;
    double salesPrice = 0.0;
    unsigned int units_sold = 0;
    std::string bookNO;
    double discount = 0.0;
    inline double avg_price() const;
public:
    Sales_data() = default;
    Sales_data()
};

double Sales_data::avg_price() const
{
    return (units_sold ? revenue / units_sold : 0);
}
