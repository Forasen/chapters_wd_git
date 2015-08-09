/*************************************************************************
    > File Name: stack_object.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 10:24:12 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>

class student
{
private:
    int sno_;
    char sname_[20];

    static void* opertor new(std::size_t size);
    static void opertor delete(void *pvoid);


public:
    student()
    {
        std::cout<<"student() has been called!"<<std::endl;
    }
    ~student()
    {
        std::cout<<"~student() has been called!"<<std::endl;
    }

    void set_id(int id)
    {
        sno_ = id;
    }
    void set_name(char* name)
    {
        strcpy(sname_, name);
    }

};

int main(void)
{
    student s1;
    s1.set_id(110);
    s1.set_name("zhangsan");

    //student *pstu = new student;
    return 0;
}
