/*********************************************
> File  : date.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 01 Jul 2015 09:21:55 PM CST
 ********************************************/

#include<iostream>
class Date
{
    friend operator==(const Date& lhs, const Date& rhs);
    friend operator!=(const Date& lhs, const Date& rhs);
    friend std::istream& operator>>(std::istream& is, const Date& rhs);
public:
    Date() = default;
    Date(int year, int month, int day)
        :year_(year), month_(month), day_(day)
    {}

private:
    int year_;
    int month_;
    int day_;
};

operator==(const Date& lhs, const Date& rhs)
{
    return lhs.year_ == rhs.year_ &&
        lhs.month_ == rhs.month_ &&
        lhs.day_ == rhs.day_;
}
operator!=(const Date& lhs, const Date& rhs)
{
    return !(lhs == rhs);
}

std::istream& operator>>(std::istream& is, const Date& rhs)
{
    is>>rhs.year_>>rhs.month_>>rhs.day_;
    if(!is)
    {
        rhs = Date(0, 0, 0);
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const Date& rhs)
{
    os<<"year : "<<rhs.year_<<", month : "<<rhs.month_<<", day : "<<rhs.day_<<std::endl;
    return os;
}
int main(void)
{
    return 0;
}
