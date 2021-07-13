/**
 * @file STL_7.cpp
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
#include<cstdlib>

using namespace std;

/**
 * @brief function to find the no.of.Elements Smaller than their mean
 * 
 * @param arr 
 * @param n 
 * @return int 
 */
int LowerArray(vector<int> &arr, int n)
{
    int countSmaller=0;
    int initial_sum = 0;
    for(int i=0; i<n; i++)
    {
        initial_sum += arr[i];
    }
    for(int i=0; i<n; i++){
        if (arr[i]<(initial_sum/n)){
            countSmaller++;
        }
    }
    return countSmaller;
}

/**
 * @brief  function to find the no.of.Elements Larger than their mean
 * 
 * @param arr 
 * @param n 
 * @return int 
 */
int LargerArray(vector<int> &arr, int n)
{
    int countLarger = 0;
    int initial_sum = 0;
    for(int i=0; i<n; i++)
    {
        initial_sum += arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>(initial_sum/n))
        {
            countLarger++;
        }
    }
    return countLarger;
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
    int large = LargerArray(array, n);
    int small = LowerArray(array, n);
    cout<<"Number of Elements Smaller than array's mean = "<<small<<endl;
    cout<<"Number of Elements Larger than Array's mean = "<<large<<endl;
    cout<<" difference both count = "<<small-large<<endl;
   int  a= abs(small - large);
   cout<<" Absolute difference both count = "<<a<<endl;

}