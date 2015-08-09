/*************************************************************************
> File Name: words_statistic.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Tue 16 Jun 2015 10:08:22 AM CST
************************************************************************/

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<iomanip>

typedef struct
{
    std::string word;
    int frequence;
}vecs;

class WordStatistic
{
    private:
    std::vector<vecs> vec;
    std::vector<int>::iterator it;


    public:
    void read_file(std::string filename)
    {
        std::ifstream ifs(filename, std::ios::in);
        if(!ifs.good())
        {
            std::cout<<"ifstream fail"<<std::endl;
            exit(EXIT_FAILURE);
        }

        std::string line;

        bool first_flag = true;
        while(getline(ifs, line))
        {
            index = 0;
            while(line[index])
            {
                if(!isalpha(line[index]))
                {
                    line[index] = ' ';
                }
                index++;
            }

            std::stringstream ss(line);

            std::string word_tmp;
            while(ss>>word_tmp)
            {
                if(first_flag)
                {

                    vec.word.push_back(word_tmp);
                    vec.frequence.push_back(1);
                    first_flag = false;
                    continue;
                }

                for(it=vec.begin(); it<vec.end(); it++)
                {
                    if(*it.word == word_tmp)
                    {
                        *it.frequence++;
                        break;
                    }
                }

                if(it == vec.end())
                {
                    vec.word.push_back(word_tmp);
                    vec.frequence.push_back(1);
                }
            }
        }

    }

    void write_file(std::string filename)
    {

        std::fstream fs(filename, std::ios::out | std::ios::in);

        if(!fs.good())
        {

            std::cout<<"fstream fail"<<std::endl;
            exit(EXIT_FAILURE);
        }

        fs<<"--------------------RESULT-----------------"<<std::endl;
        fs<<std::setw(15)<<"WORD"<<std::setw(20)<<"TOTAL"<<std::endl;
        fs<<"-------------------------------------------"<<std::endl;
        for(it=vec.begin(); it<vec.end(); it++)
        {
            fs<<std::setw(20)<<*it.word<<"\t"<<std::setw(8)<<*it.frequence<<std::endl;;
        }

        fs<<std::endl;
        fs<<"-------------------------------------------"<<std::endl;
    }
    };

int main(void)
{
    std::cout<<"Enter a filename(with absolute path)"<<std::endl;

    std::string filename_input;
    std::cin>>filename_input;
    WordStatistic::read_file(filename_input);

    std::string filename_output;
    std::cout<<"Enter a filename for storing the result(absolute path)"<<std::endl;
    std::cin>>filename_output;
    WordStatistic::write_file(filename_output);

    return 0;
}
