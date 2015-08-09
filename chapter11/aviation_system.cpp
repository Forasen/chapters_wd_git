/*********************************************
> File  : aviation_system.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 20 Jun 2015 10:11:14 PM CST
********************************************/

#include<iostream>
#include<set>
#include<cstring>
#include<vector>

#pragma warning(disable:4996)
class CFlight
{
    private:
    char m_flighNo[7];
    char m_fromCity[8];
    char m_toCity[8];
    double m_distance;
    double m_price;
    public:
    CFlight();
    //get函数
    char* getFlightNo();
    char* getFromCity();
    char* getToCity();
    double getDistance();
    double getPrice();
    //set函数
    void setFlightNo(char* pNo);
    void setFromCity(char* pFromCity);
    void setToCity(char* pToCity);
    void setDistance(double distance);
    void setPrice(double price);

    friend std::ostream& operator<<(std::ostream& os, const CFlight& oth);
    bool operator==(const CFlight& oth) const;
    bool operator<(const CFlight& oth) const;
};
CFlight::CFlight()
{
    strcpy(this->m_flighNo, "");
    strcpy(this->m_fromCity, "");
    strcpy(this->m_toCity, "");
    this->m_distance = 0;
    this->m_price = 0;
}
char* CFlight::getFlightNo()
{
    return this->m_flighNo;
}
char* CFlight::getFromCity()
{
    return this->m_fromCity;
}
char* CFlight::getToCity()
{
    return this->m_toCity;
}
double CFlight::getDistance()
{
    return this->m_distance;
}
double CFlight::getPrice()
{
    return this->m_price;
}

void CFlight::setFlightNo(char* pNo)
{
    strcpy(this->m_flighNo, pNo);
}
void CFlight::setFromCity(char* pFromCity)
{
    strcpy(this->m_fromCity, pFromCity);
}
void CFlight::setToCity(char* pToCity)
{
    strcpy(this->m_toCity, pToCity);
}
void CFlight::setDistance(double distance)
{
    this->m_distance = distance;
}
void CFlight::setPrice(double price)
{
    this->m_price = price;
}

std::ostream& operator<<(std::ostream& os, const CFlight& oth)
{
    os.setf(std::ios::left, std::ios::adjustfield);//左对齐
    os<<" "<<oth.m_flighNo<<"\t";
    os<<" "<<oth.m_fromCity<<"\t";
    os<<" "<<oth.m_toCity<<"\t";
    os<<" "<<oth.m_distance<<"\t";
    os<<" "<<oth.m_price;

    return os;
}
bool CFlight::operator==(const CFlight& oth) const
{
    return (strcmp(this->m_flighNo, oth.m_flighNo) == 0);
}
bool CFlight::operator<(const CFlight& oth) const
{
    return (strcmp(this->m_flighNo, oth.m_flighNo) < 0);
}

void InputFlight(std::set<CFlight>& sf)
{
    char cChoose = '\0';//初始化
    std::cout<<"请录入信息！"<<std::endl;
    while(1)
    {
        char flightNo[8] = {'\0'};
        char fromCity[8] = {'\0'};
        char toCity[8] = {'\0'};
        double distance = 0.0;
        double price = 0.0;
        std::cout<<"请输入航班号：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>flightNo;
        while(flightNo[0] == ' ')
        {
            strcpy(flightNo, flightNo+1);//逐渐往后复制
        }
        if(strlen(flightNo)<=0)
        {
            std::cout<<"航班号不能为空！请重新输入！"<<std::endl;
            continue;
        }
        std::cout<<"请输入起飞城市：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>fromCity;
        std::cout<<"请输入到达城市：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>toCity;
        std::cout<<"请输入航线距离：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>distance;
        std::cout<<"请输入机票：";
        std::cin>>price;
        
        CFlight flight;

        flight.setFlightNo(flightNo);
        flight.setFromCity(fromCity);
        flight.setToCity(toCity);
        flight.setDistance(distance);
        flight.setPrice(price);

        if(sf.find(flight) != sf.end())
        {
            std::cout<<"该航班已存在，请重新输入！"<<std::endl;
            continue;
        }
        sf.insert(flight);
        std::cout<<"录入信息成功！是否继续录入？（Y/N）";
        std::cin>>cChoose;
        if(cChoose!='y'&&cChoose!='Y')
        {
            break;
        }
    }
}

void showAllFlight(std::set<CFlight>& sf)
{
    std::cout<<std::endl;
    std::cout<<"\t航班的所有信息如下："<<std::endl;
    std::cout<<"-----------------------------------------"<<std::endl;
    std::cout<<"航班"<<"\t"<<"起飞"<<"\t"<<"到达"<<"\t"<<"航线"<<"\t"<<"机票"<<std::endl;
    std::set<CFlight>::iterator it;
    for(it=sf.begin(); it!=sf.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
    std::cout<<"------------------------------------------"<<std::endl;
}
int main(void)
{
    std::set<CFlight> sf;
    InputFlight(sf);
    showAllFlight(sf);

    return 0;
}

