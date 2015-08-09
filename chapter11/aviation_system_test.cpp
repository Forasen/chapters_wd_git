/*********************************************
> File  : aviation_system_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 12:03:33 AM CST
********************************************/

#include<iostream>
#include<set>
#include<cstring>

class CFlight
{
    private:
    char m_flightNo[7];
    char m_fromCity[8];
    char m_toCity[8];
    double m_distance;
    double m_price;
    public:
    CFlight();
    char* getFlightNo();
    char* getFromCity();
    char* getToCity();
    double getDistance();
    double getPrice();

    void setFlightNo(char* flightNo);
    void setFromCity(char* fromCity);
    void setToCity(char* toCity);
    void setDistance(double distance);
    void setPrice(double price);

    friend std::ostream& operator<<(std::ostream& os, const CFlight& oth);
    CFlight& operator=(const CFlight& oth);
    bool operator==(const CFlight& oth) const;
    bool operator<(const CFlight& oth) const;
};

CFlight::CFlight()
{
    strcpy(m_flightNo, "");
    strcpy(m_fromCity, "");
    strcpy(m_toCity, "");
    m_distance = 0.0;
    m_price = 0.0;
}
char* CFlight::getFlightNo()
{
    return this->m_flightNo;
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

void CFlight::setFlightNo(char* flightNo)
{
    strcpy(this->m_flightNo, flightNo);
}
void CFlight::setFromCity(char* fromCity)
{
    strcpy(this->m_fromCity, fromCity);
}
void CFlight::setToCity(char* toCity)
{
    strcpy(this->m_toCity, toCity);
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
    os.setf(std::ios::left, std::ios::adjustfield);
    os<<" "<<oth.m_flightNo<<"\t";
    os<<" "<<oth.m_fromCity<<"\t";
    os<<" "<<oth.m_toCity<<"\t";
    os<<" "<<oth.m_distance<<"\t";
    os<<" "<<oth.m_price;

    return os;
}
bool CFlight::operator==(const CFlight& oth) const
{
    return (strcmp(this->m_flightNo, oth.m_flightNo) == 0);
}
bool CFlight::operator<(const CFlight& oth) const
{
    return (strcmp(this->m_flightNo, oth.m_flightNo) < 0);
}

void inputFlight(std::set<CFlight>& sf)
{
    std::cout<<"++航班信息录入系统++"<<std::endl;
    std::set<CFlight> os;
    while(1)
    {
        char flightNo[8] = {
            '\0'
        };
        char fromCity[8] = {
            '\0'
        };
        char toCity[8] = {
            '\0'
        };
        double distance = 0.0;
        double price = 0.0;
        std::cout<<"请输入航班号：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>flightNo;
        while(flightNo[0] == ' ')
        {
            strcpy(flightNo, flightNo+1);
        }
        if(strlen(flightNo) <= 0)
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

        std::cout<<"请输入航程：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>distance;

        std::cout<<"请输入机票价格：";
        std::cin.clear();
        std::cin.sync();
        std::cin>>price;

        CFlight flight;
        flight.setFlightNo(flightNo);
        flight.setFromCity(fromCity);
        flight.setToCity(toCity);
        flight.setDistance(distance);
        flight.setPrice(price);

        std::set<CFlight>::iterator it;
        if(sf.find(flight) != sf.end())
        {
            std::cout<<"该航班号已经存在，请重新输入！"<<std::endl;
            continue;
        }
        sf.insert(flight);
        char cChoose;
        std::cout<<"信息录入成功！是否继续录入？(Y/N)";
        std::cin>>cChoose;
        if(cChoose!='y' && cChoose!='Y')
        {
            break;
        }
    }
}

void showAllFlight(std::set<CFlight>& sf)
{
    std::set<CFlight>::iterator it;
    std::cout<<"\t+++++航班信息表+++++"<<std::endl;
    std::cout<<"-----------------------------------------"<<std::endl;
    std::cout<<"航班号"<<"\t"<<"起飞"<<"\t"<<"到达"<<"\t"<<"航程"<<"\t"<<"机票"<<std::endl;
    for(it=sf.begin(); it!=sf.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
    std::cout<<"-----------------------------------------"<<std::endl;
}

int main(void)
{
    std::set<CFlight> sf;
    inputFlight(sf);
    showAllFlight(sf);
    
    return 0;
}
