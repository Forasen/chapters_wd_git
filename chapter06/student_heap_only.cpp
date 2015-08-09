/*************************************************************************
    > File Name: stack_object.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 10:24:12 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>

class student
{
private:
    ~student()
    {
        std::cout<<"~student() has been called!"<<std::endl;
    }
    int sno_;
    char sname_[20];

#if 0
public:
    static void* operator new(std::size_t size)
    {
        std::cout<<"opertor new has been called"<<std::endl;
        //void* pret = (void*)calloc(1, sizeof(viod*));
        void* pret = (void*)malloc(sizeof(size));
        
        return pret;
    }
    static void operator delete(void *pvoid)
    {
        std::cout<<"opertor delete has been called!"<<std::endl;
        free(pvoid);
    }
#endif

public:
    student()
    {
        std::cout<<"student() has been called!"<<std::endl;
    }

    void set_id(int id)
    {
        sno_ = id;
    }
    void set_name(char* name)
    {
        strcpy(sname_, name);
    }
    void print()
    {
        std::cout<<"sno:"<<sno_<<", "<<"sname:"<<sname_<<std::endl;
    }

    void destroy()
    {
        std::cout<<"destroy func"<<std::endl;
        //this->~student();//会内存泄漏
        delete this;//这样才是正确的
    }

    static void* operator new(std::size_t size)
    {
        std::cout<<"operator new(int)"<<std::endl;
        void* pret = malloc(size);
        return pret;
    }

    static void operator delete(void* pvoid)
    {
        std::cout<<"operator delete"<<std::endl;
    }

};

int main(void)
{

#if 0
    student s1;
    s1.set_id(110);
    s1.set_name("zhangsan");
#endif
#if 1
    student *pstu = new student;
    //不能生成栈对象
    pstu->set_id(120);
    pstu->set_name("lisi");
    pstu->print();
    pstu->destroy();
    //delete pstu;
    return 0;

#endif
}
