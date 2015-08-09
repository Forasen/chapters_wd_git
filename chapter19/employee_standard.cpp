/*********************************************
> File  : employee_standard.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 02:47:41 PM CST
********************************************/

#include<iostream>
#include<cstring>

using namespace std;

template<typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

class Employee
{
    public:
    static int number;
    Employee()
    {
        no_ = ++number;
    }
    Employee(std::string& str)
    :name_(str)
    {
    Employee e1("XiaoQiang"), e2 = e1, e3;
        no_ = ++number;
    }
    Employee(const Employee& rhs)
    {
        name_ = rhs.name_;
        no_ = ++number;//********
    }
    const std::string &get_name()
    {
        return name_;
    }
    int get_no()
    {
        return no_;
    }
    Employee& operator=(const Employee& rhs)
    {
        if(this != &rhs)
        {
            name_ = rhs.name_;
            #if 0
            Employee tmp = rhs;
            swap(tmp.no_, no_);
            swap(tmp.name_, name_);
            #endif
            //no_ = ++number;
        }
        return *this;
    }

    private:
    std::string name_;
    int no_;
};

int Employee::number = 2015000;

void func(Employee& e)
{
    std::cout<<"No. : "<<e.get_no()<<"\t"<<"Name : "<<e.get_name()<<std::endl;
}

int main(void)
{
    std::string str = "xiaoming";
    //Employee e1("XiaoQiang"), e2 = e1, e3;
    Employee e1(str), e2 = e1, e3;
    e3 = e1;
    func(e1);
    func(e2);
    func(e3);

    return 0;
}
