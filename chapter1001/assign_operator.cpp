/*********************************************
    > File  : assign_operator.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 08:27:11 AM CST
 ********************************************/

#include<iostream>
#include<cstring>

class CMyString
{
public:
    CMyString(char* p_Data=NULL);
    CMyString(const CMyString& rhs);
    ~CMyString(void);

    CMyString& operator=(const CMyString& rhs);

    void print();
private:
    char* m_pData;
};

CMyString& CMyString::operator=(const CMyString& rhs)
{
    if(this != &rhs)
    {
        CMyString strTemp(rhs);

        char* pTemp = strTemp.m_pData;
        strTemp.m_pData = m_pData;
        m_pData = pTemp;
    }
    return *this;
}

CMyString::CMyString(char* p_Data)
{
    if(p_Data == NULL)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int len = strlen(p_Data);
        m_pData = new char[len+1];
        strcpy(m_pData, p_Data);
    }
}

CMyString::CMyString(const CMyString& rhs)
{
    int len = strlen(rhs.m_pData);
    m_pData = new char[len+1];
    strcpy(m_pData, rhs.m_pData);
}

CMyString::~CMyString()
{
    delete []m_pData;
}

void CMyString::print()
{
    std::cout<<"m_pData : "<<m_pData<<std::endl;
}

int main(void)
{
    //std::string str = "Hello World!";
    CMyString cms1("Hello");
    std::cout<<"cms1:";
    cms1.print();
    CMyString cms2 = cms1;

    std::cout<<std::endl;
    std::cout<<"cms2:";
    cms2.print();
    cms1 = cms1;

    std::cout<<std::endl;

    std::cout<<"cms1:";
    cms1.print();

    CMyString cms3;
    CMyString cms4;
    cms3 = cms4 = cms1;

    std::cout<<std::endl;
    std::cout<<"cms3:";
    cms3.print();
    std::cout<<std::endl;
    std::cout<<"cms4:";
    cms4.print();

    return 0;
}
