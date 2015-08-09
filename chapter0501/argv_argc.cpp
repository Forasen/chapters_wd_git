/*************************************************************************
    > File Name: test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 10:22:13 AM CST
 ************************************************************************/

#include<iostream>

int main(int argc, char* argv[])
{
    for(size_t index=0; index<argc; index++)
    {
        std::cout<<argv[index]<<std::endl;
    }

    return 0;
}
