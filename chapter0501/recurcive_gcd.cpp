/*************************************************************************
    > File Name: recurcive_gcd.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 02:51:00 PM CST
 ************************************************************************/

#include<iostream>

void swap(int &v1, int &v2)
{
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}

int recurcive_gcd(int val1, int val2)
{
   if(val1 < val2)
    {
        swap(val1, val2);
    }
    while(val2 > 0)
    {
        return recurcive_gcd(val2, val1 % val2);
    }
    return val1;
}

int main(void)
{
    int i, j;
    std::cout<<"Enter two numbers>>";
    std::cin>>i>>j;
    std::cout<<"the greatest common divisor is: "<<recurcive_gcd(i, j)<<std::endl;

    return 0;
}
