//
//  main.cpp
//  IC19_ALaMode
//
//  Created by Kyle Harris on 10/25/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#include <cstdlib>
#include <iostream>

int mode(int* numbers, int size);

int main(int argc, char* argv[])
{
    
    const int SIZE = 11;
    int numbers[SIZE] = {2, 3, 3, 5, 5, 5, 7, 7, 6, 6, 5};
    
    std::cout << "The mode of this dataset is: "
    << mode(numbers, SIZE) << std::endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int findMode(int* numbers, int size)
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
            if(value == numbers[i])
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
