/*********************************************
> File  : test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 09:41:38 AM CST
 ********************************************/

#include<iostream>

int f(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return f(n-1) + f(n-2);
    }
}

int main(void)
{
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    for(size_t index=1; index<=n; index++)
    {
        if(index > 1)
        {
            std::cout<<" ";
        }
        std::cout<<f(index);
        if(n % 10 == 0)
        {
            std::cout<<std::endl;
        }
    }
    std::cout<<std::endl;
    return 0;
}
