/*************************************************************************
    > File Name: sizeof_object.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 03:16:38 PM CST
 ************************************************************************/

#include<iostream>

class cell
{
private:
    int a;      //4
    char b;     //1
    float c;    //4
    double d;   //8
    short e[5]; //10
    char &f;    //8
    double &g;  //8
    static int h;//0 //共56byte
};
int main(void)
{
    std::cout<<"sizeof(cell)"<<sizeof(cell)<<std::endl;

    return 0;
}
