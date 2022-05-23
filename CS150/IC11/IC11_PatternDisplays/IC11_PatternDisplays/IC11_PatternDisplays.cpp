/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #11
 * LAST MODIFIED: 10/02/18
 *****************************************************/
/*****************************************************************************
 * PatternDisplays
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that displays various triangle patterns
 *****************************************************************************
 * ALGORITHM:
 * 1. Use nested loops to output pattern A
 * 2. Use nested loops to output pattern B
 * 3. Use nested loops to output pattern C
 * 4. Use nested loops to output pattern D
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

int main(int argc, char * argv[])
{
    int numOnLine, numLines, numSpaces;
    
    numOnLine = 1;
    numLines = 10;
    numSpaces = 5;
    
    cout << "Pattern A:\n\n";
    for (int i = 0; i < numLines; i++)
    {
        for (int j = 0; j < numOnLine; j++)
        {
            cout << "+";
        }
        cout << endl;
        numOnLine++;
    }
    
    cout << endl << "Pattern B:\n\n";
    numOnLine = 10;
    
    for (int i = 0; i < numLines; i++)
    {
        for (int j = 0; j < numOnLine; j++)
        {
            cout << "+";
        }
        cout << endl;
        numOnLine--;
    }
    
    cout << endl << "Pattern C:\n\n";
    numOnLine = 1;
    numLines = 6;
    
    for (int i = 0; i < numLines; i++)
    {
        for (int j = 0; j < numSpaces; j++)
        {
            cout << " ";
        }
        
        for(int k = 0; k < numOnLine; k++)
        {
            cout << "*";
        }
        
        cout << endl;
        numSpaces --;
        numOnLine += 2;
    }
    
    cout << endl << "Pattern D:\n\n";
    numSpaces = 0;
    numOnLine = 11;
    
    for (int i = 0; i < numLines; i++)
    {
        for (int j = 0; j < numSpaces; j++)
        {
            cout << " ";
        }
        
        for(int k = 0; k < numOnLine; k++)
        {
            cout << "*";
        }
        
        cout << endl;
        numSpaces ++;
        numOnLine -= 2;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
