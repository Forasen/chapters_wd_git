/*********************************************
> File  : mem_fun_ref.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 20 Jun 2015 09:08:57 PM CST
********************************************/

#include<iostream>
#include<vector>
#include<functional>
#include<cmath>
#include<algorithm>

class NumVals
{
private:
    int val;
public:
    NumVals()
    {
        val = 0;
    }
    NumVals(int j)
    {
        val = j;
    }
    bool display()
    {
        std::cout<<val<<" ";
        return true;
    }
    bool isEven()
    {
        return (bool)(!(val%2));
    }
    bool isPrime()
    {
        int temp = (int)sqrt(val);
        for(size_t index=2; index<val/2; index++)
        {
            if(!(val%index))
            {
                return false;
            }
        }
        return true;
    }
};
int main(void)
{
    std::vector<NumVals> v1(13);
    std::vector<NumVals>::iterator it1;
    for(size_t index=0; index<13; index++)
    {
        v1[index] = NumVals(index+1);
    }
    std::cout<<"v1中的原始值为："<<std::endl;
    for_each(v1.begin(), v1.end(), std::mem_fun_ref(&NumVals::display));
    std::cout<<std::endl;

    it1 = std::remove_if(v1.begin(), v1.end(), std::mem_fun_ref(&NumVals::isPrime));
    std::cout<<std::endl;
    std::cout<<"v1中删除质数后剩下的值为："<<std::endl;
    for_each(v1.begin(), it1, std::mem_fun_ref(&NumVals::display));
    std::cout<<std::endl<<std::endl;

    std::vector<NumVals> v2(13);
    std::vector<NumVals>::iterator it2;
    for(size_t index=0; index<13; index++)
    {
        v2[index] = NumVals(index+1);
    }
    std::cout<<"v2中的原始值为："<<std::endl;
    for_each(v2.begin(), v2.end(), std::mem_fun_ref(&NumVals::display));
    std::cout<<std::endl;

    it2 = std::remove_if(v2.begin(), v2.end(), std::mem_fun_ref(&NumVals::isEven));

    std::cout<<"v2中删除偶数后剩下的值为："<<std::endl;
    for_each(v2.begin(), it2, std::mem_fun_ref(&NumVals::display));
    std::cout<<std::endl;

    return 0;
}
