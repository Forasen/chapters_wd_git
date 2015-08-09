/*************************************************************************
    > File Name: io_file.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 03:49:36 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<vector>
int main(void)
{
    std::ifstream ifs("io_test.cpp");
    if(!ifs.good())
    {
        std::cout<<"ifstream error!"<<std::endl;
        return -1;
    }

    std::ofstream ofs("ioio.txt");//默认情况下一out方式打开

    std::string line;
    while(getline(ifs, line))
    {
        ofs << line<<std::endl;
        //ofs<<'\n';
    }


    ifs.close();
    ofs.close();
    return 0;
}

int  test()
{

    std::ifstream ifs("io_test.cpp");
    if(!ifs.good())
    {
        std::cout<<"ifstream error!"<<std::endl;
        return -1;
    }

    std::string s;
#if 0
    while(ifs>>s)//对于字符串，空格作为默认的分隔符
    {
        std::cout<<s<<std::endl;
    }
#endif
#if 0
    while(getline(ifs, s))//获取一行字符串
    {
        std::cout<<s<<std::endl;
    }
#endif

    //将读取的内容全部放到容器里面
    std::vector<std::string> vec_str;

    while(getline(ifs, s))
    {
        vec_str.push_back(s);
    }

    std::vector<std::string>::iterator it;

    for(it=vec_str.begin(); it!=vec_str.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
    std::cout<<std::endl;

    std::cout<<"vec_str'size'="<<vec_str.size()<<std::endl;

    ifs.close();//一定要记得关闭文件

}
