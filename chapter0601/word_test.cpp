/*************************************************************************
    > File Name: word_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 10:06:18 PM CST
 ************************************************************************/

#include<iostream>

int main(void)
{
    std::string str;
    std::cout<<"Enter a string1"<<std::endl;
    std::cin>>str;
    int index = 0;
    while(str[index])
    {
        std::cout<<str[index++]<<std::endl;
        
    }

    return 0;
}
