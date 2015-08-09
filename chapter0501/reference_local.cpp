/*************************************************************************
    > File Name: reference_local.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 11:16:04 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#if 0
const string &local_reference(const string &s)
{
    string ret = s;
    return ret;
}
#endif

int main(int argc, char* argv[])
{
    string tmp = "hello";
    //std::cout<<"result>>"<<local_reference(tmp)<<std::endl;
    std::cout<<"haha:"<<string::size_type<<std::endl;

    return 0;
}
