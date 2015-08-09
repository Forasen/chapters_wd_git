/*********************************************
> File  : map_erase.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 10:53:02 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<iterator>

int main(void)
{
    std::map<std::string, int> str_map;
    std::string str;
    while(std::cin>>str)
    {
        ++str_map[str];
    }
    std::map<std::string, int>::iterator map_it;
    for(map_it=str_map.begin(); map_it!=str_map.end(); map_it++)
    {
        std::cout<<" "<<map_it->first<<", "<<map_it->second<<std::endl;
    }
    for(map_it=str_map.begin(); map_it!=str_map.end(); map_it++)
    {
        std::string remove_word = map_it->first;
        int cnt = str_map.erase(remove_word);
        std::cout<<" "<<map_it->first<<", "<<"cnt="<<cnt<<std::endl;
    }

    return 0;
}
