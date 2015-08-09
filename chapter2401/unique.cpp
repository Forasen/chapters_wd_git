/*********************************************
> File  : unique.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 10:51:40 AM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void elimDups(std::vector<std::string>& words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    std::cout<<"after unique(words.begin(), words.end())"<<std::endl;
    for(auto& it: words)
    {
        std::cout<<it<<" ";
    }

    words.erase(end_unique, words.end());
}

int main(void)
{
    std::string a[] = {
        "hello", 
        "world", 
        "hello", 
        "how",
        "are", 
        "you",
        "ha",
        "zhong"
    };
    std::vector<std::string> vec(a, a+8);
    std::cout<<"the start……"<<std::endl;
    for(auto& it: vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl<<std::endl;

    elimDups(vec);
    std::cout<<std::endl<<std::endl;
    std::cout<<"after elimDups(vec)"<<std::endl;
    for(auto& it: vec)
    {
        std::cout<<it<<" ";
    }

    std::cout<<std::endl<<std::endl;
    return 0;
}
