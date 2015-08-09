/*********************************************
> File  : employee_standard_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 03:31:04 PM CST
 ********************************************/

#include<iostream>
#include<cstring>

using namespace std;

class TestEmploy
{
public:
    TestEmploy()
    {
        std::cout<<"TestEmploy()"<<std::endl;
        no_ = ++number;
    }
    TestEmploy(std::string& str)
        :name_(str)
    {
        std::cout<<"TestEmploy(std::string& str)"<<std::endl;
        no_ = ++number;
    }
    TestEmploy(const TestEmploy& rhs)
    {
        std::cout<<"TestEmploy(const TestEmploy& rhs)"<<std::endl;
        name_ = rhs.name_;
        no_ = ++number;
    }
#if 0
    TestEmploy& operator=(const TestEmploy& rhs)   //1.如果未将其注释的话，明明没有对no_进行++为什么te3的序号会自动增加
    {
        std::cout<<"TestEmploy& operator=(const TestEmploy& rhs)"<<std::endl;
        if(this != &rhs)
        {
            name_ = rhs.name_;
        }
        return *this;
    }
#endif
    std::string& get_name()
    {
        return name_;
    }
    int get_no()
    {
        return no_;
    }
    ~TestEmploy()
    {
        std::cout<<"~TestEmploy()"<<std::endl;
        //delete name_;
    }
    static int number;

private:
    std::string name_;
    int no_;

};

int TestEmploy::number = 2015000;

void func(TestEmploy& te)
{
    std::cout<<"No. : "<<te.get_no()<<"\t"<<"Name : "<<te.get_name()<<std::endl;
}

int main(void)
{
    std::string str = "hello";
    TestEmploy te1(str), te2=te1, te3;
    te3 = te1;
    func(te1);
    func(te2);
    func(te3);

    std::string str2 = "xiaoming";
    TestEmploy* pTe =  new TestEmploy(str2);
    func(*pTe);
    delete pTe;

    return 0;
}
