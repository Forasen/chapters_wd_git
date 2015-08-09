/*********************************************
> File  : count_word.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 07:56:05 AM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<list>
#include<cstring>
#include<numeric>
#include<algorithm>

int main(void)
{
    //std::list<std::string> li;
    std::vector<int> vec;
    std::cout<<"Enter strings for storing……"<<std::endl;
    //std::string ival;
    int ival;
    while(std::cin>>ival)
    {
        //if(strcmp(ival.c_str(), "0") == 0)
        if(ival == 0)
        {
            break;
        }
        vec.push_back(ival);
    }
    int ret = std::accumulate(vec.begin(), vec.end(), 10);
#if 0
    std::string search_value;
    std::cout<<"Enter a value for searching : ";
    std::cin>>search_value;
    int ret = count(li.begin(), li.end(), search_value);
#endif
    std::cout<<"ret = "<<ret<<std::endl;

    return 0;
}
