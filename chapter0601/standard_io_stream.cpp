/*************************************************************************
    > File Name: standard_io_stream.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 08:30:22 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>

void printCin()
{
    std::cout<<"bad :"<<std::cin.bad()<<std::endl;
    std::cout<<"fail:"<<std::cin.fail()<<std::endl;
    std::cout<<"eof :"<<std::cin.eof()<<std::endl;
    std::cout<<"good:"<<std::cin.good()<<std::endl;
}

int main(void)
{
    std::cout<<"start>>"<<std::endl;
    printCin();
    
    int num;
    while(std::cin>>num)
    {
        std::cout<<num<<std::endl;
    }
    std::cout<<std::endl;
    printCin();

    std::cin.clear();
    printCin();
    std::cin.ignore(1024, '\n');

    std::string s;
    std::cin>>s;
    std::cout<<s<<std::endl;

    return 0;

}
