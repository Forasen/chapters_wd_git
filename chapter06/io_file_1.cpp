/*************************************************************************
    > File Name: io_file_1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 04:07:26 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


int test_put();
int test();
int main(void)
{
    test();
    test_put();

    return 0;
}
int test12(void)
{
    std::fstream fs("f1.dat", std::ios::out | std::ios::in);

    if(!fs.good())
    {

        std::cout<<"fstream fail"<<std::endl;
        return -1;
    }

    int ival;
    for(size_t index=0; index<10; index++)
    {
        std::cin>>ival;
        fs<<ival<<' ';
    }
    std::cout<<fs.tellp()<<std::endl;
    //std::cout<<fs.tellg()<<std::endl;

    //fs.seekg(0, std::ios::beg);
    fs.seekg(0, std::ios::beg);
    for(size_t index=0; index<10; index++)
    {
        fs>>ival;
        std::cout<<ival<<' ';
    }
    std::cout<<std::endl;

    fs.close();
    return 0;
}

int test()
{
    //std::ofstream ofs("ioio.txt", std::ios::ate);
    //std::ofstream ofs("ioio.txt", std::ios::app);
    std::ofstream ofs("ioio.txt", std::ios::app | std::ios::ate);

    if(!ofs.good())
    {
        std::cout<<"ofstream error1"<<std::endl;
        return -1;
    }

    std::cout<<"the current location of the file:"<<ofs.tellp()<<std::endl;//返回当前文件流指针的当前位置

    //ofs<<"\nthat's a new message"<<std::endl;
    ofs<<"that's a new message"<<std::endl;

    ofs.close();

}

int test1()
{

    test();
    std::ifstream ifs("ioio.txt", std::ios::ate);
    if(ifs.good())
    {
        std::cout<<"ifstream fail"<<std::endl;

        return -1;
    }

    std::cout<<"the current location of the file"<<ifs.tellg()<<std::endl;


    ifs.close();
}

int test_put()
{
    std::ifstream ofs("ioio.txt", std::ios::in);
    
    //std::ofstream ofs("ioio.txt", std::ios::app | std::ios::ate);
    //std::ifstream ifs("ioio.txt", std::ios::ate);
    //std::fstream ofs("ioio.txt", std::ios::out | std::ios::in);
    if(!ofs.good())
    {
        std::cout<<"ifstream fail"<<std::endl;

        return -1;
    }

    std::cout<<"the current location of the file"<<ofs.tellg()<<std::endl;

    std::string line;
    std::stringstream ss;

    //while(getline(std::cin, line))
    while(getline(ofs, line))
    {
        std::stringstream ss(line);

        std::string word;
        while(ss>>word)
        {
            std::cout<<word<<std::endl;
        }
    }

    ofs.close();
    
}
