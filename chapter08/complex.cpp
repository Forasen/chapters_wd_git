/*****************************************************
    > File  : complex.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 10:30:25 AM CST
 ****************************************************/

#include<iostream>

class Complex
{
//private:
public://以普通函数形式进行重载，要求操作数必须是public的形式
    double dreal_;
    double dimage_;
public:
    Complex(double dreal=0.0, double dimage=0.0)
        :dreal_(dreal), dimage_(dimage)
    {

    }
    void display()
    {
        std::cout<<dreal_<< " + "<<dimage_<<"i"<<" = "<<std::endl;
    }
};

Complex operator +(Complex &lhs, Complex &rhs)
{
    return Complex(lhs.dreal_+rhs.dreal_, 
                  lhs.dimage_+rhs.dimage_);
}


int main(void)
{
    Complex cx1(1.0, 2.0);
    Complex cx2(3.0, 4.0);
    Complex cxRes = cx1 + cx2;
    cxRes.display();

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    int e = a + b;
    return 0;
}
