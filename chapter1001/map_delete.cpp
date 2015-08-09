/*********************************************
    > File  : map_delete.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 10:46:30 PM CST
 ********************************************/

#include<iostream>
#include<cstring>
#include<map>
using namespace std;

typedef std::map<int, string> M;
typedef M::iterator MI;
typedef M::value_type MV;

typedef std::multimap<int, string> MM;
typedef MM::iterator MMI;

void displayM(M &x)
{
    for(MI it=x.begin(); it!=x.end(); it++)
    {
        std::cout<<(*it).first<<", "<<(*it).second<<std::endl;
    }
}

void displayMM(MM &x)
{
    for(MMI it=x.begin(); it!=x.end(); it++)
    {
        std::cout<<(*it).first<<", "<<(*it).second<<std::endl;
    }
}

int main(void)
{
    MV arr[3] =
    {
        MV(1, "A"), MV(2, "B"), MV(3, "C")
    };
    M obM(arr, arr+3);
    displayM(obM);

    M::size_type num1 = obM.erase(2);
    std::cout<<"after deleting keyword:1>>count: "<<num1<<std::endl;
    displayM(obM);

    return 0;
}
