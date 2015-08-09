/*********************************************
> File  : employee.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 02:25:00 PM CST
 ********************************************/

#include<iostream>
#include<cstring>

class Employee
{
public:
    Employee()
    {
        no_++;
    }
    Employee(std::string str)
        :name_(str)
    {
        no_++;
    }
    void showInfo()
    {
        std::cout<<"No.:"<<no_<<"\t"<<"Name:"<<name_<<std::endl;
    }


private:
    static int no_;
    std::string name_;
};

int Employee::no_ = 201500;

int main(void)
{
    Employee e1("LiMing");
    e1.showInfo();

    std::cout<<std::endl;

    Employee e2;
    e2.showInfo();

    return 0;
}
