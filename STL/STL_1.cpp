/**
 * @file STL_1.cpp
 * @author Kavya
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;
pair<int, int> indices{-1,-1};
vector<int> numbers = {1,2,3,4,5,6,7};
int FLAG = 0;

pair<int, int> findindices(vector<int> numbers, int target)
{   
    for(auto number:numbers)
    {
        for(auto num:numbers)
        {
            if(num+number == target)
            {
                FLAG = 1;
                return {number,num};
            }
        }
    }
    if(FLAG!=1)
    {
        return {-1,-1};
    }
}

int main()
{
    int target = 5;
    indices = findindices(numbers, target);
    cout<<"{"<<indices.first<<", "<<indices.second<<"}"<<endl;
    return 0;
}