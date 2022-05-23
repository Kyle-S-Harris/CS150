/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #18
 * LAST MODIFIED: 10/30/18
 *****************************************************/
/*****************************************************************************
 * Reverser
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that can display an array in order of position and the reverse of that order.
 *****************************************************************************
 * ALGORITHM:
 * 1. Ask user how many numbers they would like to enter (size)
 * 2. Ask user for a number for each position and loop values into new array with
 * a size from the value set in step 1
 * 3. Call printArray with the array of values entered and the size; the in-order
 * array is printed.
 * 4. Call reversedArray with the array of values entered and the size; the reversed
 * array is printed and a pointer to the reversed array is returned.
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

void printArray(int* original, int size);
int* reversedArray(int* reversed, int size);

int main(int argc, char* argv[])
{
    int size, currentNum;
    int* values = 0;
    
    std::cout << "How many values would you like to enter: ";
    std::cin >> size;
    std::cout << std::endl;
    
    values = new int[size];
    
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter value #" << i + 1 << ": ";
        std::cin >> currentNum;
        values[i] = currentNum;
    }
    
    std::cout << std::endl;
    printArray(values, size);
    std::cout << "\n\n";
    values = reversedArray(values, size);
    std::cout << "\n\n";
    
    delete [] values;
    values = 0;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void printArray(int* original, int size)
{
    std::cout << "The contents of the original array are:\n[";
    
    for(int i  = 0; i < size; i++)
    {
        if(i == size - 1)
        {
            std::cout << original[i];
        }
        else
        {
            std::cout << original[i] << ", ";
        }
        
    }
    std::cout << "]";
}

int* reversedArray(int* reversed, int size)
{
    std::cout << "The contents of the reversed array are:\n[";
    
    for(int i = size; i > 0; i--)
    {
        if(i == 1)
        {
            std::cout << reversed[i - 1];
        }
        else
        {
            std::cout << reversed[i - 1] << ", ";
        }
        
    }
    std::cout << "]";
    
    return reversed;
}
