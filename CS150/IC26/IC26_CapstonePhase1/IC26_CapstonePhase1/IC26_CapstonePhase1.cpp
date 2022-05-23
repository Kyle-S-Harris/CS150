/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #26
 * LAST MODIFIED: 11/27/18
 *****************************************************/
/*****************************************************************************
 * CapstonePhase1
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that keeps inventory of Xbox consoles from any generation
 *****************************************************************************
 * ALGORITHM:
 * 1. Output menu
 * 2. If user chooses 1, ask for generation, submodel, chipset, RAM size, storage rating, quantity, and price.
 * If the Xbox was added successfully, output confirmmation. Otherwise the list is full.
 * 3. If user chooses 2 and if the list isn't empty, ask user which Xbox id they want to remove.
 * If there is nothing to remove, tell user. Otherwise, confirm removal of Xbox from list.
 * 4. If user chooses 3 and if it's empty, let user know. Otherwise, display entire inventory.
 * 5. If user chooses 4, end the program.
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * "XboxConsole.h": Contains characteristics of an xbox
 *
 * "XboxConsoleList.h" Contains a list of xbox consoles
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include "XboxConsole.h"
#include "XboxConsoleList.h"

int main(int argc, char * argv[])
{
    XboxConsoleList xl;
    
    int choice = 0;
    
    string generation, submodel, chipset;
    int id, ramSize, storageRating, quantity;
    double price;
    
    do {
        cout << "************************************************************************" << endl;
        cout << "**                                                                    **" << endl;
        cout << "**                          WELCOME TO THE                            **" << endl;
        cout << "**                        XBOX INVENTORY APP                          **" << endl;
        cout << "**                                                                    **" << endl;
        cout << "************************************************************************" << endl;
        cout << "** Please make a choice from the following options:                   **" << endl;
        cout << "** 1)  Add a new Xbox to Inventory                                    **" << endl;
        cout << "** 2)  Remove an Xbox from Inventory                                  **" << endl;
        cout << "** 3)  Display all Xbox consoles in Inventory                         **" << endl;
        cout << "** 4)  Exit                                                           **" << endl;
        cout << "************************************************************************" << endl;
        cout << ">> ";
        cin >> choice;
        cin.ignore(INT_MAX, '\n');
        switch (choice)
        {
            case 1:
            {
                cout << "Enter Xbox Generation: ";
                getline(cin, generation);
                cout << "Enter Submodel: ";
                getline(cin, submodel);
                cout << "Enter Chipset: ";
                getline(cin, chipset);
                cout << "Enter RAM Size: ";
                cin >> ramSize;
                cout << "Enter Storage Rating: ";
                cin >> storageRating;
                cout << "Enter Quantity: ";
                cin >> quantity;
                cout << "Enter Price $";
                cin >> price;
                
                
                XboxConsole xb(generation, submodel, chipset, ramSize, storageRating, quantity, price);
                if(xl.addXbox(xb))
                {
                    cout << "~~~Xbox added successfully!~~~" << endl;
                }
                else
                {
                    cout << "Inventory full, please try again after removing." << endl;
                }
                
                cout << endl;
                break;
            }
            case 2:
                
                if(xl.getCount() == 0)
                {
                    cout << "There is nothing to remove!\n\n";
                }
                else
                {
                    cout << xl << endl;
                    cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                    cin >> id;
                    if(xl.removeXbox(id))
                    {
                        cout << "~~~Xbox removed successfully!~~~" << endl;
                    }
                    else
                    {
                        cout << "That ID does not exist." << endl;
                    }
                }
                
                break;
            case 3:
                if(xl.getCount() == 0)
                {
                    cout << "~~~Current Inventory of Xbox Consoles~~~\n\nEmpty\n\n";
                }
                else
                {
                    cout << xl << endl;
                }
                break;
            case 4:
                cout << "Thank you, go nerd out!" << endl;
                break;
        }
        
    } while (choice != 4);
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
