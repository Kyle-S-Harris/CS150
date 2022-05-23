/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #13
 * LAST MODIFIED: 10/15/18
 *****************************************************/
/*****************************************************************************
 * InputValidation
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to confirm validity of int or double.
 *****************************************************************************
 * ALGORITHM:
 * 1. Prototype inputValidation function
 * 2. In inputValidation, ask user for a number within range
 * 3. If out of range, output error and keep asking user for input until
 * they give proper answer
 * 4. Once proper answer is received, return the userInput
 * 5. In main, call function using different arguments for each transaction
 * 6. For transaction 3, determine output message based off inputValidation return value
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * <iomanip>: to modify input/output characteristics.
 *****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

double inputValidation(string message, string errorMessage, double min, double max);

int main(int argc, char * argv[])
{
    string menu = "********************************************************************\n";
    menu += "** **\n";
    menu += "** THE SUPER DUPER MENU **\n";
    menu += "** **\n";
    menu += "********************************************************************\n";
    menu += "** Please select from the following choices: **\n";
    menu += "** 1) Have some fun(ctions) **\n";
    menu += "** 2) Write some code **\n";
    menu += "** 3) Study for the midterm **\n";
    menu += "** 4) Exit **\n";
    menu += "********************************************************************\n";
    string subject1, subject2, subject3, type1, type2, type3;
    double min1, min2, min3, max1, max2, max3, output2;
    int output1, output3;
    
    min1 = 1;
    min2 = 0.0;
    min3 = 1;
    
    max1 = 30;
    max2 = 4.0;
    max3 = 4;
    
    
    cout << "Transaction #1 - Integer Input\n\n";
    output1 = inputValidation("Please enter attendance: ", "Error: Attendance must be between 1-30.", min1, max1);
    cout << "\nThe attendance you entered is: " << (int) output1 << "\n\n";
    
    cout << "Transaction #2 - Double Input\n\n";
    output2 = inputValidation("Please enter GPA: ", "Error: GPA must be between 0.0-4.0.", min2, max2);
    cout << "\nThe GPA you entered is: " << output2 << "\n\n";
    
    cout << "Transaction #3 - Menu Input\n\n";
    output3 = inputValidation(menu, "Error: Menu choice must be between 1-4", min3, max3);
    
    if(output3 == 1)
    {
        cout << "\nYou chose to have some fun(ctions)!\n\n";
    }
    else if(output3 == 2)
    {
        cout << "\nYou chose to write some code!\n\n";
    }
    else if(output3 == 3)
    {
        cout << "\nYou chose to study for the midterm!\n\n";
    }
    else
    {
        cout << "\nYou chose to exit!\n\n";
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
