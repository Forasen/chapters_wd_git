/*********************************************
> File  : hasptr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 30 Jun 2015 08:37:01 AM CST
 ********************************************/

#include<iostream>

class HasPtr
{
public:
    HasPtr(const std::string& str = std::string())
        :pstr_(new std::string(str)), ival_(0), puse_(new std::size_t(1))
    {

    }
    HasPtr(const HasPtr& rhs)
        :pstr_(rhs.pstr_), ival_(rhs.ival_), puse_(rhs.puse_)
    {
        ++*puse_;
    }
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr() = default;

private:
    std::string* pstr_;
    int ival_;
    std::size_t* puse_;
};

HasPtr::~HasPtr()
{
    if(--*puse_ == 0)
    {
        delete pstr_;
        delete puse_;
    }
}

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
    ++*rhs.pstr_;
    if(--*pstr_ == 0)
    {
        delete pstr_;
        delete puse_;
    }
    pstr_ = rhs.pstr_;
    ival_ = rhs.ival_;
    puse_ = rhs.puse_;

    return *this;
}
