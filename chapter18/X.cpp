/*********************************************
> File  : X.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 08:44:01 AM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<vector>

class X
{
public:
#if 0
    X()
    {
        std::cout<<"X()"<<std::endl;
    }
#endif
    X(const std::string s)
        :ps_(new std::string(s))
    {}
    ~X()
    {
        delete ps_;
        std::cout<<"~X()"<<std::endl;
    }
    X(const X& rhs)
    {
        //ps_ = *rhs.ps_;
        //指针可以直接复制吗
        //ps_ = rhs.ps_;
        ps_  = new std::string(*rhs.ps_);
        std::cout<<"X(const X& rhs)"<<std::endl;
    }
    X& operator=(const X& rhs)
    {
        return *this;
    }
private:
    std::string* ps_;
};

void f1(X x)
{

}

void f2(X& x)
{

}

int main(void)
{
    std::cout<<"局部变量："<<std::endl<<std::endl;
    X x("how are you");
    std::cout<<"非引用参数传递："<<std::endl;
    f1(x);
    std::cout<<std::endl;

    std::cout<<"引用参数传递："<<std::endl;
    f2(x);
    std::cout<<std::endl;

    std::cout<<"动态分配："<<std::endl;
    X* px = new X();
    std::cout<<std::endl;
#if 0
    std::cout<<"添加到容器中："<<std::endl;
    std::vector<X> vecX;
    vecX.push_back(x);
    std::cout<<std::endl;
//#endif
    std::cout<<"释放动态分配对象："<<std::endl;
    delete px;
    std::cout<<std::endl;
//#if 0
    std::cout<<"间接初始化和赋值："<<std::endl;
    X y = x;
    std::cout<<std::endl;
    y = x;

    std::cout<<std::endl;
#endif
    std::cout<<"+++++++++++"<<std::endl;
}

