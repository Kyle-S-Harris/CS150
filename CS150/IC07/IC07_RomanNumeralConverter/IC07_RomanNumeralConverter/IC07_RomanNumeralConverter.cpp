/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #07
* LAST MODIFIED: 09/18/18
*****************************************************/
/*****************************************************************************
* RomanNumeralConverter
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to convert a number 1-10 to a roman numeral
*****************************************************************************
* ALGORITHM:
* 1. Ask user for a number 1-10
* 2. Make sure number is 1-10, otherwise output error and exit program
* 3. If step 2 is a success, check for which number was inputted and set roman numeral to
* the respective value and output that roman numeral.
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <iomanip>: to modify input/output characteristics.
*
* <string>: to use string variable.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    int userNum;
    string equivalentRomanNumeral;
    
    cout << "Enter a number in the range 1 - 10: ";
    cin >> userNum;
    
    if(userNum > 0 && userNum <= 10)
    {
        if (userNum == 1)
        {
            equivalentRomanNumeral = "I";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 2)
        {
            equivalentRomanNumeral = "II";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 3)
        {
            equivalentRomanNumeral = "III";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 4)
        {
            equivalentRomanNumeral = "IV";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 5)
        {
            equivalentRomanNumeral = "V";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 6)
        {
            equivalentRomanNumeral = "VI";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 7)
        {
            equivalentRomanNumeral = "VII";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 8)
        {
            equivalentRomanNumeral = "VIII";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else if (userNum == 9)
        {
            equivalentRomanNumeral = "IX";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
        else
        {
            equivalentRomanNumeral = "X";
            cout << "\nAs a Roman Numeral, " << userNum << " is expressed as " << equivalentRomanNumeral
            << "\n\n";
        }
    }
    else
    {
        cout << "Error: number must be in the range 1 - 10.\n\n";
        return EXIT_FAILURE;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
