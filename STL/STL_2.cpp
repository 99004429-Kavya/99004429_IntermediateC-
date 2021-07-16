/**
 * @file STL_2.cpp
 * @author Kavya
 * @brief  
 * @version 0.1
 * @date 2021-07-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief function to find odd word 
 * 
 * @param words 
 * @return string 
 */
string find_Odd_Word_Out(list<string> words)
{
    int n = sizeof(words);
    list<string> differentWords = words;
    differentWords.sort();
    differentWords.unique();
    int a = count(words.begin(),words.end(),differentWords.front());
    int b = count(words.begin(),words.end(),differentWords.back());
    if(a==1)
    {
        return differentWords.front();
    }
    else
    {
        return differentWords.back();
    } 
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
  list<string> words{"Hi", "Hi", "Hi", "Hi", "Hlo"};
  cout<<find_Odd_Word_Out(words)<<endl;
}