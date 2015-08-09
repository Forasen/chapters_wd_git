/*********************************************
    > File  : map.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 09:20:25 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<cstring>
//using namespace std;
int main(void)
{
    std::pair<int, std::string, std::string> t(1, "Asia", "China");
    std::cout<<t.first<<", "<<t.second<<", "<<t.third<<std::endl;

    std::pair<int, std::string, std::string> arr[2] =
    {
        std::pair<int, std::string, std::string>(8, "America", "Canada"), std::pair<int, std::string, std::string>(3, "China", "shenzhen");
    };
    std::map<int, std::string, std::string> obM(arr, arr+2);
    std::cout<<"obM.size="<<obM.size()<<std::endl;

    std::map<int, std::string>::iterator it = obM.begin();
    while(it != obM.end())
    {
        std::cout<<(*it).first<<": "<<(*it).second<<": "<<(*it).third<<std::endl;
        it++;
    }
    return 0;
}
