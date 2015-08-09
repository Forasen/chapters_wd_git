/*************************************************************************
    > File Name: alter_char.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 11:26:11 AM CST
 ************************************************************************/

#include<iostream>

//const char &get_char(std::string &str, std::string::size_type ix)
char &get_char(std::string &str, std::string::size_type ix)
{
    return str[ix];
}

int main()
{
    std::string tmp("Hello World");
    std::cout<<"before>>"<<tmp<<std::endl;

    get_char(tmp, 0) = 'A';
    std::cout<<"after>>"<<tmp<<std::endl;

    return 0;
}
