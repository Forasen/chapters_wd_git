/*********************************************
> File  : insert_map_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 19 Jun 2015 09:57:10 PM CST
********************************************/

#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main(void)
{
    std::pair<int, std::string> tmp(1, "A");
    std::pair<int ,std::string> arr[2] =
    {
        std::pair<int, std::string>(2, "B"),
        std::pair<int, std::string>(3, "C")
    };

    std::pair<int,string> t[4]= {
        pair<int,string>(2,"B"),pair<int,string>(4,"D"),
        pair<int,string>(6,"F"),pair<int,string>(1,"X")};


    std::map<int, string> obM(arr, arr+2);
    std::map<int, string>::iterator itM = obM.begin();
    itM++;
    itM++;
    obM.insert(t, t+4);
    std::cout<<"after insert t[4]"<<std::endl;
    for(std::map<int, string>::iterator itM=obM.begin(); itM!=obM.end(); itM++)
    {
        std::cout<<(*itM).first<<", "<<(*itM).second<<std::endl;
    }


    int count = obM.erase(2);
    std::cout<<"after erase:"<<count<<std::endl;
    std::cout<<"after erase t[4]"<<std::endl;
    for(std::map<int, string>::iterator itM=obM.begin(); itM!=obM.end(); itM++)
    {
        std::cout<<(*itM).first<<", "<<(*itM).second<<std::endl;
    }

    std::pair<std::map<int, std::string>::iterator, bool> res = obM.insert(tmp);
    if(res.second)
    {
        std::cout<<"insert success:"<<(*res.first).first<<", "<<(*res.first).second<<std::endl;
    }
    else
    {
        std::cout<<"insert fail the data already exits:"<<(*res.first).first<<", "<<(*res.first).second<<std::endl;
    }

    std::multimap<int, string> obMM(arr, arr+2);

    std::multimap<int, string>::iterator itMM;
    itMM = obMM.insert(tmp);
    std::cout<<"the data inserting into obMM is:"<<(*itMM).first<<", "<<(*itMM).second<<std::endl;

    return 0;

}
