/*********************************************
    > File  : template_arr_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 10:51:52 AM CST
 ********************************************/

#include<iostream>

template <class T>
T MAX(T a, T b)
{
    std::cout<<"MAX(T a, T b):";
    return a > b ? a : b;
}

template <class T>
T MAX_ARR(T a[], int n)
{
    std::cout<<"MAX_ARR(T a[], int n):";
    T temp = a[0];
    for(size_t index=0; index<n; index++)
    {
        if(temp < a[index])
        {
            temp=a[index];
        }
    }
    return temp;
}

int main(void)
{
    int aa = 2; 
    int b = 3;
    int a[] = {2, 3, 1, 4, 5};
    std::cout<<MAX(aa, b)<<std::endl;
    std::cout<<MAX_ARR(a, sizeof(a)/sizeof(a[0]))<<std::endl;

    return 0;
}
