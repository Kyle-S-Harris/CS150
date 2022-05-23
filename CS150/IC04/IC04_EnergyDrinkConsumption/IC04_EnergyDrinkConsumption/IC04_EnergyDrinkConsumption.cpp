/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #04
* LAST MODIFIED: 09/12/18
*****************************************************/
/*****************************************************************************
* EnergyDrinkConsumption
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program that calculates how many people have more than one energy drink per day
* and how many prefer citrus-flavored.
*****************************************************************************
* ALGORITHM:
* 1. Calculate how many people drink one or more energy drinks per week by multiplying
* numCustomers (16500) by .15
* 2. Calculate how many people prefer citrus-flavored energy drinks by multiplying
* numCustomers by .58
3. Output number of customers who drink one or more per week and number of customers
* who prefer citrus flavor.
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
    int numCustomers, oneOrMorePerWeek, citrusPreference;
    
    numCustomers = 16500;
    oneOrMorePerWeek = numCustomers * .15;
    citrusPreference = numCustomers * .58;
    
    cout << "A survey of 16,500 energy drink customers was taken."
    << "\nOf them, " << oneOrMorePerWeek << " said they have one or more energy drink per week.\n"
    << citrusPreference << " also said they prefer citrus-flavored energy drinks.\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
