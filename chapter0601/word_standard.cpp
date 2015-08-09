/*************************************************************************
    > File Name: word_standard.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Tue 16 Jun 2015 11:03:34 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<iomanip>
#include<sstream>
#include<cstring>
#include<fstream>
struct Record
{
    std::string word;
    int freq;
};

class WordStatistic
{

private:
    std::vector<Record> dict_;

public:
    void read_file(const std::string &filename);
    void write_file(const std::string &filename);
};

void WordStatistic::read_file(const std::string &filename)
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
        //std::cout<<"line:"<<line<<std::endl;
        std::stringstream ss(line);

        std::string word;
        while(ss >> word)
        {
            //std::cout<<"word:"<<word<<std::endl;
            
            std::vector<Record>::iterator it;
            for(it=dict_.begin(); it<dict_.end(); it++)
            {
                if(word == it->word)
                {
                    it->freq++;
                    break;
                }
            }
            if(it == dict_.end())
            {
                Record tmp;
                tmp.word = word;
                tmp.freq = 1;
                dict_.push_back(tmp);
            }
        }
    }
    ifs.close();

}

void WordStatistic::write_file(const std::string &filename)
{
    std::ofstream ofs(filename.c_str());
    if(!ofs.good())
    {
        std::cout<<"ofs error!"<<std::endl;
        return;
    }

    std::vector<Record>::iterator it;
    for(it=dict_.begin(); it<dict_.end(); it++)
    {
        ofs<<std::setw(16)<<it->word<<"\t"<<std::setw(5)<<it->freq<<std::endl;
    }

    ofs.close();
}

int main(void)
{
    std::string infilename = "/home/ubuntu/The_Holy_Bible.txt";
    WordStatistic ws;
    ws.read_file(infilename);

    std::string outfilename = "./dict.dat";
    ws.write_file(outfilename);

    return 0;

}
