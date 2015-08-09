/*************************************************************************
    > File Name: word_standard_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Tue 16 Jun 2015 02:20:39 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<vector>
#include<iomanip>
#include<fstream>
#include<sstream>

struct Record
{
	std::string word;
	int freq;
};

class WORD
{
private:
	std::vector<Record> vec_;
public:
	void read_file(const std::string &filename);
	void write_file(const std::string &filename);
};

void read_file(const std::string &filename)
{
	std::ifstream ifs(filename.c_str());
	if(!ifs.good())
	{
		std::cout<<"ifstream error!"<<std::endl;
		return;
	}
	std::string line;
	while(getline(ifs, line))
	{
		std::stringstream ss(line);
		std::string word;

		while(ss >> word)
		{
			std::vector<Record>::iterator it;
			for(it=vec_.begin(); it<vec_.end(); it++)
			{
				if(word == it->word)
				{
					it->freq++;
					break;
				}
			}
				if(){
					Record tmp;
					tmp.word = word;
					tmp.freq = 1;
					vec_.push_back(tmp);
				}
		}
	}
}
