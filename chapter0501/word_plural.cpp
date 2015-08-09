/*************************************************************************
    > File Name: word_plural.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 11:00:14 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

string word_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr == 1) ? word : word + ending;
}

int main(int argc, char* argv[])
{
    string str;
    std::cin>>str;
    string ending = "s";

    std::cout<<"result>>"<<word_plural(2, str, ending)<<std::endl;

    return 0;
}

