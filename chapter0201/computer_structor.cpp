/*************************************************************************
    > File Name: computer_structor.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 07:21:36 PM CST
 ************************************************************************/

#include "computer_structor.h"
#include<string.h>
Computer::Computer(char* pBrand, float Price)
{
    std::cout<<"Computer::Computer(char*, float)"<<std::endl;
    strcpy(m_pBrand, pBrand);
    m_Price = Price;
}

Computer::Computer()
{
    std::cout<<"Computer::Computer()"<<std::endl;
    strcpy(m_pBrand, "Lenovo");
    m_Price = 998;
}

void Computer::print()
{
    std::cout<<"price:"<<m_Price<<std::endl;
    std::cout<<"brand:"<<m_pBrand<<std::endl;
}

void Computer::setBrand(char* brand)
{
    strcpy(m_pBrand, brand);
}
void Computer::setPrice(float price)
{
    m_Price = price;
}

int main()
{
    Computer pc("ASUS", 100);
    pc.print();
    
    Computer pc1;
    //pc1.pBrand = "haha";
    //pc1.setBrand("Think");
    //pc1.setPrice(1090);
    pc1.print();

    struct Student st;
    st.sno = 100;
    std::cout<<"st.sno = "<<st.sno<<std::endl;

    return 0;

}
