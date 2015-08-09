/*********************************************
> File  : raii.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 10:18:05 AM CST
 ********************************************/

#include<iostream>
#include<stdexcept>
#include<stdio.h>
#include<cstring>

class safeFile
{

private:
    FILE* fileHandler;

public:
    safeFile(const char* filename)
        :fileHandler(fopen(filename, "w+"))
    {
        if(fileHandler == NULL)
        {
            throw std::runtime_error("open error!");
        }
    }
    ~safeFile()
    {
        fclose(fileHandler);
    }
    void write(const char* str)
    {
        std::cout<<"write(const char* str) has been called1"<<std::endl;
        if(fputs(str, fileHandler) == EOF)
        {
            throw std::runtime_error("write  error");
        }
    }
    void write(const char* buffer, size_t num)
    {
        std::cout<<"write(const char* buffer, size_t num) has been called!"<<std::endl;
        if(num!=0 && fwrite(buffer, num, 1, fileHandler)==0)
        {
            throw std::runtime_error("write error!");
        }
    }
private:
    safeFile(const safeFile&);
    safeFile& operator=(const safeFile&);
};

int main(void)
{
    std::string filename;
    std::cout<<"Enter a filename : ";
    std::cin>>filename;
    safeFile testVar(filename.c_str());
    std::string str1 = "Hello RAII";
    testVar.write(str1.c_str(), strlen(str1.c_str()));
    //testVar.write("Hello RAII");

    return 0;
}
