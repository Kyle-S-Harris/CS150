/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #09
* LAST MODIFIED: 09/25/18
*****************************************************/
/*****************************************************************************
* BasicCalculator
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to do basic calculations between 2 real numbers.
*****************************************************************************
* ALGORITHM:
* 1. Ask user for the operator they want to use for their 2 numbers (+,-,*,/,%,^)
* 2. Ask user for their first number
* 3. Ask user for their second number
* 4. Use switch statement to determine which operator the user wants and then
* use that operator to calculate the equation of num1 and num2.
* 5. Output the equation
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <cmath>: used to perform special math functions.*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{
    double num1, num2, equals;
    char symbol;
    cout << "***************************************************************************\n"
         << "**                                                                       **\n"
         << "**                  Welcome to Kyle's Basic Calculator                   **\n"
         << "**                                                                       **\n"
         << "***************************************************************************\n"
         << "Type one of the following operators:\n"
         << "+ (for adding numbers)\n"
         << "- (for subtracting numbers)\n"
         << "* (for multiplying numbers)\n"
         << "/ (for dividing numbers)\n"
         << "% (for finding the remainder when two numbers are divided)\n"
         << "^ (for exponentiation - one number raised to the power of the other)\n"
         << "***************************************************************************\n";
    cin >> symbol;
    
    cout << "Enter an operand (number): ";
    cin >> num1;
    
    cout << "Enter an operand (number): ";
    cin >> num2;
    
    switch (symbol)
    {
        case '+':
            equals = num1 + num2;
            break;
        case '-':
            equals = num1 - num2;
            break;
        case '*':
            equals = num1 * num2;
            break;
        case '/':
            equals = num1 / num2;
            break;
        case '%':
            equals = fmod(num1, num2);
            break;
        case '^':
            equals = pow(num1, num2);
            break;
        default:
            cout << "ERROR: Must enter valid operator.\n\n";
            return EXIT_FAILURE;
    }
    
    cout << num1 << " " << symbol << " " << num2 << " = " << equals << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
