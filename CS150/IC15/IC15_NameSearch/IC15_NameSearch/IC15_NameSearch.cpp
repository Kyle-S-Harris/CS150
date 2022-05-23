/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #15
 * LAST MODIFIED: 10/16/18
 *****************************************************/
/*****************************************************************************
 * NameSearch
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to determine the rank of a given name for 2018.
 *****************************************************************************
 * ALGORITHM:
 * 1. Use readFile function to open and loop both name files into arrays.
 * 2. Prompt user for a name and use that name with the nameSearch function to determine
 * if the name is in  the top 1000 for 2018, for either sex.
 * 3. Output results of nameSearch.
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

// Function Prototypes

bool readFile(string fileName, string names[], int size);
int nameSearch(string input, string names[], int size);

int main(int argc, char * argv[])
{
    const int SIZE = 1000;
    string input, boyNames[1000], girlNames[1000];
    int boyRank, girlRank;
    
    if(!readFile("Girls2018.txt", girlNames, SIZE)
      || !readFile("Boys2018.txt", boyNames, SIZE))
    {
        cout << "Error reading input files." << endl;
        system("PAUSE");
        return EXIT_FAILURE;
    }
    
    //Prompt user to enter a name
    cout << "Please enter a name: ";
    cin >> input;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    boyRank = nameSearch(input, boyNames, SIZE);
    girlRank = nameSearch(input, girlNames, SIZE);
    
    if(boyRank > 0 && boyRank <= 1000)
    {
        cout << "The name " << input << " is ranked #" << boyRank << " for boys in 2018\n";
    }
    else
    {
        cout << "The name " << input << " is quite unique for boys in 2018.\n";
    }
    
    if (girlRank > 0 && girlRank <= 1000)
    {
        cout << "The name " << input << " is ranked #" << girlRank << " for girls in 2018.\n\n";
    }
    else
    {
        cout << "The name " << input << " is quite unique for girls in 2018.\n\n";
    }
    
    
 
    system("PAUSE");
    return EXIT_SUCCESS;
}

bool readFile(string fileName, string names[], int size)
{
    ifstream inFile;
    int count;
    count = 0;
    
    // Open file
    inFile.open(fileName.c_str());
    
    if(!inFile.is_open())
    {
        return false;
    }
    
    //Loop through the file
    while(!inFile.eof())
    {
        inFile >> names[count];
        count++;
    }
    
    //After loop, close the file
    inFile.close();
    return true;
}

int nameSearch(string input, string names[], int size)
{
    //Loop through array (for)
    for(int i = 0; i < size; i++)
    {
        //If you find match, return rank
        if(input == names[i])
        {
            return i + 1;
        }
    }
    //Makes it through wholle loop with no match.
    return -1;
}
