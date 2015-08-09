/*********************************************
    > File  : sequential.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 03:51:32 PM CST
 ********************************************/

#include<iostream>
#include<list>
#include<deque>
#include<iterator>
#include<vector>

int main(void)
{
    std::vector<int> vecInt;
    std::cout<<"count:"<<vecInt.size()<<std::endl;
    double darr[5] = {
        1, 2, 3, 4, 5
    };
    //迭代器的范围是一个左闭右开区间[beg, end)
    std::deque<double> dequeDouble(darr, darr+5);
    for(size_t index=0;  index<dequeDouble.size(); index++)
    {
        std::cout<<dequeDouble[index]<< " ";
    }
    std::cout<<std::endl;



    std::deque<double>::iterator it;
    for(it=dequeDouble.begin(); it<dequeDouble.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl<<std::endl;
    
    std::list<float> listFloat(3, 5);
    std::list<float>::iterator lit;
    for(lit=listFloat.begin(); lit!=listFloat.end(); lit++)
    {
        std::cout<<*lit<<" ";
    }
    std::cout<<std::endl<<std::endl;

    std::list<float> listFloat2(4, 9);
    listFloat.swap(listFloat2);//交换两个容器的数据

    std::list<float>::iterator lit2;
    for(lit2=listFloat.begin(); lit2!=listFloat.end(); lit2++)
    {
        std::cout<<*lit2<<" ";
    }
    std::cout<<std::endl<<std::endl;

    std::list<float> listFloat3(listFloat);
    std::list<float>::iterator lit3;
    for(lit3=listFloat3.begin(); lit3!=listFloat3.end(); lit3++)
    {
        std::cout<<*lit3<<" ";
    }
    std::cout<<std::endl<<std::endl;

    return 0;
}
