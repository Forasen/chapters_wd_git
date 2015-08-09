/*************************************************************************
    > File Name: inline_shorter_string.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 04:34:23 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>

inline const std::string &shorter_string(const std::string &str1, const std::string &str2)
{
    return (str1.size() < str2.size()) ? str1 : str2;
}

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        std::cout<<"usage:string1, string2"<<std::endl;
    }

    std::string s1 = argv[1];
    std::string s2 = argv[2];
    std::cout<<"result>>"<<shorter_string(s1, s2)<<std::endl;

    return 0;
}
