/*********************************************
> File  : has_ptr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 09:59:15 PM CST
 ********************************************/

#include<iostream>

class HasPtr
{
public:
    HasPtr(std::string& str = std::string())
        :pstr_(new std::string(str)), ival_(0)
    {}
    HasPtr(const HasPtr& rhs)
        :pstr_(new std::string(*rhs.pstr_)), ival_(rhs.ival_)
    {}
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr()
    {
        delete pstr_;
    }
private:
    std::string* pstr_;
    int ival_;
};

HasPtr& operator=(const HasPtr& rhs)
{
    if(this != &rhs)
    {
        std::string newP = new std::string(*rhs.pstr_);
        delete pstr_;
        pstr_ = newP;
        ival_ = rhs.ival_;
    }
    return *this;
}
