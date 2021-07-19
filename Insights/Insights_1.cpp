/**
 * @file Insights_1.cpp
 * @author Kavya
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

using namespace std;

class Box
{
private:
/**
 * @brief private parameters
 * 
 */
    int m_length;  // Length of a box
    int m_breadth; // Breadth of a box
    int m_height;  // Height of a box

public:
/**
 * @brief Construct a new Box object
 * 
 */
    Box() : m_length(0), m_breadth(0), m_height(0)
    {
    }
/**
 * @brief Construct a new Box object
 * 
 * @param length 
 * @param breadth 
 * @param height 
 */
   Box(int length, int breadth, int height):m_length(length), m_breadth(breadth), m_height(height)
   {
   }

   Box *construct(Box *b_arr, int index, int length, int breadth, int height)
   {
       void *addr = &b_arr[index];
       Box *ptr = new (addr) Box(length, breadth, height);
       return ptr;
   }
    /**
     * @brief Destroy the Box object
     * 
     */
   ~Box()
   {
      // std::cout << "Destructor\n";
   }
};

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    int array[3] = {1, 2, 3};
    Box *ptr = new (array) Box;

    int array1[5][3] = {{1, 2, 9}, {5,9, 3 }, {3, 1, 6}, {1, 2, 6}, {2, 3, 4}};
    Box *par = new (array1) Box[5];

    Box b_adrr[12];
    b_adrr->construct(b_adrr, 12, 1, 4, 9);
}
