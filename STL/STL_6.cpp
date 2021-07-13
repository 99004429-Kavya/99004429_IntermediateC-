/**
 * @file STL_6.cpp
 * @author Kavya
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


/**
 * @brief function to find the no.of.Elements smaller than their mean
 * 
 * @param arr 
 * @param n 
 * @return int 
 */
int LowerArray(vector<int> &arr, int n)
{
    int initial_sum = 0;
    int count_Smaller=0;
    for(int i=0; i<n; i++)
    {
        initial_sum += arr[i];
    }
    for(int i=0; i<n; i++){
        if (arr[i]<(initial_sum/n)){
            count_Smaller++;
        }
    }
    return count_Smaller;
}

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Count of no.of.Elements smaller than their mean:"<<LowerArray(array, n)<<endl;
}