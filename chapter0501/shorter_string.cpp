/*************************************************************************
    > File Name: shorter_string.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 11:09:07 AM CST
 ************************************************************************/

#include<iostream>

const std::string &find_shorter_string(const std::string &s1, const std::string &s2)
{
    return (s1.size() < s2.size()) ? s1 : s2;
}

int main(int argc, char* argv[])

{
    std::string s1 = argv[1];
    std::string s2 = argv[2];

    std::cout<<"result>>"<<std::endl;
    std::cout<<find_shorter_string(s1, s2)<<std::endl;
}
