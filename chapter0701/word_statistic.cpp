/*****************************************************
    > File  : word_statistic.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 10:32:22 PM CST
 ****************************************************/

#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
#include<sstream>

struct Record
{
    std::string word;
    int frequence;
};

class WORD
{
private:
    std::vector<Record> vec_;
public:
    void file_read(const std::string &filename);
    void file_write(const std::string &filename);

};

void WORD::file_read(const std::string &filename)
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
        std::string tmp_word;
        while(ss >> tmp_word)
        {
            std::vector<Record>::iterator it;
            for(it=vec_.begin(); it<vec_.end(); it++)
            {
                if(it->word == tmp_word)
                {
                    it->frequence++;
                    break;
                }
            }
            if(it == vec_.end())
            {
                Record tmp;
                tmp.word = tmp_word;
                tmp.frequence = 1;
                vec_.push_back(tmp);
            }
        }
    }

    ifs.close();
}

void WORD::file_write(const std::string &filename)
{
    std::ofstream ofs(filename.c_str());
    if(!ofs.good())
    {
        std::cout<<"ofstream error!"<<std::endl;
        return;
    }
    std::vector<Record>::iterator it;
    for(it=vec_.begin(); it<vec_.end(); it++)
    {
        ofs<<std::setw(15)<<it->word<<std::setw(5)<<it->frequence<<std::endl;
    }
    ofs.close();
}

int main(void)
{
    //std::string input_filename = "/home/ubuntu/The_Holy_Bible.txt";
    std::string input_filename = "./ioio.txt";
    std::string output_filename = "./ioio.dat";

    WORD words;
    words.file_read(input_filename);
    words.file_write(output_filename);

    return 0;
}
