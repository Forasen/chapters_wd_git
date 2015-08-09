/*********************************************
> File  : test1.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 08:20:46 PM CST
********************************************/

#include<iostream>
#include<map>
#include<cstring>
#include<iterator>
#include<vector>

struct Record
{
    int freq;
    std::vector<int> vec;
    bool line_flag;
};

typedef std::map<std::string, Record>::value_type valType;
int main(void)
{
    std::map<std::string, Record> map_word;

    std::string tmp_word = "hello";

    Record tmp_record;

    tmp_record.freq = 1;

    map_word.insert(valType("hello", {1}));
    //std::pair<std::map<std::string, Record>::iterator, bool> ret =
    //map_word.insert(valType_tmp);

    std::map<std::string, Record>::iterator map_it = map_word.begin();

    while(map_it != map_word.end())
    {
        std::cout<<map_it->first<<", "<<map_it->second.freq<<std::endl;
        map_it++;
    }
    return 0;
}
