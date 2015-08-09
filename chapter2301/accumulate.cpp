/*********************************************
> File  : accumulate.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 08:15:30 PM CST
 ********************************************/

#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

int main(int argc, char* argv[])
{

    if(argc < 2)
    {
        std::cout<<"usage error!"<<std::endl;
        exit(1);
    }
    std::ifstream in(argv[1]);

    if(!in)
    {
        std::cout<<"error: unable to open file : "<<argv[1]<<std::endl;
        return -1;
    }
    std::vector<double> vec;
    double val;
    while(in>>val)
    {
        vec.push_back(val);
    }
    std::cout<<"sum = "<<accumulate(vec.begin(), vec.end(), 0.0)<<std::endl;

    return 0;
}

