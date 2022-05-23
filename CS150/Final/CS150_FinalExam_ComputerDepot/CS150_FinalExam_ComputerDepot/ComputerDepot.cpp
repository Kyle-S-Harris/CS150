//Kyle Harris
//CS150 Final (FA2018)

#include <iostream>
#include <cstdlib>
#include "Computer.h"
#include "Laptop.h"

using namespace std;

int main(int argc, char* argv[])
{
    int mainChoice, subChoice, computerCount = 0, laptopCount = 0;
    const int ARRAY_SIZE = 20;
    string make, model;
    double price, batteryLife, weight;
    Computer computerList[ARRAY_SIZE];
    Laptop laptopList[ARRAY_SIZE];
    
    do
    {
        cout
            << "*************************************************************************\n"
            << "**                 Welcome to the Computer Depot                       **\n"
            << "*************************************************************************\n"
            << "** Please enter choice :                                               **\n"
            << "** 1) Add computer to inventory                                        **\n"
            << "** 2) Display entire inventory                                         **\n"
            << "** 3) Quit                                                             **\n"
            << "*************************************************************************\n";
        cin >> mainChoice;
        cin.ignore(INT_MAX, '\n');
    
        switch (mainChoice)
        {
            case 1:
                // Choice 1
                cout << "Enter 1 for Computer or 2 for Laptop >> ";
                cin >> subChoice;
                cin.ignore(INT_MAX, '\n');
                
                switch (subChoice)
                {
                    case 1:
                    {
                        cout << "Enter make               >> ";
                        getline(cin, make);
                        cout << "Enter model              >> ";
                        getline(cin, model);
                        cout << "Enter price              >> $";
                        cin >> price;
                        cout << endl;
                        
                        Computer c1(make, model, price);
                        computerList[computerCount] = c1;
                        computerCount++;
                    }
                    break;
                    case 2:
                    {
                        cout << "Enter make               >> ";
                        getline(cin, make);
                        cout << "Enter model              >> ";
                        getline(cin, model);
                        cout << "Enter price              >> $";
                        cin >> price;
                        cout << "Enter battery life (hrs) >> ";
                        cin >> batteryLife;
                        cout << "Enter weight (lbs)       >> ";
                        cin >> weight;
                        cout << endl;
                        
                        Laptop l1(make, model, price, batteryLife, weight);
                        laptopList[laptopCount] = l1;
                        laptopCount++;
                    }
                    break;
                    default:
                    {
                        cout << "Error: that is not a valid choice.\n\n";
                    }
                    break;
                }
            break;
            case 2:
                cout
                << "*************************************************************************\n"
                << "**                          Entire Inventory                           **\n"
                << "*************************************************************************\n"
                << "| Id # | Make       | Model    | Price  | Battery (hrs) | Weight (lbs)  |\n"
                << "*************************************************************************\n";
                
                for(int i = 0; i < computerCount; i++)
                {
                    cout << computerList[i];
                    cout << endl;
                }
                
                for(int i = 0; i < laptopCount; i++)
                {
                    cout << laptopList[i];
                    cout << endl;
                }
                cout << endl;
            break;
            default:
                cout << "\nThank you for shopping at The Computer Depot. Have a nice day!\n\n";
            break;
        }
    }while (mainChoice > 0 && mainChoice < 3);

	system("PAUSE");
	return EXIT_SUCCESS;
}
