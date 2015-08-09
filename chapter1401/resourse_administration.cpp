/*********************************************
> File  : resourse_administration.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 10:11:04 AM CST
 ********************************************/

#include<iostream>
void userFile(char* const fn)
{
    FILE* fp = fopen(fn, "r");
    try
    {
        if(!fp.good())
        {
            fclose(fp);
            return 0;
        }
    }
    catch()
    {
        fclose(fp);
        return 0;
    }
    fclose(fp);
}
