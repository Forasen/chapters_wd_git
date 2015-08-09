/*************************************************************************
    > File Name: string_io_stream.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 08:44:35 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<sstream>

int main(void)
{
    int ival = 512;
    int ival2 = 1024;
    std::stringstream ss;
    ss<<"ival="<<ival<<" "<<"ival2="<<ival2<<std::endl;

    //std::cout<<"before:"<<ss<<std::endl;

    std::string str = ss.str();
    std::cout<<str<<std::endl;

    while(ss>>str)
    {
        std::cout<<str<<std::endl;
    }

    return 0;
}
