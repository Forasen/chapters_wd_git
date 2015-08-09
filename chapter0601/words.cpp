/*************************************************************************
> File Name: ./words.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Tue 16 Jun 2015 07:39:14 AM CST
************************************************************************/

#include<iostream>
#include<ctype.h>
#include<sstream>
#include<stdlib.h>
#include<fstream>
#include<cstring>
#include<iomanip>
#include<vector>

#define MAX 10000

typedef struct
{
    std::string word;
    int count;

}words;

int main(void)
{
    words word_arr[MAX];
    size_t index;
    size_t index_g;
    for(index=0; index<MAX; index++)
    {
        word_arr[index].word = "";
        word_arr[index].count = 0;
    }
    std::cout<<"Enter a filename"<<std::endl;

    char filename[100] = "";
    std::cin>>filename;
    std::ifstream ifs(filename, std::ios::in);
    if(!ifs.good())
    {
        std::cout<<"ifstream fail"<<std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line;

    int cnt = 0;
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

                word_arr[cnt].word = word_tmp;
                word_arr[cnt].count = 1;
                cnt++;
                first_flag = false;
                continue;
            }

            for(index_g=0; index_g<cnt; index_g++)
            {

                if(word_arr[index_g].word == word_tmp)
                {
                    word_arr[index_g].count++;
                    break;
                }
            }

            if(index_g == cnt)
            {
                word_arr[cnt].word = word_tmp;
                word_arr[cnt].count = 1;
                cnt++;
            }
        }
    }


        std::cout<<"--------------------RESULT-----------------"<<std::endl;
        std::cout<<std::setw(15)<<"WORD"<<std::setw(20)<<"TOTAL"<<std::endl;
        std::cout<<"-------------------------------------------"<<std::endl;
        for(index=0; index<cnt; index++)
        {
            std::cout<<std::setw(20)<<word_arr[index].word<<"\t"<<std::setw(8)<<word_arr[index].count<<"\t"<<";";
            if(index!=0 && index%3==0)
            {
                std::cout<<std::endl;
            }
        }

        std::cout<<std::endl;
        std::cout<<"-------------------------------------------"<<std::endl;

    return 0;
}
