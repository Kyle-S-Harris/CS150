/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #29
 * LAST MODIFIED: 12/11/18
 *****************************************************/


#include "Beverage.h"
#include "Coffee.h"
#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char* argv[])
{
    int mainChoice, subChoice, caffeine, beverageCount = 0, coffeeCount = 0;;
    string beverageName, roast;
    int calories, size;
    const int ARRAY_SIZE = 20;
    Beverage beverageList[ARRAY_SIZE];
    Coffee coffeeList[ARRAY_SIZE];
    
    do{
        cout << endl
		<< "*************************************************************************\n"
		<< "**                         Welcome to BevMoMo                          **\n"
		<< "*************************************************************************\n"
		<< "** Please enter choice :                                               **\n"
		<< "** 1) Place a beverage order                                           **\n"
		<< "** 2) Display all beverage orders                                      **\n"
		<< "** 3) Quit                                                             **\n"
		<< "*************************************************************************\n";
        cin >> mainChoice;
        cin.ignore(INT_MAX, '\n');
    
        switch(mainChoice)
        {
            case 1:
            {
                // Choice 1
                cout << "Enter 1 for Beverage or 2 for Coffee >> ";
                cin >> subChoice;
                cin.ignore(INT_MAX, '\n');
                if(subChoice == 1)
                {
                    if(beverageCount < ARRAY_SIZE)
                    {
                        cout << "Enter beverage name     >> ";
                        getline(cin, beverageName);
                        cout << "Enter calories          >> ";
                        cin >> calories;
                        //cin.ignore(INT_MAX, '\n');
                        cout << "Enter size (0=Small, 1=Medium, or 2=Large) >> ";
                        cin >> size;
                        //cin.ignore(INT_MAX, '\n');
                        
                        Beverage b1(beverageName, calories, size);
                        beverageList[beverageCount] = b1;
                        beverageCount++;
                    }
                    else
                    {
                        cout << "Sorry, your beverage order is full.";
                    }
                   
                }
                else if (subChoice == 2)
                {
                    if(coffeeCount < ARRAY_SIZE)
                    {
                        cout << "Enter beverage name     >> ";
                        getline(cin, beverageName);
                        cout << "Enter calories          >> ";
                        cin >> calories;
                        cin.ignore(INT_MAX, '\n');
                        cout << "Enter size (0=Small, 1=Medium, or 2=Large) >> ";
                        cin >> size;
                        cin.ignore(INT_MAX, '\n');
                        
                        cout << "Enter caffeine (in mg)   >> ";
                        cin >> caffeine;
                        cin.ignore(INT_MAX, '\n');
                        cout << "Enter roast type         >> ";
                        getline(cin, roast);
                        
                        Coffee c1(beverageName, calories, size, caffeine, roast);
                        coffeeList[coffeeCount] = c1;
                        coffeeCount++;
                    }
                    else
                    {
                        cout << "Sorry, your coffee order is full.";
                    }
                }
                else
                {
                    cout << "\nError: Invalid option\n";
                }
            }
            break;
            case 2:
            {
	            // Choice 2

	            cout << endl
		        << "*************************************************************************\n"
		        << "**                         All Beverage Orders                         **\n"
		        << "*************************************************************************\n"
		        << "| Order # | Name           | Calories | Size | Caffeine (mg) | Roast    |\n"
		        << "*************************************************************************\n";
		        for(int i = 0; i < beverageCount; i++)
		        {
                    cout << beverageList[i] << "\n";
                }
                
                cout << endl
                << "*************************************************************************\n"
                << "**                         All Coffee Orders                         **\n"
                << "*************************************************************************\n"
                << "| Order # | Name           | Calories | Size | Caffeine (mg) | Roast    |\n"
                << "*************************************************************************\n";
                for(int i = 0; i < coffeeCount; i++)
                {
                    cout << coffeeList[i] << "\n";
                }
            }
            break;
            default:
            {
                cout << "Have a nice day!\n\n";
            }
            break;
        }
    }while(mainChoice < 3);

	system("PAUSE");
	return EXIT_SUCCESS;
}
