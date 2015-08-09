/*********************************************
    > File  : traverse.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 11:08:15 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<cstring>
#include<list>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

class CMyString;
std::ostream& operator<<(std::ostream &os, const CMyString &rhs);
CMyString operator+(const CMyString &s1, const CMyString &s2);

class CMyString
{
private:
    char* m_pData_;
public:
    CMyString()
    {
        m_pData_ = new char[1];
        m_pData_[0] = '\0';
    }
    CMyString(const char* buf)
    {
        if(buf == NULL)
        {
            m_pData_ = new char[1];
            m_pData_ = '\0';
        }
        else
        {
            m_pData_ = new char[strlen(buf) + 1];
            strcpy(m_pData_, buf);
        }
    }
    ~CMyString()
    {
        delete []m_pData_;
        m_pData_ = NULL;
    }
    CMyString(const CMyString &rhs)
    {
        m_pData_ = new char[strlen(rhs.m_pData_) + 1];
        strcpy(m_pData_, rhs.m_pData_);
    }
    bool operator==(const CMyString &rhs) const
    {
        return (strcmp(this->m_pData_, rhs.m_pData_) == 0);
    }
    bool operator < (const CMyString &rhs) const
    {
        return (strcmp(this->m_pData_, rhs.m_pData_) < 0);
    }
    bool operator > (const CMyString &rhs) const
    {
        return (strcmp(this->m_pData_, rhs.m_pData_) > 0);
    }
    CMyString& operator=(const CMyString &rhs)
    {
        if(this != &rhs)
        {
            CMyString tmp(rhs);
            char* chTmp = rhs.m_pData_;
            rhs.m_pData_ = m_pData_;
            m_pData_ = chTmp;
        }
        return *this;
    }

    char& operator[](const unsigned int &index)
    {
        return m_pData_[index];
    }
    operator char*()
    {
        return m_pData_;
    }
    friend CMystring operator+(const CMyString &s1, const CMyString &s2);
    friend std::ostream& operator<<(std::ostream &os, const CMyString &rhs);
    int getLen()
    {
        return strlen(m_pData_) + 1;
    }
    char* getBuf()
    {
        return m_pData_;
    }
    void print(CMyString &rhs);
};

std::ostream& operator<<(std::ostream& os, const CMyString &rhs)
{
    os << rhs.m_pData_;
    return os;
}
void print(CMyString &rhs)
{
    std::cout<<rhs.m_pData_<<std::endl;
}

void testVector()
{
    vector<CMyString> obV;
    obV.push_back("A");
    obV.push_back("B");
    obV.push_back("C");
    obV.push_back(CMyString("A"));
    obV.push_back(CMyString("B"));
    obV.push_back(CMyString("C"));
    for_each(obV.begin(), obV.end(), print);
    cout<<endl;

    sort(obV.begin(), obV.end());//需要运算符<的重载
    std::vector<CMyString>::iterator itV_B = std::find(obV.begin(), obV.end(), CMyString("B"));
    if(itV_B != obV.end())
    {
        obV.erase(itV_B, obV.end());
    }
    for_each(obV.begin(), obv>end(), print);
    std::cout<<std::endl<<std::endl;
}

void testList()
{
    list<CMyString> obL;
    obL.push_back("X");
    obL.push_back("Y");
    obL.push_back("Z");
    obL.push_back("X");
    obL.push_back("Y");
    obL.push_back("Z");

    for_each(obLy.begin(), obL.end(), print);
    std::cout<<std::endl;

    obL.sort();
    for_each(obL.begin(), obL.end(), print);
    
    std::list<CMyString>::iterator itL_Y = std::find(obL.begin(), obL.end(), "Y");
    if(itL_Y != obL.end())
    {
        obL.erase(itL_Y);
        std::cout<<"after delete Y";
        for_each(obL.begin(), obL.end(), print);
    }
    std::cout<<std::endl;

    std::list<CMyString>::iterator itL_Z = std::find(obL.begin(), obL.end(), "Z");
    if(itL_Z != obL.end())
    {
        obL.erase(itL_Z, obL.end());
        std::cout<<"after delete Z to the end:";
        for_each(obL.begin(), obL.end(), print);
    }
    std::cout<<std::endl;
    y
}

void testMap()
{
    pair<CMyString, std::string> arr[] =
    {
        pair<CMyString, std::string>("Beijing", "huabei"),
        pair<CMyString, std::string>("shenzhen", "huanan")
    };
    map<CMyString, std::string> obM(arr, arr+2);
    obM.insert(std::pair(CMyString, string)("hangzhou", "huadong"));
    obM["wuhan"] = "huazhong";
    obM["xiamen"] = "huanan";
    obM["shanghai"] = "huadong";
    for_each(obM.begin(), obM.end(), print);
    std::cout<<std::endl;

    //std::find(obM.begin(), obM.end(), std::pair("xiamen", "huanan"));
    map<CMyString, std::string>::iterator itM = std::find("xiamen");
    if(itM != obM.end())
    {
        obM.erase(itM);
        std::cout<<"after delete ximen : ";
        for_each(obM.begin(), obM.end(), print);
    }
    std::cout<<std::endl;
}

int main(void)
{
    testVector();

    testList();

    testMap();

    return 0;
}
