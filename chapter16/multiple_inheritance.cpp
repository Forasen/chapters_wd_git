/*********************************************
> File  : multiple_inheritance.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 05:12:59 PM CST
 ********************************************/

#include<iostream>
#include<memory>

struct Base1
{
    Base1() = default;
    Base1(const std::string& str)
        :str_(str)
    {
        std::cout<<"Base1(const std::string& str)! source : "<<str<<std::endl;
    }
    Base1(std::shared_ptr<int>);
    ~Base1()
    {
        std::cout<<"~Base1()"<<std::endl;
    }
    Base1(const Base1& rhs)
    {
        str_ = rhs.str_;
        std::cout<<"Base1(const Base1& rhs)"<<std::endl;
    }
    void print(const Base1& rhs)
    {
        std::cout<<"++++++++++++++print(const Base1& rhs)+++++++++++++++"<<std::endl;
    }
protected:
    std::string str_;
};

struct Base2
{
    Base2() = default;
    Base2(const std::string& str)
        :str_(str)
    {
        std::cout<<"Base2(const std::string& str)! source : "<<str<<std::endl;
    }
    Base2(int);
    ~Base2()
    {
        std::cout<<"~Base2()"<<std::endl;;
    }
    Base2(const Base2& rhs)
    {
        str_ = rhs.str_;
        std::cout<<"Base2(const Base2& rhs)"<<std::endl;
    }
#if 1
    void print(const Base2& rhs)
    {
        std::cout<<"++++++print(const Base2& rhs)+++++++"<<std::endl;
    }
#endif
protected:
    std::string str_;
};

struct D1: Base1, Base2
{
    using Base1::Base1;
    using Base2::Base2;
#if 1
    D1(const std::string& s)
        :Base1(s), Base2(s), str_(s)
    {
        std::cout<<"D1(const std::string& s): Base1(s), Base2(s)! source : "<<str_<<std::endl;
        //std::cout<<"D1(const std::string& s): Base1(s), Base2(s)! source : "<<s<<std::endl;
    }
    ~D1()
    {
        std::cout<<"~D1()"<<std::endl;
    }
#if 0
    D1(const D1& rhs)
    {
        std::cout<<"D1(const D1& rhs)"<<std::endl;
        str_ = rhs.str_;
    }
#endif
    D1() = default;
#endif
protected:
    std::string str_;
};

int main(void)
{
    D1 d("hello");

    d.Base2::print(d);

    D1 d2 = d;
    //d.D1();

    return 0;
}
