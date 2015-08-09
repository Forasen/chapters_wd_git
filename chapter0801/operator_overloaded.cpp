/*****************************************************
> File  : operator_overloaded.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 17 Jun 2015 05:22:06 PM CST
****************************************************/

#include<iostream>

class Complex
{
    //private:
    public:
    double real_;
    double image_;

    public:
    Complex(double real=0.0, double image=0.0)
    :real_(real), image_(image)
    {}
    void display()
    {
        std::cout<<"complex = "<<real_<<" + "<<image_<<std::endl;
    }
};

Complex operator+(const Complex &lhs, const Complex &rhs)
{
    return Complex(lhs.real_ + rhs.real_, lhs.image_+rhs.image_);
}

int main(void)
{
    Complex cx1(1.1, 2.0);
    Complex cx2(3.0, 4.0);
    Complex cxRes = cx1 + cx2;

    cxRes.display();

    return 0;
}
