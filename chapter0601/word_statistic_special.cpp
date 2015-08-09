/*************************************************************************
> File Name: word_statistic_special.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Mon 15 Jun 2015 08:15:01 PM CST
************************************************************************/

#include<iostream>
#include<ctype.h>
#include<sstream>
#include<stdlib.h>
#include<fstream>
#include<cstring>


#define MAX 1000000
//struct of words for storing
typedef struct words
{
    std::string word;
    int count;
    struct words* next;
}word_t, *pword_t;

typedef struct
{
    std::string word;
    int count;
}words;

words word_arr[MAX];

void insert_sort(pword_t, std::string);
void show_result(pword_t phead);

void replace_un_alpha();
void extract_word(std::string);

int main(void)
{
    pword_t phead;
    replace_un_alpha();
    std::cout<<"phead:"<<phead->word<<std::endl;
    show_result(phead);
    return 0;
}

void store_word(std::string str)
{

    for(size_t index=0; index<MAX; index++)
    {
        if(word_arr[index] == str)
        {
            word_arr[index].count++;
        }
        else
        {
            word_arr[index].word = str;
            word_arr[index].count = 1;
        }
    }
}

#if 0

void insert_sort(pword_t phead, std::string str)
{
    pword_t pnew;
    pword_t pcur;
    pword_t ppre;

    pcur = phead;
    ppre = NULL;

    while(pcur!=NULL && str<pcur->word)
    {
        ppre = pcur;
        pcur = pcur->next;
    }

    if(str == pcur->word)
    {
        pcur->count++;
    }
    else
    {
        pnew = (pword_t)calloc(1, sizeof(word_t));
        pnew->word = str;
        pnew->count = 1;

        if(ppre == NULL)
        {
            pnew->next = phead;
            phead = pnew;
        }
        else
        {
            ppre->next = pnew;
            pnew->next = pcur;
        }
    }
}

#endif

void replace_un_alpha()
{
    for(size_t index=0; index<MAX; index++)
    {
        word_arr[index].word = "";
        word_arr[index].count = 0;
    }
    std::ifstream ifs("ioio.txt", std::ios::in);
    if(!ifs.good())
    {
        std::cout<<"ifstream fail"<<std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    pword_t phead;

    while(getline(ifs, line))
    {
        size_t index = 0;
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
            store_word(word_tmp);
            std::cout<<"word_tmp :"<<word_tmp<<std::cout;
        }
    }
}

void show_result(pword_t phead)
{
    pword_t pcur;
    pcur = phead;
    while(pcur != NULL)
    {
        std::cout<<pcur->word<<"\t"<<pcur->count<<std::endl;
        pcur = pcur->next;
    }
}

#if 0
int extract_word(const std::string &str)
{

    #if 1
    std::ifstream ifs("ioio.txt", std::ios::in);

    if(!ifs.good())
    {
        std::cout<<"ifstream fail"<<std::endl;

        return -1;
    }

    std::cout<<"the current location of the file"<<ifs.tellg()<<std::endl;
    #endif

    std::string line;
    std::stringstream ss;

    while(getline(ifs, line))
    {
        std::stringstream ss(line);

        std::string word;
        while(ss>>word)
        {
            std::cout<<word<<std::endl;
        }
    }

    //ifs.close();

}
#endif
