/*********************************************
> File  : test_srand.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 04:08:26 PM CST
 ********************************************/

#include<iostream>
#include<ctime>
#include<cstdlib>

int main(void)
{
    std::srand(std::time(NULL));
    int random_value = std::rand() % 100;
    std::cout<<"RAND_MAX : "<<RAND_MAX<<std::endl;
    std::cout<<"random_value : "<<random_value<<std::endl;

    return 0;
}
