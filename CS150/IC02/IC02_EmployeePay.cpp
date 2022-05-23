/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #02
* LAST MODIFIED: 8/29/18
*****************************************************/
/*****************************************************************************
* EmployeePay
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program that takes an employee's bi-weekly pay and calculates their annual pay.
*****************************************************************************
* ALGORITHM:
* INCLUDE <cstdlib>
* INCLUDE <iostream>
* INCLUDE <iomanip>
* START main method
* DECLARE double paycheck, annualPay
* DECLARE const int PAY_PERIODS = 26
* OUTPUT user input prompt
* INPUT user input (paycheck)
* ASSIGN annualPay = paycheck * PAY_PERIODS
* OUTPUT annualPay
* END main method
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

int main(int argc, char *argv[])
{
    /***** DECLARATION SECTION *****/
    
    double paycheck, annualPay;
    const int PAY_PERIODS = 26;
    
    /***** OUTPUT/PROCESSING SECTION *****/
    
    cout <<"Enter employee's pay amount (per paycheck): $";
    cin >> paycheck;
    
    annualPay = paycheck * PAY_PERIODS;
    
    cout << fixed << setprecision(2) << "\nThe employee's total annual pay is: $"
    << annualPay << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
