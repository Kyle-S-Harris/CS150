/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #04
* LAST MODIFIED: 09/12/18
*****************************************************/
/*****************************************************************************
* StockCommission
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to calculate the subtotal, commission cost, and total of your stock purchase.
*****************************************************************************
* ALGORITHM:
* 1. Get number of stocks purchased from user, the price of each share, and the
* commission percentage on this purchase.
* 2. Multiply commission percentage by .01 for mathematical purposes
* 3. Calculate subtotal by multiplying number of stocks by each shares price
* 4. Calculate the commission cost by multiplying subtotal by commission percentage
* 5. Calculate total by adding subtotal by commission price
* 6. Output purchase subtotal, commission cost, and total.
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
    int numStocks;
    double sharePrice, commissionPercentage, totalWithoutCommission,
    commissionPrice, combinedTotal;
    
    cout << "Please enter the number of stocks purchased: ";
    cin >> numStocks;
    
    cout << "\nPlease enter the price of each share: $";
    cin >> sharePrice;
    
    cout << "\nPlease enter the commission percentage on these stocks: ";
    cin >> commissionPercentage;
    
    commissionPercentage *= .01;
    
    totalWithoutCommission = numStocks * sharePrice;
    commissionPrice = totalWithoutCommission * commissionPercentage;
    combinedTotal = totalWithoutCommission + commissionPrice;
    
    cout << fixed << setprecision(2) << "\nYour stock subtotal: $" << totalWithoutCommission
    << "\nCommission: $" << commissionPrice << "\nStock Total: $"
    << combinedTotal << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
