/*********************************************
> File  : pair_vector.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 09:24:06 AM CST
********************************************/

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void test1(std::vector<std::pair<std::string, int> > &vec)
{
    std::pair<std::string, int> next_data;
    std::string first;
    int second;

    std::cout<<"请输入信息：（first[string], second[int]）"<<std::endl;
    while(std::cin>>first>>second)
    {
        next_data = std::make_pair(first, second);
        vec.push_back(next_data);
        std::cout<<"录入信息成功！"<<std::endl;
    }
}

void test2(std::vector<std::pair<std::string, int> > &vec)
{
    std::pair<std::string, int> next_data;

    std::string first;
    int second;
    next_data = std::pair<std::string, int>(first, second);

    std::cout<<"请输入信息：（first[string], second[int]）"<<std::endl;
    while(std::cin>>next_data.first>>next_data.second)
    {
        vec.push_back(next_data);
        std::cout<<"录入信息成功！"<<std::endl;
    }
}

void test3(std::vector<std::pair<std::string, int> > &vec)
{
    std::string first;
    int second;

    std::pair<std::string, int> next_data(first, second);

    std::cout<<"请输入信息：（first[string], second[int]）"<<std::endl;
    while(std::cin>>next_data.first>>next_data.second)
    {
        vec.push_back(next_data);
        std::cout<<"录入信息成功！"<<std::endl;
    }
}

int main(void)
{
    std::vector<std::pair<std::string, int> > vec;

    //test1(vec);
    //test2(vec);
    test3(vec);
    std::vector<std::pair<std::string, int> >::iterator it = vec.begin();
    while(it != vec.end())
    {
        std::cout<<"res : "<<(*it).first<<", "<<(*it).second<<std::endl;
        it++;
    }

    return 0;
}

