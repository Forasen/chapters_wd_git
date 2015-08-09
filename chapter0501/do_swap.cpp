/*************************************************************************
    > File Name: test1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 10:28:20 AM CST
 ************************************************************************/

#include<iostream>

void do_swap(int &val1, int &val2)
{
    int tmp = val1;
    val1 = val2;
    val2 = tmp;
}

void swap(int &val1, int &val2)
{
    if(val1 == val2)
    {
        return;
    }
    else
    {
        return do_swap(val1, val2);
    }
}

int main(void)
{
    int i, j;
    std::cin>>i>>j;
    swap(i, j);
    std::cout<<"result>>"<<i<<", "<<j<<std::endl;

    return 0;
}
