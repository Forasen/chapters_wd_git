/*********************************************
> File  : hasptr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 04:42:33 PM CST
********************************************/

#include<iostream>
using namespace std;
class HasPtr
{
    public:
    HasPtr()
    {
        std::cout<<"HasPtr()"<<std::endl;
    }
    HasPtr(const std::string& str = std::string())
    :pstr_(new std::string(str)), ival_(0)
    {
        std::cout<<"HasPtr(std::string& str, int ival)"<<std::endl;
    }
    ~HasPtr();
    HasPtr(const HasPtr& rhs)
    {
        pstr_ = new std::string(*rhs.pstr_);
        ival_ = rhs.ival_;
    }
    HasPtr& operator=(const HasPtr& rhs);

    HasPtr& operator=(const std::string& str);
    std::string& operator*();
    private:
    std::string* pstr_;
    int ival_;
};
HasPtr::~HasPtr()
{
    std::cout<<"~HasPtr()"<<std::endl;
    delete pstr_;
}

 HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
    if(this != &rhs)
    {
        auto newpstr = new HasPtr(*rhs.pstr_);
        delete pstr_;
        //pstr_ = NULL;
        //pstr_ = new HasPtr(*rhs.pstr_);
        pstr_ = newpstr->pstr_;
        ival_ = rhs.ival_;
    }
    return *this;
}

HasPtr& HasPtr::operator=(const std::string& rhs)
{

    //pstr_ = &rhs;
    *pstr_ = rhs;
    return *this;
}

std::string& HasPtr::operator*()
{
    return *pstr_;
}

int main(void)
{
    HasPtr hp1("hi mom!");
    //HasPtr hp2(hp2);
    HasPtr hp2(hp1);
    //HasPtr hp2?(hp2);
    HasPtr hp3 = hp1;
    hp2 = "Hi, dad!";
    hp3 = "Hi, son!";
    std::cout<<"hp1 : "<<*hp1<<std::endl<<std::endl;
    std::cout<<"hp2 : "<<*hp2<<std::endl<<std::endl;
    std::cout<<"hp3 : "<<*hp3<<std::endl<<std::endl;

return 0;
}
