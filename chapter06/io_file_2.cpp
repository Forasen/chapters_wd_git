/*************************************************************************
    > File Name: io_file_2.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 04:22:32 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<sstream>
int test()
{
    int ival = 512;
    int ival2 = 1024;
    std::stringstream ss;
    ss<<"ival= "<<ival<<", "<<" ival2= "<<ival2<<std::endl;

    std::string str = ss.str();
    std::cout<<str;

    while(ss>>str)
    {
        std::cout<<str<<std::endl;
    }

    return 0;
}

int main(void)
{
    std::string line;
    std::stringstream ss;

    while(getline(std::cin, line))
    {
        std::stringstream ss(line);

        std::string word;
        while(ss>>word)
        {
            std::cout<<word<<std::endl;
        }
    }
}
