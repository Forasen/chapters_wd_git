/*****************************************************
    > File  : complex.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 10:30:25 AM CST
 ****************************************************/

#include<iostream>

class Complex
{
    friend std::stream &operator<<(std::ostream &os, Complex &rhs);

    friend std::stream &operator>>(std::ostream &is, Complex &rhs);

private:
    double dreal_;
    double dimage_;
public:
    Complex(double dreal=0.0, double dimage=0.0)
        :dreal_(dreal), dimage_(dimage)
    {}
    Complex &operator+=(const Complex &rhs);


    std::ostream& operator <<();//加入以成员函数形式重载<<，问题是第一哥操作数是this指针，与我们的要求（第一个操作数是std::ostream）相矛盾，所以不能以成员函数的方式重载<<
    //Complex operator +=(const Complex &rhs);//不推荐使用
    Complex &operator +=(const Complex &rhs);
};

std::ostream &operator<<(std::ostream &is, const Complex &rhs)
{
    is>>rhs.dreal_;
    while(is.get() != '*')
    

    }
    std::cin>>rhs.dimage_;
    return is;
}
std::ostream &operator>>(std::ostream &os, const Complex &rhs)
{
    os<<rhs.dreal_<<" + "<<rhs.dimage_<<"i";
    return os;
}
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

int main(void)
{
    Complex cx1(1.0, 2.0);
    Complex cx2(3.0, 4.0);


    Complex cxRes = cx1 + cx2;
    std::cout<<"cxRes="<<cxRes<<std::endl;
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
    cxTmp += rhs;
    return cxTmp;
    //return Complex(dreal_ + rhs.dreal_, dimage_+rhs.dimage_);
}

int main(void)
{
    Complex cx1(1.0, 2.0);
    Complex cx2(3.0, 4.0);


    Complex cxRes = cx1 + cx2;
    std::cout<<"cxRes="<<cxRes<<std::endl;

    std::string str = "hello world";
    std::cout<<str<<std::endl;

    std::cout<<"请输入一个负数"<<std::endl;

    std::cin>>csRes;
    std::cout<<csRes;
    return 0;
}
