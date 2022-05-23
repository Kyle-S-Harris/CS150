/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #14
 * LAST MODIFIED: 10/18/18
 *****************************************************/
/*****************************************************************************
 * CSDashboard
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to find success rates for CS students by age or ethnicity.
 *****************************************************************************
 * ALGORITHM:
 * 1. Display dashbboard menu
 * 2. If user selects 1, ask them for an age and output the success for that age (call ageSuccess)
 * 3. If user selects 2, display ethnicity menu and ask for an ethnicity selection and output
 * success for that ethnicity (call successByEthnicity)
 * 4. If user selects choice 3, output placeholder message
 * 5. If user selects 4, output message and end program.
 * 6. If user uses invalid number, output error message
 * 7. If user didn't select 4, repeat to step 1.
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

int dashboardMenu();
int ethnicityMenu();
int genderMenu();
double ageSuccess(int age);
double successByEthnicity(int ethnicity);

int main(int argc, char * argv[])
{
    int age, choice, ethnicityChoice;
    double ethnicityNum;
    
    do
    {
        choice = dashboardMenu();
        switch (choice)
        {
            case 1:
                cout << "Enter the age of the student: ";
                cin >> age;
                cout << ageSuccess(age) << "% of students of this age group earn a grade of \"C\" or higher"
                << " in Computer Science courses.\n\n";
            break;
            case 2:
                ethnicityChoice = ethnicityMenu();
                ethnicityNum = successByEthnicity(ethnicityChoice);
                cout << "\n" << ethnicityNum << "% of students of this ethnicity earn a grade of \"C\" or higher"
                << " in Computer Science courses.\n\n";
            break;
            case 3:
                cout << "\nThis choice is under construction, please try again later.\n\n";
            break;
            case 4:
                cout << "Thank you for exploring the CS Success Dashboard. Let's strive to alway do better for students.\n\n";
            break;
            default:
                cout << "\nInvalid choice. Please select 1-4.\n\n";
            break;
        }
    }while(choice != 4);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int dashboardMenu()
{
    int choice;
    cout
    << "********************************************************************\n"
    << "**                                                                **\n"
    << "**                 MIRACOSTA CS SUCCESS DASHBOARD                 **\n"
    << "**                                                                **\n"
    << "********************************************************************\n"
    << "** Please select from the following choices:                      **\n"
    << "** 1) View Success by Age Group                                   **\n"
    << "** 2) View Success by Ethnicity                                   **\n"
    << "** 3) View Success by Ethnicity and Gender (Hacker Challenge)     **\n"
    << "** 4) Exit                                                        **\n"
    << "********************************************************************\n";
    cin >> choice;
    return choice;
}

int ethnicityMenu()
{
    int choice;
    cout
    << "********************************************************************\n"
    << "**                                                                **\n"
    << "**                 MIRACOSTA CS SUCCESS DASHBOARD                 **\n"
    << "**                                                                **\n"
    << "********************************************************************\n"
    << "** Please select from the following ethnicities:                  **\n"
    << "** 1) American Indian/Alaska Native                               **\n"
    << "** 2) Asian                                                       **\n"
    << "** 3) Black/African American                                      **\n"
    << "** 4) Hispanic                                                    **\n"
    << "** 5) Pacific Islander                                            **\n"
    << "** 6) Two or More Races                                           **\n"
    << "** 7) White                                                       **\n"
    << "** 8) Unknown                                                     **\n"
    << "********************************************************************\n";
    cin >> choice;
    return choice;
}

int genderMenu()
{
    int choice;
    cout
    << "********************************************************************\n"
    << "**                                                                **\n"
    << "**                 MIRACOSTA CS SUCCESS DASHBOARD                 **\n"
    << "**                                                                **\n"
    << "********************************************************************\n"
    << "** Please select from the following choices:                      **\n"
    << "** 1) Female                                                      **\n"
    << "** 2) Male                                                        **\n"
    << "** 3) Unknown/Decline to State                                    **\n"
    << "********************************************************************\n";
    cin >> choice;
    return choice;
}

double ageSuccess(int age)
{
    const double U_18 = 71.4;
    const double EIGHTEEN_TWENTY = 60.8;
    const double TWENTYONE_TWENTYFOUR = 54.6;
    const double TWENTYFIVE_TWENTYNINE = 57.9;
    const double THIRTY_THIRTYFOUR = 62.5;
    const double  THIRTYFIVE_THIRTYNINE = 61.7;
    const double FORTY_FORTYFOUR = 47.1;
    const double FORTYFIVE_FIFTYFOUR = 65.9;
    const double FIFTYFIVE_SIXTYFOUR = 60.7;
    const double SIXTYFIVE_P = 33.3;
    
    if(age <= 17)
    {
        return U_18;
    }
    else if (age <= 20)
    {
        return EIGHTEEN_TWENTY;
    }
    else if (age <= 24)
    {
        return TWENTYONE_TWENTYFOUR;
    }
    else if(age <= 29)
    {
        return TWENTYFIVE_TWENTYNINE;
    }
    else if (age <= 34)
    {
        return THIRTY_THIRTYFOUR;
    }
    else if (age <= 39)
    {
        return THIRTYFIVE_THIRTYNINE;
    }
    else if (age <= 44)
    {
        return FORTY_FORTYFOUR;
    }
    else if (age <= 54)
    {
        return FORTYFIVE_FIFTYFOUR;
    }
    else if (age <= 64)
    {
        return FIFTYFIVE_SIXTYFOUR;
    }
    else
    {
        return SIXTYFIVE_P;
    }
}

double successByEthnicity(int ethnicity)
{
    const double AMERICAN_INDIAN = 66.7;
    const double ASIAN = 67.2;
    const double BLACK = 39.2;
    const double HISPANIC = 48.5;
    const double PACIFIC_ISLANDER = 20.0;
    const double TWO_OR_MORE = 58.7;
    const double WHITE = 62.8;
    const double UNKNOWN = 53.0;
    
    switch (ethnicity)
    {
        case 1:
            return AMERICAN_INDIAN;
        break;
        case 2:
            return ASIAN;
        break;
        case 3:
            return BLACK;
        break;
        case 4:
            return HISPANIC;
        break;
        case 5:
            return PACIFIC_ISLANDER;
        break;
        case 6:
            return TWO_OR_MORE;
        break;
        case 7:
            return WHITE;
        break;
        case 8:
            return UNKNOWN;
        break;
        default:
            cout << "Error: must select ethnicity choice between 1 and 8.";
            return EXIT_FAILURE;
        break;
    }
}
