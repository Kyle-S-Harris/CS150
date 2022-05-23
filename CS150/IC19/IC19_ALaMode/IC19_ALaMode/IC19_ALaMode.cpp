/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #19
 * LAST MODIFIED: 11/12/18
 *****************************************************/
/*****************************************************************************
 * ALaMode
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to determine the mode of some numbers.
 *****************************************************************************
 * ALGORITHM:
 * 1. Create two int arrays, one that has a mode and one that doesn't.
 * 2. Call findMode and use arrays and size in params to return mode
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *****************************************************************************/

#include <cstdlib>
#include <iostream>

int findMode(int numbers[], int size);

int main(int argc, char* argv[])
{
    
    const int SIZE = 11;
    int numbers1[SIZE] = {2, 5, 3, 5, 3, 5, 7, 7, 6, 6, 5};
    int numbers2[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    std::cout << "Here is dataset 1:\n";
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << numbers1[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "The mode of dataset 1 is: "
    << findMode(numbers1, SIZE) << std::endl;
    
    std::cout << "\nHere is dataset 2:\n";
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << numbers2[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "The mode of dataset 2 is: "
              << findMode(numbers2, SIZE) << std::endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int findMode(int numbers[], int size)
{
    //Declare the counts array
    int* counts = new int[size];
    //Initialize counts to all 0s
    for(int i = 0; i < size; i++)
    {
        counts[i] = 0;
    }
    
    int value;
    //Keep track of the count of each number
    for(int i = 0; i < size; i++)
    {
        value = numbers[i];
        for(int j = 0; j < size; j++)
        {
            if(value == numbers[j])
            {
                counts[i]++;
            }
        }
    }
    int maxCount = 1, mode = -1;
    
    for(int i = 0; i < size; i++)
    {
        if(counts[i] > maxCount)
        {
            maxCount = counts[i];
            mode = numbers[i];
        }
    }
    
    delete[] counts;
    counts = 0;
    
    return mode;
}
