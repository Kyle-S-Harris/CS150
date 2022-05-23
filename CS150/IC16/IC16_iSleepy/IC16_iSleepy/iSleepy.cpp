/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #16
 * LAST MODIFIED: 10/23/18
 *****************************************************/
/*****************************************************************************
 * iSleepy
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to determine if you sleep enough.
 *****************************************************************************
 * ALGORITHM:
 * 1. Ask user for number of hours slept for each night
 * 2. Calculate average number hours of sleep bby taking total for the week and divide by 7
 * 3. Output number nights slept for each catgeory
 * 4. If average if between 7 and 9 output "recommended," otherwise if it's between 6 and 11 output
 * "may be appropriate," otherwise output "not recommended."
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
#include <iomanip>

using namespace std;

int main(int argc, char * argv[])
{
    const int SIZE = 7;
    double hours[SIZE];
    const string DAYS[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                            "Friday", "Saturday"};
    
    double total = 0.0, average;
    int rec = 0, app = 0, notRec = 0;
    
    
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter number of hours slept on " << DAYS[i] << ": ";
        cin >> hours[i];
        total += hours[i];
        
        if(hours[i] >= 7 && hours[i] <= 9)
        {
            rec++;
        }
        else if (hours[i] < 6 || hours[i] > 11)
        {
            notRec++;
        }
        else
        {
            app++;
        }
    }
    
    average = total / SIZE;
    cout << fixed << setprecision(2) << "\ntotal number of hours slept last week: " << total
    << "\nAverage number of hours slept per night: " << average << endl;
    
    cout << "\n\nAccording to the NSF, last week, you slept: " << endl;
    
    cout << rec << ((rec == 1) ? " night" : " nights") << " of \"recommended\" sleep.\n";
    cout << app << ((app == 1) ? " night" : " nights") << " of \"may be appropriate\" sleep.\n";
    cout << notRec << ((notRec == 1) ? " night" : " nights") << " of \"not recommended\" sleep.\n";
    
    cout << "Overall, your sleep health (on average) is ";
    if(average >= 7 && average <= 9)
    {
        cout << "\"recommended\"" << endl;
    }
    else if (average >= 6 && average <= 11)
    {
        cout << "\"may be appropriate\"" << endl;
    }
    else
    {
        cout << "\"not recommended\"" << endl;
    }
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
