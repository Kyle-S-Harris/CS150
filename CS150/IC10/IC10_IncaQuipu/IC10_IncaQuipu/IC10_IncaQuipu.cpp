/* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #10
* LAST MODIFIED: 10/01/18
*****************************************************/
/*****************************************************************************
* IncaQuipu
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to output an Inca Quipu
*****************************************************************************
* ALGORITHM:
* 1. Ask user for num between 0 and 999
* 2. Determine the number of numbers of values in the hundreds, tens, and ones places and output their results
* 3. Output the Inca quipu (stars seperated by dashes) based on the number of each numbers place.
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
    int userInput, hundreds, tens, ones, number;
    bool isNotValid;
    string hundredsStars, tensStars, onesStars;
    
    
    do
    {
        cout << "Enter a number between 0 and 999: ";
        cin >> userInput;
        
        number = userInput;
        
        if (userInput >= 0 && userInput <= 999)
        {
            isNotValid = false;
        }
        else
        {
            cout << "\nError: number must be between 0 and 999.\n\n";
            isNotValid = true;
        }
    }while(isNotValid);
    
    hundreds = userInput / 100;
    userInput -= hundreds * 100;
    tens = userInput / 10;
    userInput -= tens * 10;
    ones = userInput;
    
    cout << "\nHundreds = " << hundreds << endl;
    cout << "Tens     = " << tens << endl;
    cout << "Ones     = " << ones << endl;
    
    for (int i = 0; i < hundreds; i++)
    {
        hundredsStars += "*";
    }

    for (int i = 0; i < tens; i++)
    {
        tensStars += "*";
    }
    
    for (int i = 0; i < ones; i++)
    {
        onesStars += "*";
    }
    
    cout << "\nAs an Inca Quipu, " << number << " is expressed as:\n"
    << "|---" << hundredsStars << "---" << tensStars << "---" << onesStars << "---|\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
