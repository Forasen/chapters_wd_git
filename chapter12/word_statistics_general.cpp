/*********************************************
> File  : word_statistics_general.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 11:35:53 AM CST
********************************************/

#include<iostream>
#include<sstream>
#include<cstring>
#include<fstream>
#include<vector>
#include<iterator>
using namespace std;

struct Record
{
    std::string word;
    int  count;
};

class WORD
{
private:
    std::vector<Record> vec_;

public:
    void read_file(char* filename);
    void write_file(char* filename);
};

void WORD::read_file(char* filename)
{
    std::ifstream inputFile(filename);
    if(!inputFile.good())
    {
        std::cout<<"error: unable to open input file:"<<filename<<std::endl;
        return;
    }
    std::string line;
    while(getline(inputFile, line))
    {
        std::stringstream ss(line);
        std::string tmp_word;

        while(ss>>tmp_word)
        {
            std::vector<Record>::iterator it = vec_.begin();
            while(it != vec_.end())
            {
                if((*it).word == tmp_word)
                {
                    it->count++;
                    break;
                }
                it++;
            }
            if(it == vec_.end())
            {
                Record tmp;
                tmp.count = 1;
                tmp.word = tmp_word;
                vec_.push_back(tmp);
            }
        }
    }
    inputFile.close();
}

void WORD::write_file(char* filename)
{
    std::ofstream outputFile(filename);
    if(!outputFile.good())
    {
        std::cout<<"error: unable to open output file : "<<filename<<std::endl;
        return;
    }
    std::vector<Record>::iterator it = vec_.begin();
    while(it != vec_.end())
    {
        outputFile<<(*it).word;
        outputFile<<"\t";
        outputFile<<(*it).count<<std::endl;
        it++;
    }
    outputFile.close();
}

int main(void)
{
    WORD w1;
    
    w1.read_file("./map_words.cpp");
    w1.write_file("./ioio.dat");

    return 0;
}
