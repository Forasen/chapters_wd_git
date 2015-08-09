/*********************************************
> File  : fibonacci.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 09:29:37 AM CST
 ********************************************/

#include<iostream>

int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n - 2);
    }
};
int main(void)
{
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    int sum = 0;
#if 0
    for(int i=1; i<=n ;i++)
    {
        sum += fibonacci(i);
    }
#endif
    std::cout<<"sum = "<<fibonacci(n)<<std::endl;

    return 0;
}
