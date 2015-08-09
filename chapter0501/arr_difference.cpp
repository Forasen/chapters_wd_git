/*************************************************************************
    > File Name: arr_difference.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 09:07:34 AM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#if 1
int arr_add(int arr[], size_t size)
{
    std::cout<<"arr_add(int arr[]) has been called!"<<std::endl;
    int sum = 0;
    int index = 0;
    while(index < size)
    {
        //std::cout<<"while has been called"<<std::endl;
        sum += arr[index];
        index++;
    }
    return sum;
}
#endif

#if 1
int arr_add(int* beg, int* end)
{
    std::cout<<"arr_add(int* beg, int* end) has been called!"<<std::endl;
    int sum = 0;
    while(beg != end)
    {
        sum += *beg++;
    }
    return sum;
}
#endif
#if 1
int arr_add(int (&arr)[10])
{
    std::cout<<"arr_add(int (&arr)[10]) has been called!"<<std::endl;
    int sum = 0;
    int index = 0;
    while(index < 10)
    {
        sum += arr[index++];
    }
    return sum;
}
#endif

int main(void)
{
    int j[10] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };

    std::cout<<"result_1="<<arr_add(j, 10)<<std::endl;
    std::cout<<"result_2="<<arr_add(j, j+10)<<std::endl;
    std::cout<<"result_1="<<arr_add(j)<<std::endl;


    return 0;
}

