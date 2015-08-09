/*****************************************************
    > File  : test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 11:42:30 PM CST
 ****************************************************/

#include<iostream>

CMyString& CMyString::operator =(const CMyString &rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    delete []m_pData;
    m_pData = NULL;
    m_pData = new char[strlen(rhs.m_pData) + 1];
    strcpy(m_pData, rhs.m_pData);

    return *this;
}
