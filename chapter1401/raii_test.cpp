/*********************************************
> File  : raii_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 11:20:01 AM CST
 ********************************************/

#include<iostream>
#include<stdexcept>
#include<cstring>
#include<stdio.h>

class File
{
private:
	FILE* fileP;
public:
	File(const char* filename)
		:fileP(fopen(filename, "w+"))
	{
		if(fileP == NULL)
		{
			throw std::runtime_error("error: unable to open file");
		}
	}

	void write(const char* str)
	{
        std::cout<<"write(const char* str) has been called!"<<std::endl;
		if(fputs(str, fileP) == EOF)
		{
			throw std::runtime_error("error: unable to fputs");
		}
	}

	void write(const char* str, size_t num)
	{
        std::cout<<"write(const char* str, size_t num) has been called!"<<std::endl;
		if(fwrite(str, 1, num, fileP) == 0 && num != 0)
		{
			throw std::runtime_error("error: unable to fwrite");
		}
	}

private:
	File(const File&);
	File& operator=(const File& rhs);
};

int main(void)
{
	std::cout<<"Enter a filename : ";
	std::string filename;
	std::cin>>filename;

	File f1(filename.c_str());
	f1.write("hello world!");

	return 0;
}
