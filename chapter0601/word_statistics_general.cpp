/*************************************************************************
    > File Name: word_statistics_general.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 07:15:04 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>

#define MAX 10000

using namespace std;

void sort(string numW[MAX], int wordI[MAX], int wordNum)
{
    int flag_swap = 1;
    while(flag_swap)
    {
        flag_swap = 0;
        for(size_t index=1; index<wordNum; index++)
        {
            if(wordI[index-1] < wordI[index])
            {
                int tmp_int = wordI[index-1];
                wordI[index-1] = wordI[index];
                wordI[index] = tmp_int;

                std::string tmp_string = numW[i-1];
                numW[i-1] = numW[i];
                numW[i] = tmp_string;

                flag_swap = 1;
            }
        }
    }
}

bool compare_word(string word[MAX], string target_word, int current_length)
{
    for(size_t index=0; index<current_length; index++)
    {
        if(word[index] == target_word)
        {
            return true;
        }
    }
    return false;
}

void statistic_word(string str, int len)
{
    string numW[MAX];
    for(size_t index=0; index<MAX; index++)
    {
        wordI[index] = 0;
        numW[index] = "";
    }

    int location = 0;
    char ch;
    string tmp_word = "";
    bool find_flag;
    while(location < len)
    {
        ch = str.at(location);
        if(ch!=' '&&ch!=',')
        {
            tmp_word += ch;
        }
        else
        {
            find_flag = false;
            if(!compare_word(numW, tmp_word, index))
            {
                numW[index] = tmp_word;
                word[index] = 1;
                find_flag = true;
            }
            tmp_word = "";
            for(size_t index_j=location+1; index<len; index_j++)
            {
                ch = str.at(index_j);
                if(ch!=' '&&ch!=',')
                {
                    tmp_word += ch;
                }
                else
                {
                    if(numW[index] == tmp_word)
                    {
                        wordI[index]++;
                    }
                    tmp_word = "";
                }
            }
            if(tmp_word != "")
            {
                if(num_word[index] == tmp_word)
                {
                    wordI[index]++;
                }
                tmp_word = "";
            }
            if(find_flag)
            {
                index++;
            }
        }
        location++;
    }
    if(tmp_word != "")
    {
        find_flag = false;
        if(!compare_word(numW, tmp_word, index))
        {
            numW[index] = tmp_word;
            wordI[index] = 1;
            fine_flag = true;
        }
        tmp_word = "";
        for(index_j=location+1; index_j<len; index_j++)
        {
            ch = str.at(index_j);
            if(ch!=' '&&ch!=',')
            {
                tmp_word+=ch;
            }
            else
            {
                if(numW[index] == tmp_word)
                {
                    wordI[index]++;
                }
                tmp_word = "";
            }
        }
        if(tmp_word != "")
        {
            if(numW[index] == tmp_word)
            {
                wordI[index]++;
            }
            tmp_word = "";
        }
        if(find_flag)
        {
            index++;
        }
    }

    std::cout<<"WORD\tCOUNT"<<std::endl;

    for(index_j=0; index_j<index; index_j++)
    {
        std::cout<<numW[index_j]<<"\t"<<word[index_j]<<std::endl;
    }
}

int main(void)
{
    string words = "little, littel, little, word, word hello ";
    statistic_word(words, words.length());

    return 0;
}
