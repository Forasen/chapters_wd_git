/*********************************************
    > File  : string.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 03:04:15 PM CST
 ********************************************/

#include<iostream>
#include<stdio.h>
#include<cstring>

int main(void)
{
    std::string s1 = "hello world!";
    std::string s2 = s1;

    std::string s3 = s1;
    std::string s4 = s3;
    std::cout<<"s1="<<s1<<std::endl;
    std::cout<<"s2="<<s2<<std::endl;
    std::cout<<"s3="<<s3<<std::endl;
    std::cout<<"s4="<<s4<<std::endl;

    const char* ps1 = s1.c_str();
    const char* ps2 = s2.c_str();
    const char* ps3 = s3.c_str();
    const char* ps4 = s4.c_str();

    printf("ps1=%x\n", ps1);
    printf("ps2=%x\n", ps2);
    printf("ps3=%x\n", ps3);
    printf("ps4=%x\n", ps4);


	std::cout<<"s1[0]:"<<s1[0]<<std::endl;

    //s2[0] = 'x';
    std::cout<<std::endl;
    std::cout<<"s1="<<s1<<std::endl;
    std::cout<<"s2="<<s2<<std::endl;
    std::cout<<"s3="<<s3<<std::endl;
    std::cout<<"s4="<<s4<<std::endl;

    ps2 = s2.c_str();
    printf("ps1=%x\n", ps1);
    printf("ps2=%x\n", ps2);
    printf("ps3=%x\n", ps3);
    printf("ps4=%x\n", ps4);

    std::cout<<"s1's size="<<sizeof(s1.c_str())<<std::endl;
    std::cout<<"s2's size="<<sizeof(s2.c_str())<<std::endl;
    std::cout<<"s3's size="<<sizeof(s3.c_str())<<std::endl;
    std::cout<<"s4's size="<<sizeof(s4.c_str())<<std::endl;

    std::cout<<std::endl;

    std::cout<<"s1's length ="<<s1.size()<<std::endl;
    std::cout<<"s1.capacity()="<<s1.capacity()<<std::endl;

    s1.push_back('w');
    std::cout<<"s1's length ="<<s1.size()<<std::endl;
    std::cout<<"s1.capacity()="<<s1.capacity()<<std::endl;

    return 0;
}
