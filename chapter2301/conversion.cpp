/*********************************************
> File  : conversion.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 07:19:11 PM CST
 ********************************************/

#include<iostream>

class SmallInt
{
public:
    SmallInt(int val = 0)
        :ival_(val)
    {
        std::cout<<"SmallInt(int val = 0)"<<std::endl;
    }
    explicit operator int() const 
    {
        std::cout<<"operator int() const"<<std::endl;
        return ival_;
    }
    SmallInt& operator=(const SmallInt&);
    SmallInt(const SmallInt&);
    void print()
    {
        std::cout<<"(print())ival_ = "<<ival_<<std::endl;
    }

private:
    int ival_;
};

SmallInt::SmallInt(const SmallInt& rhs)
{
    std::cout<<"SmallInt::SmallInt(const SmallInt& rhs)"<<std::endl;
    ival_ = rhs.ival_;
}

SmallInt& SmallInt::operator=(const SmallInt& rhs)
{
    std::cout<<"SmallInt& SmallInt::operator=(const SmallInt& rhs)"<<std::endl;

    if(this != &rhs)
    ival_  = rhs.ival_;
    return *this;
}

int main(void)
{
    SmallInt si = 3;
    SmallInt si1 = si;
    si = 3;
    si.print();
    std::cout<<std::endl;

    auto val = static_cast<int>(si) + 4;
    std::cout<<"val = "<<val<<std::endl;

    return 0;
}
