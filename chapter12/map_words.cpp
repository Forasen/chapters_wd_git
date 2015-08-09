/*********************************************
> File  : map_words.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 10:27:59 AM CST
********************************************/

#include<iostream>
#include<map>
using  namespace std;
int main(void)
{
    #if 0
    std::map<std::string, std::list<int> > obM_wordLine;
    std::map<K, V>::key_type;
    std::map<K, V>::mapped_type;
    std::map<K, V>::value_type;
    #endif
    std::map<std::string, int> word_count;
    word_count["America"] = 1;
    word_count["China"] = 2;
    word_count["Canada"] = 3;


    std::cout<<"map<std::string, int>::key_type : "<<std::map<std::string, int>::key_type<<std::endl;
    //std::cout<<"map<std::string, int>::mapped_type : "<<std::map<std::string, int>::mapped_type<<std::endl;

    std::map<std::string, int>::iterator map_it = word_count.begin();
    //std::cout<<"请输入map成员值：(int)"<<std::endl;
    //std::cin>>map_it->second;

    std::cout<<"map中的pair成员为："<<std::endl;
    while(map_it != word_count.end())
    {
        std::cout<<map_it->first;
        std::cout<<", "<<map_it->second<<std::endl;
        map_it++;
    }
    //map_it->first = "new_key";

    word_count["China"] += 8;
    word_count["America"] = 10;
    std::cout<<"map中 修改后 pair成员为："<<std::endl;
    std::map<std::string, int>::iterator map_it1 = word_count.begin();
    while(map_it1 != word_count.end())
    {
        std::cout<<map_it1->first;
        std::cout<<", "<<map_it1->second<<std::endl;
        map_it1++;
    }

    return 0;
}
