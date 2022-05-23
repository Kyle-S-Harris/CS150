/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #18
 * LAST MODIFIED: 10/30/18
 *****************************************************/
/*****************************************************************************
 * MovieBuffs
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that determines who watched the least and the most movies this month.
 *****************************************************************************
 * ALGORITHM:
 * 1. Ask user how many people were surveyed
 * 2. In an array with the size of people watching, ask user for name of watcher
 * 3. In an array with the size of people watching, ask user for number of movies watched for that user
 * 4. Repeat steps 2 and 3 until all people surveyed have answered
 * 5. Output the person who watched the least, the person who watched the most,
 * and the average number of movies watched among all this month.
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * <iomanip>: used to modify output.
 *****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>

int main(int argc, char * argv[])
{
    int size, min = INT_MAX, max = INT_MIN;
    std::string minName, maxName;
    double average, total = 0;
    
    std::string* names = nullptr;
    int* movieCounts = 0;
    
    std::cout << "How many movie watchers were surveyed: ";
    std::cin >> size;
    std::cout << std::endl;
    
    //dynamically allocate the 2 new arrays
    names = new std::string[size];
    movieCounts = new int[size];
    
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter name of movie watcher: ";
        std::cin >> names[i];
        
        std::cout << "Enter number of movies watched: ";
        std::cin >> movieCounts[i];
        std::cout << std::endl;
        
        total += movieCounts[i];
        
        if(movieCounts[i] < min)
        {
            minName = names[i];
            min = movieCounts[i];
        }
        
        if(movieCounts[i] > max)
        {
            maxName = names[i];
            max = movieCounts[i];
        }
    }
    
    average = total / size;
    
    std::cout << "\nThe minimum movie watcher is " << minName << " with " << min
    << ((min == 1) ? " movie" : " movies") << " this month.\n";
    std::cout << "The maximum movie watcher is " << maxName << " with " << max
    << ((max == 1) ? " movie" : " movies") << " this month.\n";
    std::cout << std::fixed << std::setprecision(1) << "The average movies watched is: "
    << average << std::endl;
    
    
    
    //Remember to delete arrays!
    //Avoid memory leaks
    
    delete[] names;
    delete[] movieCounts;
    names = 0;
    movieCounts = 0;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
