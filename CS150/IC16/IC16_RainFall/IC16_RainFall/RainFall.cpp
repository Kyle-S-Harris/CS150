/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #16
 * LAST MODIFIED: 10/23/18
 *****************************************************/
/*****************************************************************************
 * Rainfall
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to calculate yearly rainfall stats.
 *****************************************************************************
 * ALGORITHM:
 * 1. Ask user for rainfall for each month
 * 2. If current month is greater than the max, make the current month the new max
 * 3. If current month is less than the min, make the current month the new min
 * 4. Output total
 * 5. Calculate average by dividing total by 12
 * 6. Output min
 * 7. Output max
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * <iomanip>: used to modify output.
 *****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>

double inputValidation(std::string message, std::string errorMessage, double min, double max);
int main(int argc, char * argv[])
{
    const std::string MONTH_NAMES[]= {"January: ", "February: ", "March: ", "April: ", "May: ", "June: ",
        "July: ", "August: ", "September: ", "October: ", "November: ", "December: "};
    std::string message;
    double monthlyRainfall[12], total = 0, min = INT_MAX, max = INT_MIN, average;
    
    for(int i = 0; i < 12; i++)
    {
        message = "Enter rainfall amount (in inches) for ";
        message += MONTH_NAMES[i];
        std::cout << "Enter rainfall amount (in inches) for ";
        monthlyRainfall[i] = inputValidation(message, "Error: You must input a rainfall amount greater than or equal to 0", 0, INT_MAX);
        
        total += monthlyRainfall[i];
        
        if(monthlyRainfall[i] > max)
        {
            max = monthlyRainfall[i];
        }
        if(monthlyRainfall[i] < min)
        {
            min = monthlyRainfall[i];
        }
    }
    
    std::cout << std::fixed << std::setprecision(2) << "\nThe total rainfall for the year is: " << total;
    average = total / 12;
    std::cout << std::fixed << std::setprecision(2) <<"\nAverage Rainfall for the year (in inches): " << average
    << "\nMinimum Monthly Rainfall (in inches): " << min
    << "\nMaximum Monthly Rainfall (in inches): " << max << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

double inputValidation(std::string message, std::string errorMessage, double min, double max)
{
    double userInput;
    bool isNotValid = true;
    
    do
    {
        
        std::cout << message;
        std::cin >> userInput;
        
        isNotValid = std::cin.fail() || userInput < min || userInput > max;
        
        
        if (isNotValid)
        {
            std::cout << errorMessage << std::endl;
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
        
    }while(isNotValid);
    
    return userInput;
}

