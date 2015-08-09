/*************************************************************************
    > File Name: io.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 02:42:15 PM CST
 ************************************************************************/

#include<iostream>

void printCin()
{
    std::cout<<"bad: "<<std::cin.bad()<<std::endl;
    std::cout<<"fail:"<<std::cin.fail()<<std::endl;
    std::cout<<"eof: "<<std::cin.eof()<<std::endl;
    std::cout<<"good:"<<std::cin.good()<<std::endl;
}

int main()
{
    printCin();

    int num;
    while(std::cin>>num)
    {
        std::cout<<num<<std::endl;
    }
    printCin();

    std::cin.clear();
    std::cin.ignore(1024, '\n');//回复流的状态，将good重新置为1，其他置为0
    std::cout<<std::endl;

    printCin();

    while(std::cin>>num)
    {
        std::cout<<num<<std::endl;
    }

    std::cout<<std::endl;

    printCin();

    return 0;
}
