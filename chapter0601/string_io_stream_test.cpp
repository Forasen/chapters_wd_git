/*************************************************************************
    > File Name: string_io_stream_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 08:53:05 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<sstream>

int main(void)
{
    int ival1 = 512;
    int ival2 = 1024;
    std::stringstream ss;
    ss<<"ival1 = "<<ival1<<" ival2 = "<<ival2<<std::endl;

    std::string str;
    str = ss.str();
    std::cout<<str<<std::endl;

    while(ss>>str)
    {
        std::cout<<str<<std::endl;
    }

    return 0;
}
