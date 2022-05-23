/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #05
 * LAST MODIFIED: 09/13/18
 *****************************************************/
/*****************************************************************************
 * BasalMetabolicRatePartDeux
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to take user body information, sex, and activity level to calculate how many calories to maintain weight.
 *****************************************************************************
 * ALGORITHM:
 * 1. Get user's weight, height, age, and sex.
 * 2. Calculate BMR (calories needed) for both males and females using user input in respective formulas.
 * 3. Ask user if they are male or female
 * 4. Ask user how active they are. If 1, multiply both bmrs by 1.2. Else If 2 multiply both bmrs
 * by 1.3. Else If 3, multiply both bmrs by 1.4. Else If 4, multiply both bmrs by 1.5. Otherwise, error.
 * 5. If sex is male, calculate how many chocolate bars needed to maintain weight for males and output
 * the BMR for males and the number of chocolate bars needed to maintain weight for females.
 * 6. If sex is female, calculate how many chocolate bars needed to maintain weight for females and output
 * the BMR for females and the number of chocolate bars needed to maintain weight for females.
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
    double maleBMR, femaleBMR, maleChocolate, femaleChocolate;
    int weight, height, age, activityLevel;
    string selectSex;
    
    cout << "Please enter your weight (lb): ";
    cin >> weight;
    
    cout << "Please enter your height (in): ";
    cin >> height;
    
    cout << "Please enter your age: ";
    cin >> age;
    
    cout << "Please enter Male or Female: ";
    cin >> selectSex;
    
    cout << "Please enter number corresponding with your activity factor:\n"
    << "1. Sedentary (not active)\n"
    << "2. Somewhat Active (exercise occasionally)\n"
    << "3. Active (exercise 3-4 times per week)\n"
    << "4. Highly Active (exercise every day)\n";
    cin >> activityLevel;
    
    maleBMR = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
    femaleBMR = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
    
    if(activityLevel == 1)
    {
        maleBMR *= 1.2;
        femaleBMR *= 1.2;
    }
    else if(activityLevel == 2)
    {
        maleBMR *= 1.3;
        femaleBMR *= 1.3;
    }
    else if(activityLevel == 3)
    {
        maleBMR *= 1.4;
        femaleBMR *= 1.4;
    }
    else if(activityLevel == 4)
    {
        maleBMR *= 1.5;
        femaleBMR *= 1.5;
    }
    else
    {
        cout << "Error: must use valid activity level number. Data below will not be accurate.\n";
    }
    
    
    if(selectSex == "Male" || selectSex == "male")
    {
        maleChocolate = maleBMR / 230;
        cout << fixed << setprecision(0) << "\nAs a male, your BMR x Activity Factor is " <<  maleBMR << setprecision(1)
        << " and you need to\neat " << maleChocolate << " chocolate bars to maintain this amount of calories.\n\n";
    }
    else if (selectSex == "Female" || selectSex == "female")
    {
        femaleChocolate = femaleBMR / 230;
        cout << fixed << setprecision(0) << "\nAs a female, your BMR x Activity Factor is " << femaleBMR << setprecision(1)
        << " and you need to\neat " << femaleChocolate << " chocolate bars to maintain this amount of calories.\n\n";
    }
    else
    {
        cout << "\nError: you must enter a valid sex (male or female)\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
