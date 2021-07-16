#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <cstring>
#include <iterator>
void tokensize(std::string const &str, const char delimeter,std::map<std::string,int> &word)
{
    std::stringstream ss(str);
 
    std::string s;
    while (std::getline(ss, s, delimeter)) 
    {
        word.insert(std::pair<std::string,int>(s,s.length()));
    }
}
int main()
{
    std::string str="this is intermediate c++ module";
    const char delimeter = ' ';
    std::map<std::string, int> map_Of_Word_Count;
    tokensize(str,delimeter,map_Of_Word_Count);
    for( std::map<std::string, int>::iterator it= map_Of_Word_Count.begin();it != map_Of_Word_Count.end();it++)
    {
        std::cout<<it->first << ":"<<it->second<<std::endl;
    }
return 0;
}
