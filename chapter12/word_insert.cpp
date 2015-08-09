/*********************************************
> File  : word_insert.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 04:46:15 PM CST
 ********************************************/

#include<iostream>
#include<iterator>
#include<map>

int main(void)
{
    std::cout<<"Enter some words (Ctrl+Z to end)"<<std::endl;
    std::map<std::string, int> wordCount;
    std::string word;
    while(std::cin>>word)
    {
        std::pair<std::map<std::string, int>::iterator , bool> ret = 
            wordCount.insert(make_pair(word, 1));
        if(!ret.second)
        {
            ++ret.first->second;
        }
        //++wordCount[word];
    }
    std::cout<<"word\t\t"<<"times"<<std::endl;
    for(std::map<std::string, int>::iterator iter=wordCount.begin(); iter!=wordCount.end(); iter++)
    {
        std::cout<<iter->first<<"\t\t"<<iter->second<<std::endl;
    }
    std::map<std::string, int>::iterator it = wordCount.find("hello");
    std::cout<<"the times of hello occurs="<<it->second<<std::endl;
#if 0
    wordCount.insert(std::map<std::string, int>::value_type("Anna", 1));
    wordCount.insert(std::make_pair("Anna", 1));

    std::pair<map<std::string, std::vector<int>::iterator, bool > > ret = 
        wordCount.insert(std::make_pair("Anna", a));
#endif
    return 0;
}
