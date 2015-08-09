/*********************************************
> File  : copy_on_write.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 09:49:29 AM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<stdio.h>

int main(void)
{


    if(RefCnt > 0)
    {
        char* tmp = (char*)calloc(1, strlen(pstr_)+1);
        strcpy(tmp, pstr_);
        pstr_ = tmp;
    }

    std::string str1 = "hello world";
    std::string str2(str1);// = str1;
    std::cout<<"share the memory!"<<std::endl;
    printf("\tstr1 = %x\n", str1.c_str());
    printf("\tstr2 = %x\n", str2.c_str());

    str2[1] = 'q';
    str1[1] = 'w';

    std::cout<<"after modfied!"<<std::endl;
    printf("\tstr1 = %x\n", str1.c_str());
    printf("\tstr2 = %x\n", str2.c_str());
    return 0;
}
