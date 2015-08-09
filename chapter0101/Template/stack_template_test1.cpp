/*************************************************************************
> File Name: ./stack_template_test1.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Thu 11 Jun 2015 09:20:54 AM CST
************************************************************************/

#include<iostream>

class stackA
{
    private:
    int* sz;
    int point;
    int size;
    public:
    stackA(int num = 1)
    {
        size = num;
        point = 0;
        sz = new int[size];
    }
    ~stackA()
    {
        delete []sz;
    }

    int &get_pos()
    {
        return point;
    }
    bool is_empty()
    {
        return point == 0;
    }
    bool is_full()
    {
        return point == size;
    }
    bool push(const int &obj);
    bool pop(int &obj);
}
bool stackA::push(const int &obj)
{
    if(is_full())
    {
        return false;
    }
    else
    {
        sz[point++] = obj;
        return true;
    }
}
bool stackA::pop(int &obj)
{
    if(if_empty())
    {
        return false;
    }
    else
    {
        obj = sz[--point];
        return true;
    }
}

int main(void)
{
    stackA st(10);
    std::cout<<"at the start: is empty:"<<st.is_empty()<<std::endl;
    st.push(55555);
    std::cout<<
}
