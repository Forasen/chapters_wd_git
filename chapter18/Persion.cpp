/*********************************************
> File  : Persion.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 02:18:51 PM CST
 ********************************************/

#include<iostream>

class Persion
{
private:
    std::string strName_;
    std::string strAddr_;
public:
    Persion() = default;
    Persion(std::string name, std::string addr)
        :strName_(name), strAddr_(addr)
    {

    }
    Persion(std::istream& is)
    {
        is>>*this;
    }
public:
    std::string getName() const
    {
        return strName_;
    }
    std::string getAddr() const 
    {
        return strAddr_;
    }
};
