/*************************************************************************
    > File Name: pointer.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 08:15:15 AM CST
 ************************************************************************/

#include<iostream>

void printValue(const int arr[10])
{
    for(size_t i=0; i<10; i++)
    {
        std::cout<<arr[i];
        if(i < 9)
        {
            std::cout<<" ";
        }
    }
    std::cout<<std::endl;
}

int main()
{
    int i=0;
    int j[2] = {
        0, 1
    };
    printValue(&i);
    printValue(j);

    return 0;
}
