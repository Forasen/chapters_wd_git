/*********************************************
> File  : Simple.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 11:28:29 AM CST
 ********************************************/

#include<iostream>
#include<memory>

class Simple
{
private:
//public:
    std::string index_extend_;
    int number_;
public:
    Simple(int num = 0)
        :number_(num)
    {
        std::cout<<"Simple(int num)! ret = "<<number_<<std::endl;
    }
    ~Simple()
    {
        std::cout<<"~Simple()! ret = "<<number_<<std::endl;
    }
    void printSimple()
    {
        std::cout<<"printSimple : "<<index_extend_<<std::endl;
    }
};

int main(void)
{
    std::auto_ptr<Simple> my_memory(new Simple(1));

    if(my_memory.get())
    {
        my_memory->printSimple();
    }
    my_memory.get()->index_extend_ = "hello";
    my_memory->printSimple();

    (*my_memory).index_extend_ += ", world!";
    (*my_memory).printSimple();

    return 0;
}
