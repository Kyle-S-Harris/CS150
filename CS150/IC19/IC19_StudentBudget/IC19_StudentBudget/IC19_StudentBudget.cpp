/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #19
 * LAST MODIFIED: 11/12/18
 *****************************************************/
/*****************************************************************************
 * StudentBudget
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that determines if the student went over, under, or on par with their budget.
 *****************************************************************************
 * ALGORITHM:
 * 1. Assign target values to target object
 * 2. Ask user for expense for each category and assign each expense to the variables
 * of the actual object
 * 3. Call display to show stats about this month's debt
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

struct MonthlyBudget
{
    double housing, utilities, householdExpenses, transportation, food,
    medical, insurance, entertainment, clothing, misc;
};

void display(MonthlyBudget target, MonthlyBudget actual);

int main(int argc, const char * argv[])
{
    MonthlyBudget target;
    MonthlyBudget actual;
    
    target.housing = 500.0;
    target.utilities = 150.0;
    target.householdExpenses = 65.0;
    target.transportation = 50.0;
    target.food = 250.0;
    target.medical = 30.0;
    target.insurance = 100.0;
    target.entertainment = 150.0;
    target.clothing = 75.0;
    target.misc = 50.0;
    
    std::cout << "~~~Welcome to the Stay-On-Budget App~~~"
    << "\nUse this to enter your expenses this month \nand see if you did a good job sticking to your budget.\n\n";
    
    std::cout << "Please enter your housing expense: $";
    std::cin >> actual.housing;
    
    std::cout << "Please enter your utilities expense: $";
    std::cin >> actual.utilities;
    
    std::cout << "Please enter your household expenses: $";
    std::cin >> actual.householdExpenses;
    
    std::cout << "Please enter your transportation expense: $";
    std::cin >> actual.transportation;
    
    std::cout << "Please enter your food expense: $";
    std::cin >> actual.food;
    
    std::cout << "Please enter your medical expense: $";
    std::cin >> actual.medical;
    
    std::cout << "Please enter your insurance expense: $";
    std::cin >> actual.insurance;
    
    std::cout << "Please enter your entertainment expense: $";
    std::cin >> actual.entertainment;
    
    std::cout << "Please enter your clothing expense: $";
    std::cin >> actual.clothing;
    
    std::cout << "Please enter your miscellaneous expense: $";
    std::cin >> actual.misc;
    std::cout << std::endl;
    
    display(target, actual);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void display(MonthlyBudget target, MonthlyBudget actual)
{
    double difference, monthDifference = 0;
    
    std::cout << std::fixed << std::setprecision(2) << "Your monthly budget targets are:\n"
    << "Housing: $" << target.housing << "\n"
    << "Utilities: $" << target.utilities << "\n"
    << "Household Expenses: $" << target.householdExpenses << "\n"
    << "Transportation: $" << target.transportation << "\n"
    << "Food: $" << target.food << "\n"
    << "Medical: $" << target.medical << "\n"
    << "Insurance: $" << target.insurance << "\n"
    << "Entertainment: $" << target.entertainment << "\n"
    << "Clothing: $" << target.clothing << "\n"
    << "Miscellaneous: $" << target.misc << "\n\n";
    
    
    
    if(actual.housing > target.housing)
    {
        difference = actual.housing - target.housing;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on housing by $" << difference << "\n";
    }
    else if(actual.housing < target.housing)
    {
        difference = actual.housing - target.housing;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on housing by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for housing this month!\n";
    }
    
    
    
    if(actual.utilities > target.utilities)
    {
        difference = actual.utilities - target.utilities;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on utilities by $" << difference << "\n";
    }
    else if(actual.utilities < target.utilities)
    {
        difference = actual.utilities - target.utilities;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on utilities by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for utilities this month!\n";
    }
    
    
    
    if(actual.householdExpenses > target.householdExpenses)
    {
        difference = actual.householdExpenses - target.householdExpenses;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on household expenses by $" << difference << "\n";
    }
    else if(actual.householdExpenses < target.householdExpenses)
    {
        difference = actual.householdExpenses - target.householdExpenses;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on household expenses by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for household expenses this month!\n";
    }
    
    
    
    if(actual.transportation > target.transportation)
    {
        difference = actual.transportation - target.transportation;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on transportation by $" << difference << "\n";
    }
    else if(actual.transportation < target.transportation)
    {
        difference = actual.transportation - target.transportation;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on transportation by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for transportation this month!\n";
    }
    
    
    
    if(actual.food > target.food)
    {
        difference = actual.food - target.food;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on food by $" << difference << "\n";
    }
    else if(actual.food < target.food)
    {
        difference = actual.food - target.food;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on food by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for food this month!\n";
    }
    
    
    
    if(actual.medical > target.medical)
    {
        difference = actual.medical - target.medical;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on medical by $" << difference << "\n";
    }
    else if(actual.medical < target.medical)
    {
        difference = actual.medical - target.medical;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on medical by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for medical this month!\n";
    }
    
    
    
    if(actual.insurance > target.insurance)
    {
        difference = actual.insurance - target.insurance;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on insurance by $" << difference << "\n";
    }
    else if(actual.insurance < target.insurance)
    {
        difference = actual.insurance - target.insurance;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on insurance by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for insurance this month!\n";
    }
    
    
    
    if(actual.entertainment > target.entertainment)
    {
        difference = actual.entertainment - target.entertainment;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on entertainment by $" << difference << "\n";
    }
    else if(actual.entertainment < target.entertainment)
    {
        difference = actual.entertainment - target.entertainment;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on entertainment by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for entertainment this month!\n";
    }
    
    
    
    if(actual.clothing > target.clothing)
    {
        difference = actual.clothing - target.clothing;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on clothing by $" << difference << "\n";
    }
    else if(actual.clothing < target.clothing)
    {
        difference = actual.clothing - target.clothing;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on clothing by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for clothing this month!\n";
    }
    
    
    
    if(actual.misc > target.misc)
    {
        difference = actual.misc - target.misc;
        monthDifference += difference;
        std::cout << std::fixed << std::setprecision(2) << "You overspent on miscellaneous by $" << difference << "\n";
    }
    else if(actual.misc < target.misc)
    {
        difference = actual.misc - target.misc;
        monthDifference += difference;
        difference *= -1;
        std::cout << std::fixed << std::setprecision(2) << "You underspent on miscellaneous by $" << difference << "\n";
    }
    else
    {
        std::cout << "You are right on the money for miscellaneous this month!\n";
    }
    
    
    
    if(monthDifference > 0)
    {
        std::cout << "\nYou overall went over budget this month by $" << monthDifference << "\n";
    }
    else if(monthDifference < 0)
    {
        monthDifference *= -1;
        std::cout << "\nYou overall went under budget this month by $" << monthDifference << "\n";
    }
    else
    {
        std::cout << "\nCongratulations! You budgeted perfectly!\n";
    }
    
}
