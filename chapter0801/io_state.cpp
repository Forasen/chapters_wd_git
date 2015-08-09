/*****************************************************
> File  : io_state.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 17 Jun 2015 08:23:05 AM CST
****************************************************/

#include<iostream>
#include<fstream>
#include<cstring>
#include<sstream>
#include<unistd.h>
#include<errno.h>
#include<stdexcept>
#include<limits>


void print_state()
{
    std::cout<<"bad :"<<std::cin.bad()<<std::endl;
    std::cout<<"fail:"<<std::cin.fail()<<std::endl;
    std::cout<<"good:"<<std::cin.good()<<std::endl;
    std::cout<<"eof :"<<std::cin.eof()<<std::endl;
}
int main(void)
{
#if 0
    int ival;

    while(std::cin>>ival, !std::cin.eof())
    {
        if(std::cin.bad())
        {
            print_state();
            throw std::runtime_error("IO stream corrupted!");
            return -1;
        }
        if(std::cin.fail())
        {
            print_state();

            std::cout<<"\n"<<"after rdstate!"<<std::endl;
            std::istream::iostate old_state = std::cin.rdstate();
            std::cout<<"rdstate:"<<old_state<<std::endl;

            std::cin.clear();
            std::cin.clear(old_state);

            std::cout<<"\n"<<"after rdstate reset!!!!!"<<std::endl;
            std::cout<<"rdstate:"<<old_state<<std::endl;

            std::cerr<<"bad data! try again!"<<std::endl;
            std::cout<<"\n"<<"after clear"<<std::endl;
            std::cin.clear(std::istream::failbit);
            std::cout<<"\nafter ignore"<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            continue;
        }
        std::cout<<"ival="<<ival<<std::endl;
    }
#endif

#if 0
    print_state();

    if(std::cin)
    {
        while(std::cin>>ival)
        {
            std::cout<<"ival="<<ival<<std::endl;
        }
    }
    print_state();

    std::cout<<std::endl;
    std::cout<<"after clear!"<<std::endl;
    std::cin.clear();

    print_state();
#endif

#if 0
    std::cout<<"hi!"<<std::flush;
    std::cout<<"hi2!"<<std::ends;
    std::cout<<"hi3!"<<std::endl;
#endif

    //std::cout<<std::unitbuf<<"first"<<"second"<<std::nounitbuf;
    std::cout<<"first"<<std::flush<< " second"<<std::flush;
    return 0;
}
