#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief function to find the missing word
 * 
 * @param OriginalWords 
 * @param words 
 * @return string 
 */
string Missing_Word(list<string> OriginalWords, list<string> words)
{
  OriginalWords.sort();
  words.sort();
  string missed_word;
  for(string word1:OriginalWords)
  { 
    int flag = 0;
    for(string word2:words)
    {
      if(word2==word1)
      {
        flag = 1;
        break;
      }
    }
    if(!flag){
      missed_word = word1;
      break;
    };
  }
  return missed_word;
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
  list<string> Original_Words{"AA", "BB", "CC", "DD", "EE"};
  list<string> words{"AA", "CC", "DD", "EE"};
  cout<<Missing_Word(Original_Words, words)<<endl;
}