/*********************************************
    > File  : vector_adapter.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 05:13:04 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>


int main(void)
{
    std::vector<double> dVec(10, 8);
    std::vector<double> dVec1(dVec);
    std::vector<double>::iterator it;
    
    for(it=dVec1.begin(); it<dVec1.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    double dArr[5] = 
    {
        1, 2, 3, 4, 5
    };

    std::list<double> obL(dArr, dArr+5);
    std::vector<int> obV(dArr, dArr+5);

    std::cout<<"obV.at(2)= "<<obV.at(2)<<std::endl;
    std::list<double>::iterator lit;
    for(lit=obL.begin(); lit!=obL.end(); lit++)
    {
        std::cout<<*lit<<" ";
    }
    std::cout<<std::endl;

    std::cout<<std::endl;
    std::cout<<"dVec.size()="<<dVec.size()<<std::endl;
    std::cout<<"dVec.capacity()="<<dVec.capacity()<<std::endl;

    return 0;
}

