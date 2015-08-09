/*********************************************
> File  : HasPtr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 07:45:31 AM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<string.h>

class HasPtr
{
public:
#if 0
    HasPtr(std::string* str, int i)
        :ps_(str), i_(i)
        //:ps_(*str), i_(i)
    {}
#endif
    HasPtr(std::string* str)
        //:ps_(new std::string(str)), i_(i)
        :ps_(str)
    {}
    HasPtr(std::string s)
        :ps_(new std::string(s))
    {
    }
    ~HasPtr()
    {
        std::cout<<"~HasPtr()"<<std::endl;
        //delete []ps_;
        delete ps_;
    }
    void print()
    {
        std::cout<<"*ps = "<<*ps_<<std::endl;
    }
private:
    std::string *ps_;
    //std::string ps_;
    int i_;
};

HasPtr func(HasPtr hp)
{
    HasPtr  ret = hp;
    return ret;//可否有一个异常处理机制进行捕获？
}
int main(void)
{
    //std::string a = "hello";
    std::string *a = new std::string("hello");
    HasPtr hp(a);
    //HasPtr hp("hello", 10);
    hp.print();

    HasPtr hp1("how are you");
    func(hp1);
    return 0;
}
