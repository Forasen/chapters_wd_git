/*********************************************
    > File  : template_add.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 05:19:11 PM CST
 ********************************************/

#include<iostream>

int add(int x, int y);

template <class T>
T ADD(const T &a, const T &b)
{
    return a + b;
}
//模板的物化
#if 0
template <>
char* ADD<char*>(const char* pa, const char* pb)
{
    int len1 = strlen(pa) + strlen(pb) + 1;
    char* pret = new char[len+1];
    strcpy(pret, pa);
    strcat(pret, pb);
    return pret;
}
#endif

int main(void)
{
    std::cout<<"ADD(3, 5)="<<ADD(3, 5)<<std::endl;

    std::string a = "Hello, ";
    std::string b = "world";
    std::cout<<"ADD(a, b):"<<ADD(a, b)<<std::endl;

    char* pa = "how";
    char* pb = "are";
    std::cout<<"ADD(char*, char*):"<<ADD(pa, pb)<<std::endl;

    return 0;
}
