/*********************************************
> File  : vector_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 08:08:02 AM CST
********************************************/

#include<iostream>
#include<vector>
#include<memory>
#include<new>

using namespace std;
#if 0
std::vector<int>* func()
{
    //std::vector<int>* pvec = new std::vector<int>;
    //return new (std::nothrow) std::vector<int>;
    shared_ptr<std::vector<int> > p(std::vector<int>);
    return p.get();
    //return pvec;
}

void use_factor(T arg)
{
    shared_ptr p = factor(arg);
}
shared_ptr factor(T& arg)
{
    return make_ptr<Foo>(arg);
}
void read(std::vector<int>& vec)
{
    std::cout<<"Enter numbers:"<<std::endl;
    int n;
    while(std::cin>>n)
    {
        vec.push_back(n);
    }
}

void write(std::vector<int>& vec)
{
    std::cout<<"+++++++++++++++++"<<std::endl;
    for(const auto& v : vec)
    {
        std::cout<<v<<" ";
    }
    #if 0
    std::vector<int>::iterator vec_it;
    for(vec_it=vec.begin(); vec_it!=vec.end(); vec_it++)
    {
        std::cout<<*vec_it<<" ";
    }
    #endif
    std::cout<<std::endl;
}

shared_ptr factory(T& arg)
{
    return make_ptr<Foo>(arg);
}
#endif
int main(void)
{
    std::vector<std::string> v1;
    {
        std::vector<std::string> vec = {
            "hello", "world", "wahaha"
        };
        v1 = vec;
    }

    for(auto const& v : v1)
    {
        std::cout<<v<<" ";
    }
    std::cout<<std::endl;
    #if 0
    std::cout<<std::endl;
    std::vector<int >* vec = func();
    if(vec == nullptr)
    {
        std::cout<<"内存不足！"<<std::endl;
        return -1;
    }
    read(*vec);
    write(*vec);

    //std::shared_ptr<std::list<int> > li;
    shared_ptr<std::string> li;
    if(li && li->empty())
    {
        *li = "hello world";
    }
    std::cout<<"*li : "<<li->mem<<std::endl;

    shared_ptr<int> p = make_ptr<int>(42);
    //delete vec;
    //vec = nullptr;
    auto p6 = make_ptr<int>(1024);
    auto p7(p6);
    #endif
    return 0;
}
