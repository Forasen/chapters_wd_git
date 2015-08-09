/*************************************************************************
> File Name: reset_arr.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Sun 14 Jun 2015 11:37:43 AM CST
************************************************************************/

#include<iostream>

int &reset_arr(int* arr, int index)
{
    return arr[index];
}

int main()
{
    int arr[10];
    int index = 0;
    while(index < 10)
    {
        reset_arr(arr, index++) = 0;
    }
    for(size_t i=0; i<10; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
