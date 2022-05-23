/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #15
 * LAST MODIFIED: 10/16/18
 *****************************************************/
/*****************************************************************************
 * MoreNestedLoops
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to output nested loops.
 *****************************************************************************
 * ALGORITHM:
 * 1. Prototype inputValidation function
 * 2. In main, loop through each line and inside the loop, for each row loop through
 * half the number of dashes, the number of numbers, and then the second half of the dashes and output them as you go.
 * 3. Ask user for a number of rows for the second shape
 * 4. Loop through each line of that number of rows, for each row loop through the number
 * of forward slashes, the number of stars, and the number of backslashes and output them as you go.
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

using namespace std;

double inputValidation(string message, string errorMessage, double min, double max);

int main(int argc, char * argv[])
{
    int numLines, numSpaces, numDashes, numNums, numSlashes, numStars, currentLine;
    
    numLines = 5;
    numSpaces = 11;
    numDashes = 10;
    numNums = 1;
    
    for(int i = 0; i < numLines; i++)
    {
        for(int j = 0; j < numDashes / 2; j++)
        {
            cout << "-";
        }
        
        for(int k = 0; k < numNums; k++)
        {
            cout << numNums;
        }
        
        for(int h = 0; h < numDashes / 2; h++)
        {
            cout << "-";
           
        }
        
        cout << endl;
        numDashes -= 2;
        numNums += 2;
    }
    
    numLines = inputValidation("\nPlease enter the number of rows for a shape output: ", "Error: you must enter a number greater than 0", 1, INT_MAX);
    
    if(numLines == 1)
    {
        numSlashes = 0;
    }
    else
    {
        numSlashes = 4 * (numLines - 1);
    }
    numStars = 0;
    currentLine = 1;
    
    for(int i = 0; i < numLines; i++)
    {
        for(int j = 0; j < numSlashes; j++)
        {
            cout << "/";
        }
        
        if(numLines == 1 || currentLine > 1)
        {
            numStars += 8;
            for(int k = 0; k < numStars; k++)
            {
                cout << "*";
            }
        }
        for(int h = 0; h < numSlashes; h++)
        {
            cout << "\\";
        }
        
        cout << endl;
        numSlashes -= 4;
        currentLine++;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

double inputValidation(string message, string errorMessage, double min, double max)
{
    double userInput;
    bool isNotValid = true;
    
    do
    {
        
        cout << message;
        cin >> userInput;
        
        isNotValid = cin.fail() || userInput < min || userInput > max;
        
        
        if (isNotValid)
        {
            cout << errorMessage << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        
    }while(isNotValid);
    
    return userInput;
}
