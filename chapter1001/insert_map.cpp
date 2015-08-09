/*********************************************
    > File  : insert_map.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 09:39:24 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<cstring>
int main(void)
{
    std::pair<int, std::string> arr[2] =
    {
        std::pair<int, std::string>(2, "b"), std::pair<int, std::string>(1, "a")
    };
    std::pair<int, std::string> tmp(1, "aa");
    std::map<int, std::string> obM(arr, arr+2);

    std::map<int, std::string>::iterator itM = obM.begin();
    std::pair<std::map<int, std::string>::iterator, bool> res = obM.insert(tmp);
    if(res.second)
    {
        std::cout<<"insert success"<<std::endl;
    }
    else
    {
        std::cout<<"the data is already existent!"<<
        (*res.first).first<<", "<<(*res.first).second<<std::endl;
    }

    std::multimap<int, std::string> obMM(arr, arr+2);
    std::multimap<int, std::string>::iterator itMM = obMM.begin();

    itMM = obMM.insert(tmp);
    std::cout<<"the data that inseting is:"<<(*itMM).first<<", "<<(*itMM).second<<std::endl;

#if 0
    while(itMM != obMM.end())
    {
        std::cout<<
    }
#endif
    return 0;
}
