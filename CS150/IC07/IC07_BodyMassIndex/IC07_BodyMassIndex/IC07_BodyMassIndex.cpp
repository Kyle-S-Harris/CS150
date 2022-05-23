/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #07
* LAST MODIFIED: 09/18/18
*****************************************************/
/*****************************************************************************
* BodyMassIndex
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to calculate BMI
*****************************************************************************
* ALGORITHM:
* 1. Ask user for weight
* 2. Check user weight for validity
* 3. Ask user for height
* 4. Check user height for validity
* 5. Calculate BMI with user weight and height in formula
* 6. Output BMI
* 7. Check where BMI falls into range categories and output message for which
* category the person's BMI fits into
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
* <cmath>: used to perform special math functions.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{
    int weight, height;
    double bmi;
    
    cout << "Enter weight in lbs: ";
    cin >> weight;
    
    if(weight <= 0)
    {
        cout << "\nWeight must be greater than 0 lbs.\n\n";
        return EXIT_FAILURE;
    }
    
    cout << "Enter height in inches: ";
    cin >> height;
    
    if(height <= 0)
    {
        cout << "\nHeight must be greater than 0 inches.\n\n";
        return EXIT_FAILURE;
    }
    
    bmi = (weight * 703) / pow(height, 2);
    cout << fixed << setprecision(1) << "\nYour BMI is " << bmi;
    
    if(bmi >= 30)
    {
        cout << "\nYour BMI category is obese.\n\n";
    }
    else if(bmi < 30 && bmi >= 25)
    {
        cout << "\nYour BMI category is overweight.\n\n";
    }
    else if(bmi < 25 && bmi >= 18.5)
    {
        cout << "\nYour BMI category is normal.\n\n";
    }
    else
    {
        cout << "\nYour BMI category is underweight.\n\n";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
