/*****************************************************
    > File  : complex.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 10:30:25 AM CST
 ****************************************************/

#include<iostream>

class Complex
{

    friend Complex operator +(const Complex &lhs, const Complex &rhs);//友元类型
private:
//public://以普通函数形式进行重载，要求操作数必须是public的形式
    double dreal_;
    double dimage_;
public:
    Complex(double dreal=0.0, double dimage=0.0)
        :dreal_(dreal), dimage_(dimage)
    {}
    Complex &operator+=(const Complex &rhs);
    void display()
    {
        std::cout<<dreal_<< " + "<<dimage_<<"i"<<" = "<<std::endl;
    }
    //Complex operator +=(const Complex &rhs);//不推荐使用
    Complex &operator +=(const Complex &rhs);
    Complex &operator +(const Complex &rhs);

    Complex& operator ++();
    Complex operator ++(int);//int并非一个参数，仅仅为标识符
};
//成员函数的形式进行重载
Complex& Complex::operator +=(const Complex &rhs)
{
    dreal_ += rhs.dreal_;
    dimage_ += rhs.dimage_;

    return *this;
}
//int operator +(int ,int);
//
//普通函数的形式进行重载
inline Complex& Complex::operator +(const Complex &rhs)
//牺牲了调用的效率！
{
    Complex cxTmp;
    cxTmp += lhs;//充分考虑了代码的复用--减少后期维护的开销
    //当考虑到代码较多时，这时候应进行封装
    //函数只完成一个功能！不能多了，否则后期的维护量很大
    cxTmp += rhs;
    return cxTmp;
    //return Complex(dreal_ + rhs.dreal_, dimage_+rhs.dimage_);
}

Complex& Complex::operator ++()//前置++返回的是对象本身
{
    ++dreal_;
    ++dimage_;

    return *this;
}
Complex Complex::operator ++(int)//后置++返回一个临时对象
{
    double dreal_tmp = dreal_;
    double dimage_tmp = dimage_;

    dreal_++;
    dimage_++;
    return Complex(dreal_tmp, dimage_tmp);
}

#if 0
Complex operator +(Complex &lhs, Complex &rhs)
{
    return Complex(lhs.dreal_+rhs.dreal_, 
                  lhs.dimage_+rhs.dimage_);
}
#endif

int main(void)
{
    Complex cx1(1.0, 2.0);
    Complex cx2(3.0, 4.0);


    //Complex cxRes = cx1 + cx2;
    Complex cxRes;
    cxRes += cx2;;
    //Complex cx1;
    cx1 += cx2;

    std::cout<<"csRex1=";
    cxRes.display();
    std::cout<<"cx1=";
    cx1.display();
    std::cout<<std::endl;

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    cxRes = cx1 + cx2;
    std::cout<<"csRes=";
    cxRes.display();


    Complex cx4 = ++cx2;
    std::cout<<"cx4=";
    cx4.display();

    std::cout<<"++cx2=";
    cx2.display();

    Complex cx3 = cx2++;
    std::cout<<"cx3=";
    cx3.display();

    std::cout<<"cx2++=";
    cx2.display();
    int e = a + b;
    return 0;
}
