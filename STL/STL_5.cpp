#include<iostream>
#include<bits/stdc++.h>
#include<map>

/**
 * @brief it calculates the character frequency
 * 
 * @param str 
 * @return std::map<char, int> 
 */
std::map<char, int> Char_With_Frequency(std::string str)
{
    std::map<char , int> answer;
    for(char itr: str)
    {
        answer[itr]++;
    }
    return answer;
}
/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    std::string str ="kavya";
    std::map<char, int> result = Char_With_Frequency(str);
    for(char itr : str)
    {
        if(result[itr] !=0)
        {
            std::cout<<itr<<"-"<<result[itr]<<" "<<std::endl;
            result[itr]=0;
        }
    }
}