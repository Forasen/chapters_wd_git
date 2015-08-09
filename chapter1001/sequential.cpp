/*********************************************
    > File  : sequential.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 07:26:55 PM CST
 ********************************************/

#include<iostream>
#include<list>
#include<deque>
#include<vector>
using namespace std;

int main(void)
{
    std::vector<int> obv;
    std::cout<<"obv.count="<<obv.size()<<std::endl;

    double dArr[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    //int dArr[5] = {1, 2, 3, 4, 5};
    std::deque<double> dDeq(dArr, dArr+5);
    std::cout<<"dDeq.size()="<<dDeq.size()<<std::endl;
    std::cout<<"use index ";
    for(int index=0; index<dDeq.size(); index++)
    {
        std::cout<<dDeq[index]<<" ";
    }
    std::cout<<std::endl;


    double dFront = dDeq.front();
    double dBack = dDeq.back();
    std::cout<<"dFront="<<dFront<<std::endl;
    std::cout<<"dBack="<<dBack<<std::endl;


    dDeq.push_front(998);
    std::cout<<"after dDeq.push_front"<<std::endl;
    for(int index=0; index<dDeq.size(); index++)
    {
        std::cout<<dDeq[index]<<" ";
    }
    std::cout<<std::endl;



    dDeq.pop_front();
    std::cout<<"after dDeq.pop_front"<<std::endl;
    for(int index=0; index<dDeq.size(); index++)
    {
        std::cout<<dDeq[index]<<" ";
    }
    std::cout<<std::endl;



    dDeq.pop_back();
    for(int index=0; index<dDeq.size(); index++)
    {
        std::cout<<dDeq[index]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"dDeq.size()="<<dDeq.size()<<std::endl;
    for(int index=0; index<dDeq.size(); index++)
    {
        std::cout<<dDeq[index]<<" ";
    }
    std::cout<<std::endl;
    std::deque<double>::iterator it;
    std::cout<<"use iterator ";
    for(it=dDeq.begin(); it!=dDeq.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    std::list<int> obL(3, 5);
    std::list<int>::iterator lit = obL.begin();
    while(lit != obL.end())
    {
        (*lit) += 2;
        std::cout<<*lit<<" ";
        lit++;
    }
    std::cout<<std::endl;

    std::list<int> obL2(10, 9);
    obL.swap(obL2);
    lit = obL.begin();
    while(lit != obL.end())
    {
        std::cout<<*lit<<" ";
        lit++;
    }
    std::cout<<std::endl;

    return 0;

}

