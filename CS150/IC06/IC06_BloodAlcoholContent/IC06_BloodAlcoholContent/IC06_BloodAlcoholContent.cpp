/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #05
* LAST MODIFIED: 09/13/18
*****************************************************/
/*****************************************************************************
* BloodAlcoholContent
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to tell if you are drunk or not
*****************************************************************************
* ALGORITHM:
* 1. Ask user for num drinks consumed
* 2. Ask user for weight
* 3. Calculate bac with that information in formula (assume 2.5 ounce drinks)
* 4. If bac is greater than legal limit, output warning and bac, otherwise suggest
* caution and output bac.
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

using namespace std;

int main(int argc, char *argv[])
{
    const double LEGAL_LIMIT = .08;
    const double OUNCES_ALCOHOL = 1.5;
    int numberOfDrinks, weight;
    double bac;
    
    cout << "Please enter the number of alcoholic drinks consumed: ";
    cin >> numberOfDrinks;
    
    cout << "\nPlease enter your weight in lbs: ";
    cin >> weight;
    
    bac = (4.136 * numberOfDrinks * OUNCES_ALCOHOL) / weight;
    cout << fixed << setprecision(3) << "\n\nYour BAC is: " << bac;
    if(bac >= LEGAL_LIMIT)
    {
        cout << "\nAccording to the state of California, \nyou are intoxicated."
        << " Do not drive!!!\n\n";
    }
    else
    {
        cout << "\nYou're not legally intoxicated. \nYou may legally drive but still might "
        << "be impaired. Use caution.\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
