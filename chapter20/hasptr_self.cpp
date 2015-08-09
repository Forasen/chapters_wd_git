/*********************************************
> File  : hasptr_self.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 30 Jun 2015 09:05:12 AM CST
********************************************/

#include<iostream>
#include<cstring>

class HasPtr
{
    public:
    HasPtr(const std::string& pstr = std::string())
        :pstr_(new std::string(pstr)), ival_(0), puse_(new std::size_t(1))
    {}
    HasPtr(const HasPtr& rhs)
    :pstr_(rhs.pstr_), ival_(rhs.ival_), puse_(rhs.puse_)
    {
        ++*puse_;
    }
    HasPtr& operator=(const std::string& str);
    HasPtr& operator=(const HasPtr& rhs);
    std::string& operator*()
    {
        return *pstr_;
    }

    ~HasPtr();

    private:
    std::string* pstr_;
    int ival_;
    std::size_t* puse_;
};

HasPtr& HasPtr::operator=(const std::string& str)
{
    *pstr_ = str;
    return *this;
}

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
    ++*rhs.puse_;
    if(--*puse_ == 0)
    {
        delete pstr_;
        delete puse_;
    }
    pstr_ = rhs.pstr_;
    ival_ = rhs.ival_;
    puse_ = rhs.puse_;

    return *this;
}

HasPtr::~HasPtr()
{
    if(--*puse_ == 0)
    {
        delete pstr_;
        delete puse_;
    }
}

int main(void)
{
    HasPtr hp("hi, mom!");
    HasPtr hp2 = hp;
    hp = "hi, dad!";
    std::cout<<"*hp : "<<*hp<<std::endl;
    std::cout<<"*hp2 : "<<*hp2<<std::endl;

    return 0;
}
