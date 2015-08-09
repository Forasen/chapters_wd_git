/*************************************************************************
    > File Name: 0613_task.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 11:13:05 AM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<cstring>
class String
{
    private:
    char* pstr_;
public:
    String()
    {
        //pstr_ = NULL;
        pstr_ = new char[100];//要提供一个空间，想清楚究竟为了什么过来！
        //这是一个坑//必考的笔试题//对
        //pstr_ = '\0';
        //pstr_ = "";
    }

    String(const char* pstr)
    {
        std::cout<<"String(const char*) has been called!"<<std::endl;
        pstr = new char[strlen(pstr) + 1];
        strcpy(pstr_, pstr);
    }

    String(const String &str)
    {
        std::cout<<"String(const String &str) has been called!"<<std::endl;
        pstr_ = new char[strlen(str.pstr_) + 1];
        strcpy(pstr_, str.pstr_);
    }


    String &operator =(const String &str)
    {
        std::cout<<"String operator has called"<<std::endl;
        if(this != &str)
        {
            delete []pstr_;
            pstr_ = new char[strlen(str.pstr_) + 1];//必须先删除原来申请的空间，然后在分配！
            strcpy(pstr_, str.pstr_);
        }

        return *this;
    }
    void print()
    {
        //std::cout<<"pstr_:"<<pstr_<<std::endl;
        printf("%s\n", pstr_);
    }

    ~String()
    {
        std::cout<<"~String() has been called!"<<std::endl;
        delete pstr_;
    }
};

int main()
{
    String s1;

    s1.print();
    //std::cout<<"hello world!"<<std::endl;

    String s2("I am second!");

    String s3 = s2;
    s1 = s3;

    s3.print();
    s1.print();
    return 0;
}
