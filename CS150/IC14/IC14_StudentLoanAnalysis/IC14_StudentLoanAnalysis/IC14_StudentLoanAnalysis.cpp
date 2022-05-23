/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #14
 * LAST MODIFIED: 10/18/18
 *****************************************************/
/*****************************************************************************
 * StudentLoanAnalysis
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to determine output stats about student loans.
 *****************************************************************************
 * ALGORITHM:
 * 1. Display dashbboard menu
 * 2. If user selects 1, ask them for loan information and calculate loan payment using calculateLoanPayment function
 * 3. If user selects 2, display loan stats by calling displayLoanStatistics with text file in parameters.
 * 4. If user selects choice 3, output nested loops by calling nestedLoops function.
 * 5. If user selects 4, end program.
 * 6. If user uses invalid number, output error message
 * 7. If user didn't select 4, repeat to step 1.
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * <iomanip>: used to modify output.
 *
 * <fstream>: to read and/or write to files.
 *
 * <cmath>: used for math operators that aren't standard.
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int dashboardMenu();
double calculateLoanPayment(double loanAmount, double interestRatePerPeriod, int totalNumPeriods);
int displayLoanStatistics(string fileName);
void nestedLoops();

int main(int argc, char * argv[])
{
    double loanAmount, annualInterest, payment;
    int years, userChoice;
    
    userChoice = dashboardMenu();
    
    while(userChoice != 4)
    {
        if(userChoice == 1)
        {
            cout << "Enter present value of loan: $";
            cin >> loanAmount;
            
            cout << "Enter annual interest rate %: ";
            cin >> annualInterest;
            
            cout << "Enter number of years for loan: ";
            cin >> years;
            
            payment = calculateLoanPayment(loanAmount, annualInterest, years);
            
            cout << fixed << setprecision(2) << "\nThe monthly payment for this loan is $" << payment << endl;
        }
        else if(userChoice == 2)
        {
            displayLoanStatistics("FederalStudentLoans.txt");
        }
        else if(userChoice == 3)
        {
            cout << "~~~The Shape You Requested~~~\n\n";
            nestedLoops();
        }
        else if (userChoice == 4)
        {
            system("PAUSE");
            return EXIT_SUCCESS;
        }
        else
        {
            cout << "Error: choice must be between 1-4\n\n";
        }
        
        cout << endl;
        userChoice = dashboardMenu();
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int dashboardMenu()
{
    int choice;
    cout
    << "********************************************************************\n"
    << "**                                                                **\n"
    << "**                     STUDENT LOAN ANALYSIS                      **\n"
    << "**                                                                **\n"
    << "********************************************************************\n"
    << "** Please select from the following choices:                      **\n"
    << "** 1) Calculate Student Loan Payment                              **\n"
    << "** 2) Display Student Loan Statistics                             **\n"
    << "** 3) Nested Loops (Get loopy on loans)                           **\n"
    << "** 4) Exit                                                        **\n"
    << "********************************************************************\n";
    cin >> choice;
    return choice;
}

double calculateLoanPayment(double loanAmount, double interestRatePerPeriod, int totalNumPeriods)
{
    double payment;
    
    interestRatePerPeriod *= .01;
    interestRatePerPeriod /= 12;
    totalNumPeriods *= 12;
    
    payment = (interestRatePerPeriod * loanAmount) / (1 - pow(1 + interestRatePerPeriod, -totalNumPeriods));
    
    return payment;
}

int displayLoanStatistics(string fileName)
{
    int numYears;
    double yearStatistic, total, average, min, max;
    bool isNotOpen;
    

    ifstream inFile;
    inFile.open(fileName.c_str());
    
    numYears = 0;
    total = 0;
    min = INT_MAX;
    max = INT_MIN;

    
    isNotOpen = !inFile.is_open();
    
    if(isNotOpen)
    {
        cout << "Error: The file could not be opened.";
        return EXIT_FAILURE;
    }
    
    while(!inFile.eof())
    {
        inFile >> yearStatistic;
        
        numYears++;
        total += yearStatistic;
        
        if(yearStatistic > max)
        {
            max = yearStatistic;
        }
        if(yearStatistic < min)
        {
            min = yearStatistic;
        }
    }
    inFile.close();
    
    total *= 1000000;
    average = total / numYears;
    min *= 1000000;
    max *= 1000000;
    
    cout << fixed << setprecision(2) << "~~~Summary of College Loans~~~\n"
    << "Average debt nationwide   : $" << average
    << "\nMin yearly debt nationwide: $" << min
    << "\nMax yearly debt nationwide: $" << max << endl;
    
    return EXIT_SUCCESS;
}

void nestedLoops()
{
    int numLines = 6, numExclamations = 22, numSlashes = 0;
    for(int i = 0; i < numLines; i++)
    {
        for(int j = 0; j < numSlashes / 2; j++)
        {
            cout << "\\";
        }
        
        for(int k = 0; k < numExclamations; k++)
        {
            cout << "!";
        }
        
        for(int h = 0; h < numSlashes / 2; h++)
        {
            cout << "/";
        }
        
        numSlashes += 4;
        numExclamations -= 4;
        cout << endl;
    }
}
