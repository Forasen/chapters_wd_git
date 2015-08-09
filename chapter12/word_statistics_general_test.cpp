/*********************************************
> File  : word_statistics_general_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 03:14:15 PM CST
 ********************************************/

#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<iterator>

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
    void read_file(std::string filename);
    void write_file(std::string filename);
};

void WORD::read_file(std::string filename)
{
    std::ifstream inFile(filename.c_str());
    if(!inFile.good())
    {
        std::cout<<"error: unable to open input file!"<<std::endl;
        return;
    }
    std::string line;
    while(getline(inFile, line))
    {
        std::stringstream ss(line);
        std::string tmpWord;
        while(ss >> tmpWord)
        {
            std::vector<Record>::iterator it;
            for(it=vec_.begin(); it!=vec_.end(); it++)
            {
                if(it->word == tmpWord)
                {
                    it->freq++;
                }
            }
            if(it == vec_.end())
            {
                Record tmp;
                tmp.word = tmpWord;
                tmp.freq = 1;
                vec_.push_back(tmp);
            }
        }
    }
    inFile.close();
}

void WORD::write_file(std::string filename)
{
    std::ofstream outFile(filename.c_str());
    if(!outFile.good())
    {
        std::cout<<"error: unable to open file : "<<filename.c_str()<<std::endl;
        return;
    }
    std::vector<Record>::iterator it;
    for(it=vec_.begin(); it!=vec_.end(); it++)
    {
        outFile<<"  "<<(*it).word;
        outFile<<"\t";
        outFile<<(*it).freq;
        outFile<<std::endl;
    }
    outFile.close();
}

int main(void)
{
    std::string read_filename = "./map_words.cpp";
    std::string write_filename = "./iioo.dat";
    WORD W;
    W.read_file(read_filename);
    W.write_file(write_filename);

    return 0;
}
