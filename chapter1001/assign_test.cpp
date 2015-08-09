/*********************************************
    > File  : assign_test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 09:27:52 AM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<stdio.h>

using namespace std;
#include<stdlib.h>
#if 0
CMyString& operator=(const CMyString& rhs)
{
    if(this != rhs)
    {
        CMyString rhsTemp(rhs);
        char* pTemp = rhs.m_pData_;
        rhs.m_pData_ = m_pData_;
        m_pData_ = pTemp;
    }
}

CMyString& operator=(const CMyString& rhs)
{
    char* pTemp = m_pData_;
    m_pData_ = new char(*rhs.m_pData_);
    delete pTemp;
    return *this;
}
#endif



int main(void)
{
    char* p = "h hh   jj ";
 
    char *m;
   // p = m;
    m = new char(*p);
    //* p
 //   std::cout<<"sizeof(p)="<<strlen(p)<<std::endl;
 //   std::cout<<"*p : "<<*p<<std::endl;
 //   std::cout<<"p = "<<p<<std::endl;

 //   std::cout<<"sizeof(m)="<<strlen(m)<<std::endl;
 //   std::cout<<"*m : "<<*m<<std::endl;
    std::cout<<"m = "<<m<<std::endl;

    return 0;
}
