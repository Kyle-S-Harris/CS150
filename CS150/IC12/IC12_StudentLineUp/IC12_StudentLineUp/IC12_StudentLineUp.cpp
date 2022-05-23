/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #12
* LAST MODIFIED: 10/04/18
*****************************************************/
/*****************************************************************************
* StudentLineUp
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to determine, in alphabetical order, which student is first in line,
* and which is last.
*****************************************************************************
* ALGORITHM:
* 1. Open file, output error if it doesn't open
* 2. Until the end of the file, read all the names in the file into a string array
* 3. Determine which students will be first and last by looping through array
* and comparing each position with the current max and min; assign appropriately if needed
* 4. Output the first and last student in line
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <fstream>: to read and/or write to files.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
    
    int i;
    bool isNotOpen;
    string fileName, first, last;
    string names[28];
    
    i = 0;
    fileName = "LineUp.txt";
    
    ifstream inFile;
    
    //Try to open file
    inFile.open(fileName.c_str());
    
 
    isNotOpen = !inFile.is_open();
    
    //Check to see if it's open
    if(isNotOpen)
    {
        cout << "Error: file " << fileName << " could not open.";
        return EXIT_FAILURE;
    }
    
    
    while(!inFile.eof())
    {
        inFile >> names[i];
        
        if(i < sizeof(names) / sizeof(*names))
        {
            i++;
        }
    }
    inFile.close();
    
    last = names[0];
    first = names[0];
    
    for(int j = 0; j < sizeof(names) / sizeof(*names); j++)
    {
        if(names[j] > last)
        {
            last = names[j];
        }
        if(names[j] < first)
        {
            first = names[j];
        }
    }
    
    cout << "The first student in line will be: " << first
    << "\n\nThe last student in line will be: " << last << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
