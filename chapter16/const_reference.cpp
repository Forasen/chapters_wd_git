/*********************************************
> File  : const_reference.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 10:49:19 PM CST
 ********************************************/

#include<iostream>
#include<stdio.h>

int main(void)
{
#if 0
    //double dval = 10.1;
    int dval = 10;
    //const int &ri = dval;
    const int &ri = dval;
    //ri = 12;

    std::cout<<"dval = "<<dval<<std::endl;
    std::cout<<"ri = "<<ri<<std::endl;
#endif

    int val = 5;
    const int* const pval = &val;
    printf("*pval = %d\n", *pval);
    printf("pval = %x\n", pval);

    *pval = 10;
    //val  = 15;

    std::cout<<"+++++++++after *pval = 10!+++++++++++++++"<<std::endl;
    printf("*pval = %d\n", *pval);
    printf("pval = %x\n", pval);


#if 0
    int& ri2 = dval;
    ri2 = 12;
    std::cout<<"after mending……"<<std::endl;
    std::cout<<"dval = "<<dval<<std::endl;
    std::cout<<"ri = "<<ri<<std::endl;
    std::cout<<"ri2 = "<<ri<<std::endl;
#endif
    return 0;
}
