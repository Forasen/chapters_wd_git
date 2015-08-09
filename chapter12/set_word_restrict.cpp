/*********************************************
> File  : set_word_restrict.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 22 Jun 2015 11:45:27 PM CST
 ********************************************/

#include<iostream>
#include<set>
#include<vector>
#include<fstream>
#include<map>
#include<iterator>
#include<stdexcept>

int main(void)
{
    std::set<std::string> excluded;
    std::string removed_word;
    std::fstream ifile("./1.txt");
    if(!ifile.good())
    {
        //throw runtime_error("error:unable to open input file!");
    }
    while(ifile>>removed_word)
    {
        excluded.insert(removed_word);
    }
    std::set<std::string>::iterator  set_it;
    for(set_it=excluded.begin(); set_it!=excluded.end(); set_it++)
    {
        std::cout<<*set_it<<std::endl;
    }
    std::string word;
    std::map<std::string, int> word_count;
    while(std::cin>>word)
    {
        if(!excluded.count(word))
        {
            ++word_count[word];
        }
    }
    std::map<std::string, int>::iterator map_it;
    for(map_it=word_count.begin(); map_it!=word_count.end(); map_it++)
    {
        std::cout<<map_it->first<<", "<<map_it->second<<std::endl;
    }

    return 0;
}
