/*********************************************
  > File  : testQuery.cpp
  > Author: NewYork
  > Mail  : 2287794993@qq.com 
  > Time  : Sun 21 Jun 2015 07:50:06 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include<sstream>
#include<fstream>

struct Record
{
	int freq;
	std::map<int, std::string> mapRec;
};

typedef std::map<std::string, Record>::value_type valType;

class WORD
{
	private:
		std::map<std::string, Record> map_word;

	public:
		void read_file(std::string filename, std::string words);
		void showResult(std::string words);
};

void WORD::read_file(std::string filename, std::string words)
{
	std::ifstream inFile(filename.c_str());
	if(!inFile.good())
	{
		std::cout<<"error: unable to open inFile:"<<filename.c_str()<<std::endl;
		return;
	}

	std::string line;
	int tmp_line = 0;
	int cnt_word = 0;

	while(getline(inFile, line))
	{ 
		std::string original_line = line;
		tmp_line++;

		int index = 0;
		int len = line.size();
		while(index < len)
		{
			if(!isdigit(line[index])&&(!isalpha(line[index])))
			{
				line[index] = ' ';
			}
			index++;
		}

		std::stringstream ss(line);
		std::string tmp_word;

		while(ss >> tmp_word)
		{
			if(tmp_word == words)
			{
				cnt_word++;
				std::pair<std::map<std::string, Record>::iterator, bool> ret = 
					map_word.insert(valType(tmp_word, {1}));
				ret.first->second.freq = cnt_word;
				ret.first->second.mapRec[tmp_line] = original_line;
			}
		}
	}
	inFile.close();
}

void WORD::showResult(std::string words)
{
	std::map<std::string, Record>::iterator it = map_word.find(words);
	if(it != map_word.end())
	{
		std::cout<<words<<" occurs "<<it->second.freq<<" times"<<std::endl;
		std::map<int, std::string>::iterator map_it;
		for(map_it=it->second.mapRec.begin(); map_it!=it->second.mapRec.end(); map_it++)
		{
			std::cout<<"  (line: "<<map_it->first<<")"<<map_it->second<<std::endl;
		}
	}
	else
	{
		std::cout<<"error: unable to find the word : "<<words<<std::endl;
		return;
	}
}

int main(void)
{
	std::string filename;
	std::cout<<"Enter a filename(just for the current directory) : ";
	std::cin>>filename;

	std::string words;
	std::cout<<"Enter a word for seeking : ";
	std::cin>>words;

	WORD W;

	W.read_file(filename, words);
	W.showResult(words);

	return 0;
}
