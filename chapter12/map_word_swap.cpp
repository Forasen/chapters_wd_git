/*********************************************
> File  : map_word_swap.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 21 Jun 2015 11:16:33 PM CST
********************************************/

#include<iostream>
#include<map>
#include<iterator>
#include<sstream>
#include<fstream>
#include<vector>
#include<cstring>

int main(void)
{
    std::cout<<"Enter the first filename : ";
    std::string swapFileName;
    std::cin>>swapFileName;
    std::ifstream swapFile(swapFileName.c_str());
    if(!swapFile.good())
    {
        std::cout<<"error : unable to open swap file : "<<swapFileName<<std::endl;
        return -1;
    }

    std::map<std::string, std::string> map_swap;

    std::string line;
    std::string tmp_word;
    while(getline(swapFile, line))
    {
        std::stringstream ss(line);

        bool flag = false;

        std::string str1;
        std::string str2;
        while(ss >> tmp_word)
        {
            if(!flag)
            {
                str1 = tmp_word;
                flag = true;
            }
            else
            {
                str2 = tmp_word;
            }
        }
        map_swap[str1] = str2;
    }
    swapFile.close();
    std::string outFileName;
    std::cout<<"Enter a required file : ";
    std::cin>>outFileName;
    std::fstream outFile(outFileName.c_str());
    if(!outFile.good())
    {
        std::cout<<"error : unable open file : "<<outFileName<<std::endl;
        return -1;
    }

    std::vector<std::string> vec;
    while(getline(outFile, line))
    {
        std::stringstream ss(line);
        bool flag_line = true;

        while(ss >> tmp_word)
        {
            if(!flag_line)
            {
                vec.push_back(" ");
            }
            flag_line = false;
            std::map<std::string, std::string>::iterator it = map_swap.find(tmp_word);
            if(it != map_swap.end())
            {
                vec.push_back(it->second);
            }
            else
            {
                vec.push_back(tmp_word);
            }
        }
        vec.push_back("\n");
    }

    outFile.close();
    std::fstream outFile1(outFileName.c_str(), std::fstream::out);
    if(!outFile1.good())
    {
        std::cout<<"error : unable open file : "<<outFileName<<std::endl;
        return -1;
    }

    std::vector<std::string>::iterator vec_it;
    for(vec_it=vec.begin(); vec_it!=vec.end(); vec_it++)
    {
        outFile1<<(*vec_it);
    }
    outFile.close();
    return 0;
}

