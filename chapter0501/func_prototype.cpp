/*************************************************************************
    > File Name: func_prototype.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 03:20:20 PM CST
 ************************************************************************/



#include<iostream>
using namespace std;
#if 0
bool compare(matrix&, matrix&);
vector<int>::iterator chang_val(int ival, vector<int>::iterator);
#endif

string make_plural(int ctr, const string &word, const string &ending = "s")
{
    return (ctr == 1) ? word : word + ending;
}

int main(void)
{
    std::cout<<"ret1: "<<make_plural(2, "success", "es")<<std::endl;
    std::cout<<"ret2: "<<make_plural(2, "failure")<<std::endl;

    return 0;
}
