/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #09
* LAST MODIFIED: 09/25/18
*****************************************************/
/*****************************************************************************
* YMCAApp
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to calculate your Oceanside YMCA membership cost.
*****************************************************************************
* ALGORITHM:
* 1. Ask user for their membership type (number that corresponds to menu)
* 2. Ask user how many months they want to join
* 3. Ask user if they are a new member (Y/N)
* 4. Use switch to check which membership they chose and calculate the cost by
* multiplying their monthly cost by the number of months. Also assign the initiation
* fee's cost. If user enters number that isn't in menu, output error.
* 5. Check to make sure user entered valid new membership choice. If so, check
* if they said Y and if they did then add the initiation fee on to the total.
* 6. If all values are valid, then output the total cost of the membership
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <iomanip>: to modify input/output characteristics. */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char * argv[])
{
    const double TEEN_YA_PRICE = 32;
    const double ADULT_PRICE = 47;
    const double DUAL_ADULT_PRICE = 73;
    const double FAMILY_ONE_PRICE = 68;
    const double FAMILY_TWO_PRICE = 88;
    const double SENIOR_PRICE = 43;
    
    const double STANDARD_INITIATION_FEE = 50;
    const double DISCOUNTED_INITITIATION_FEE = 25;
    
    int membershipType, numMonths;
    double total, inititiationFee;
    char newMember;
    
    cout << "***************************************************************************\n"
         << "**                                                                       **\n"
         << "**                  Joe and Mary Mottino YMCA Oceanside                  **\n"
         << "**                            Membership Menu                            **\n"
         << "**                                                                       **\n"
         << "***************************************************************************\n"
         << "Select from the 6 following membership types: \n\n"
         << "1. Teen/Young Adult (Ages 13-25)       $32/month, $25 joiner fee\n"
         << "2. Adult (Ages 24-64)                  $47/month, $50 joiner fee\n"
         << "3. Dual Adult (Ages 24-64)             $73/month, $50 joiner fee\n"
         << "4. Family 1 (One Adult/Children)       $68/month, $50 joiner fee\n"
         << "5. Family 2 (Two Adults/Children)      $88/month, $50 joiner fee\n"
         << "6. Senior (Ages 65 and up)             $43/month, $50 joiner fee\n"
         << "***************************************************************************\n";
    cin >> membershipType;
    
    cout << "How many months would you like to join?: ";
    cin >> numMonths;
    
    cout << "Are you a new member (Y/N)?: ";
    cin >> newMember;
    
    switch (membershipType)
    {
        case 1:
            total = TEEN_YA_PRICE * numMonths;
            inititiationFee = DISCOUNTED_INITITIATION_FEE;
            break;
        case 2:
            total = ADULT_PRICE * numMonths;
            inititiationFee = STANDARD_INITIATION_FEE;
            break;
        case 3:
            total = DUAL_ADULT_PRICE * numMonths;
            inititiationFee = STANDARD_INITIATION_FEE;
            break;
        case 4:
            total = FAMILY_ONE_PRICE * numMonths;
            inititiationFee = STANDARD_INITIATION_FEE;
            break;
        case 5:
            total = FAMILY_TWO_PRICE * numMonths;
            inititiationFee = STANDARD_INITIATION_FEE;
            break;
        case 6:
            total = SENIOR_PRICE * numMonths;
            inititiationFee = STANDARD_INITIATION_FEE;
            break;
        default:
            cout << "ERROR: Must enter a number 1 - 6 for membership choice.\n";
            return EXIT_FAILURE;
    }
    
    if(newMember == 'Y' || newMember == 'y' || newMember == 'N' || newMember == 'n')
    {
        if(newMember == 'Y' || newMember == 'y')
        {
            total += inititiationFee;
        }
        cout << fixed << setprecision(2) << "The total charges are $" << total << "\n\n";
    }
    else
    {
        cout << "ERROR: Must enter Y or N for if you are a new member.\n\n";
        return EXIT_FAILURE;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
