/*********************************************
> File  : improved_sales_data_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 04:06:18 PM CST
********************************************/

#include "improved_sales_data_test.h"

int main(void)
{
    std::cout<<"请输入交易记录：ISBN， 销售量， 价格！"<<std::endl;
    Sales_book total;
    if(read(std::cin, total))
    {
        std::cout<<"total.isbn() : "<<total.isbn()<<std::endl;
        Sales_book trans;

        std::cout<<"请输入交易记录：ISBN， 销售量， 价格！"<<std::endl;
        while(read(std::cin, trans))
        {
            if(total.isbn() == trans.isbn())
            {
                total = add(total, trans);
            }
            else
            {
                std::cout<<"已经输入的记录的结果为："<<std::endl;
                print(std::cout, total);
                std::cout<<std::endl;
                total = trans;
            }
        }
        std::cout<<"最后一条记录为："<<std::endl;
        print(std::cout, total);
        std::cout<<std::endl;
    }
    else
    {
        std::cout<<"No data?"<<std::endl;
        return -1;
    }

    return 0;
}
