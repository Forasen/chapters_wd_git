/*********************************************
> File  : resource.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 10:13:08 AM CST
 ********************************************/

#include<iostream>
#include<vector>

class Resource{

};
class RAII
{
private:
    Resource* re_;:
public:
    RAII(Resource* aResource)
        :re_(aResource)
    {

    }
    ~RAII()
    {
        delete re_;
    }

}
class String
{
private:


public:

}

