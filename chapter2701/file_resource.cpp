/*********************************************
> File  : file_resource.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 10:41:23 AM CST
 ********************************************/

#include<iostream>

class fileRAII
{
private:
    FILE* file_;
public:
    fileRAII(FILE* aFile)
        :file_(aFile)
    {}
    ~fileRAII()
    {
        fclose(file_);
    }
    FILE* fileGet()
    {
        return file_;
    }
};

int main(void)
{
    std::string filename;
    std::cout<<"Enter a filename : ";
    std::cin>>filename;
    FILE* fp = fopen(filename.c_str());
    if(fp == NULL)
    {
        std::cout<<"error: unable to open file : "<<filename<<std::endl;
        return -1;
    }
    fileRAII file_raii(fp);

    return 0;

}
