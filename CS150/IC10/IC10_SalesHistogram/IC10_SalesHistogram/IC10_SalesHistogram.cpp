/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #10
* LAST MODIFIED: 10/01/18
*****************************************************/
/*****************************************************************************
* SalesHistogram
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to keep track of multiple sales and outputs correpsonding stars
*****************************************************************************
* ALGORITHM:
* 1. Ask user for sales from 5 different stores
* 2. Calculate total sales and average from each store
* 3. Output histogram of sales with * for each 100s place
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
    int numStars, numSales, index;
    double averageSales, totalSales;
    double sales [5];
    string stars;
    
    numSales = sizeof(sales) / sizeof(sales[0]);
    index = 0;
    totalSales = 0;
    
    do
    {
        cout << "Enter today's sales for store " << index + 1 << " $";
        cin >> sales[index];
        
        if(sales[index] < 0)
        {
            cout << "\nError: Sales must be greater than or equal to 0.\n\n555";
        }
        else
        {
            totalSales += sales[index];
            index++;
        }
    }while(index < numSales);
    
    averageSales = totalSales / numSales;
    cout << fixed << setprecision(2) << "\nTotal sales for all stores: $" << totalSales;
    cout << fixed << setprecision(2) << "\nAverage sales for all stores: $" << averageSales;
    
    cout << "\n\nHistogram of Sales (for each store)\n(each * represents $100 in sales):\n\n";
    
    for(int i = 0; i < numSales; i++)
    {
        numStars = sales[i] / 100;
        for (int j = 0; j < numStars; j++)
        {
            stars += "*";
        }
        cout << fixed << setprecision(2) << "Store " << i + 1 << " sales: " << stars << " ($" << sales[i] << ")\n";
        
        stars = "";
        numStars = 0;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
