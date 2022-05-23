/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #11
 * LAST MODIFIED: 10/02/18
 *****************************************************/
/*****************************************************************************
 * AverageRainfall
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to calculate the total and average rainfall for a set number of years.
 *****************************************************************************
 * ALGORITHM:
 * 1. Get the number of years from user
 * 2. Get amounts of rain for each month from user
 * 3. Calculate total, average, and number of months.
 * 4. Output total, average, and number of months
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

int main(int argc, char * argv[])
{
    int numYears, totalMonths;
    double rain, total, average;
    bool inputFail;
    const string MONTH_NAMES[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    total = 0;
    
    do
    {
        cout << "Enter the number of years: ";
        cin >> numYears;
        //input fails when wrong data type (cin.fail()) or when years <= 0
        inputFail = cin.fail() || numYears < 1;
        
        if(inputFail)
        {
            cout << "Error: number of years must be > 0\n";
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
    }while (inputFail);
    
    //After input validation, loop through each year
    for(int i = 1; i <= numYears; i++)
    {
        cout << "\nStarting year number " << i << "\n";
        //nested loop - loop wirthin a loop
        //to go through each month
        for(int j = 0; j <= 11; j++)
        {
            do
            {
                cout << "Enter amount of rain for " << MONTH_NAMES[j] << ": ";
                cin >> rain;
                //input fails when wrong data type (cin.fail()) or when years <= 0
                inputFail = cin.fail() || rain < 0;
                
                if(inputFail)
                {
                    cout << "Error: rain must not be < 0\n";
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                }
                else
                {
                    total += rain;
                }
            }while (inputFail);
        }
    }
    
    totalMonths = numYears * 12;
    average = total / totalMonths;
    
    cout << fixed << setprecision(2) << "\nOver " << totalMonths << " months;\n" << "Total of " << total
    << " inches of rain\nAverage of " << average << " inches per month\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
