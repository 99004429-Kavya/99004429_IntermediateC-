/**
 * @file STL_3.cpp
 * @author Kavya
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <iostream>
#include <list>
using namespace std;

/**
 * @brief function to find the average speed
 * 
 * @param DistanceList 
 * @param Interval 
 * @return float 
 */
float Average_Speed(list<float> DistanceList, float Interval)
{
    float average = 0;
    for(auto Distance:DistanceList)
    {
        average += Distance/(Interval * DistanceList.size()); 
    }
    return average;
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    float Interval = 2.5;
    list<float> DistanceList{0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    cout<<Average_Speed(DistanceList,Interval)<<endl;
}