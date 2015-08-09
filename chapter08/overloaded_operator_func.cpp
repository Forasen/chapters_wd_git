/*****************************************************
    > File  : overloaded_operator_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 02:38:49 PM CST
 ****************************************************/

#include<iostream>

class Operator
{
public:
    double operator ()(double x, double y)
    {
        return x > y ? x : y;
    }
    double operator ()(double x, double y, double z)
    {
        return (x+y)*z;
    }
};

int main(void)
{
    Operator op1;
    std::cout<<"op1(2.3, 5.6)="<<op1(2.3, 5.6)<<std::endl;
    Operator op2;

    std::cout<<"op2(1, 2, 3)="<<op2(1, 2, 3)<<std::endl;

    return 0;
}

