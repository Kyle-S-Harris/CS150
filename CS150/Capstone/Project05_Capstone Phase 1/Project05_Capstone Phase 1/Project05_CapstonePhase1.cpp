/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * PROJECT: 05
 * LAST MODIFIED: 11/30/18
 *****************************************************/
/*****************************************************************************
 * CapstonePhase1
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include "XboxConsole.h"
#include "XboxConsoleList.h"
#include "XboxController.h"
#include "XboxControllerList.h"
#include "XboxExclusive.h"
#include "XboxExclusiveList.h"

int main(int argc, char * argv[])
{
    XboxConsoleList x1;
    string generation, submodel, chipset;
    int id, ramSize, storageRating, quantity;
    double price;
    int choice = 0;
    int mainChoice = 0;
    
    //string generation,
    string layout, design, color;
    //double price;
    //int id, quantity;
    XboxControllerList controllerList;
    
    //string generation,
    string title, edition, genre;
    char esrbRating;
    //int id, quantity;
    //double price;
    XboxExclusiveList exclusiveList;
    
    do
    {
        cout << "************************************************************************" << endl;
        cout << "**                                                                    **" << endl;
        cout << "**                          WELCOME TO THE                            **" << endl;
        cout << "**                        XBOX INVENTORY APP                          **" << endl;
        cout << "**                                                                    **" << endl;
        cout << "************************************************************************" << endl;
        cout << "** Please make a choice from the following options:                   **" << endl;
        cout << "** 1)  Xbox Console Inventory                                         **" << endl;
        cout << "** 2)  Xbox Controller Inventory                                      **" << endl;
        cout << "** 3)  Xbox Exclusive Inventory                                       **" << endl;
        cout << "** 4)  Exit                                                           **" << endl;
        cout << "************************************************************************" << endl;
        cout << ">> ";
        cin >> mainChoice;
        cin.ignore(INT_MAX, '\n');
        
        switch(mainChoice)
        {
            case 1:
            {
                do
                {
                    cout << "************************************************************************" << endl;
                    cout << "** Please make a choice from the following options:                   **" << endl;
                    cout << "** 1)  Add a new Xbox to Inventory                                    **" << endl;
                    cout << "** 2)  Remove an Xbox from Inventory                                  **" << endl;
                    cout << "** 3)  Update an existing Xbox Console                                **" << endl;
                    cout << "** 4)  Display all Xbox Consoles in Inventory                         **" << endl;
                    cout << "** 5)  Exit                                                           **" << endl;
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
                            if(x1.addXbox(xb))
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
                        {
                            
                            if(x1.getCount() == 0)
                            {
                                cout << "There is nothing to remove!\n\n";
                            }
                            else
                            {
                                cout << x1 << endl;
                                cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                                cin >> id;
                                if(x1.removeXbox(id))
                                {
                                    cout << "~~~Xbox removed successfully!~~~" << endl;
                                }
                                else
                                {
                                    cout << "That ID does not exist." << endl;
                                }
                            }
                            
                            break;
                        }
                        case 3:
                        {
                            cout << x1 << endl;
                            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
                            cin >> id;
                            if (id == -1) break;
                            cin.ignore(INT_MAX, '\n');
                            cout << "Enter updated Xbox Generation: ";
                            getline(cin, generation);
                            cout << "Enter updated Submodel: ";
                            getline(cin, submodel);
                            cout << "Enter updated Chipset: ";
                            getline(cin, chipset);
                            cout << "Enter updated RAM Size: ";
                            cin >> ramSize;
                            cout << "Enter updated Storage Rating: ";
                            cin >> storageRating;
                            cout << "Enter updated Quantity: ";
                            cin >> quantity;
                            cout << "Enter updated Price $";
                            cin >> price;
                            
                            if(x1.updateConsole(id, generation, submodel, chipset, ramSize, storageRating, quantity, price))
                            {
                                cout << "\n~~~Xbox Console Update Successful~~~\n";
                            }
                            else
                            {
                                cout << "\n~~~Failed to Update Xbox Console~~~\n";
                            }
                            
                        break;
                        }
                        case 4:
                        {
                            if(x1.getCount() == 0)
                            {
                                cout << "~~~Current Inventory of Xbox Consoles~~~\n\nEmpty\n\n";
                            }
                            else
                            {
                                cout << x1 << endl;
                            }
                            break;
                        }
                        case 5:
                            break;
                        
                    }
                    
                }while (choice != 5);
            
            break;
            }
                
            case 2:
            {
                
                
                int userChoice = 0;
                
                do {
                    cout << "************************************************************************" << endl;
                    cout << "** Please make a choice from the following options:                   **" << endl;
                    cout << "** 1)  Add a new Xbox Controller to Inventory                         **" << endl;
                    cout << "** 2)  Remove a Xbox Controller from Inventory                        **" << endl;
                    cout << "** 3)  Update an existing Xbox Controller                             **" << endl;
                    cout << "** 4)  Display all Xbox Controllers in Inventory                      **" << endl;
                    cout << "** 5)  Exit                                                           **" << endl;
                    cout << "************************************************************************" << endl;
                    cout << ">> ";
                    cin >> userChoice;
                    cin.ignore(INT_MAX, '\n');
                    switch (userChoice)
                    {
                        case 1:
                        {
                            cout << "Enter Xbox Generation: ";
                            getline(cin, generation);
                            cout << "Enter Layout: ";
                            getline(cin, layout);
                            cout << "Enter Design: ";
                            getline(cin, design);
                            cout << "Enter Color: ";
                            getline(cin, color);
                            cout << "Enter Quantity: ";
                            cin >> quantity;
                            cout << "Enter Price $";
                            cin >> price;
                            
                            XboxController xc(generation, layout, design, color, quantity, price);
                            if (controllerList.addXboxController(xc))
                                cout << "~~~Xbox Controller added successfully!~~~" << endl;
                            else
                                cout << "~~~Failed to add Xbox Controller to Inventory~~~" << endl;
                            
                            
                            cout << endl;
                            break;
                        }
                        case 2:
                        {
                            cout << controllerList << endl;
                            cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                            cin >> id;
                            if (id == -1) break;
                            if (controllerList.removeXboxController(id))
                                cout << "~~~Xbox Controller removed successfully!~~~" << endl;
                            else
                                cout << "~~~Failed to remove Xbox Controller from Inventory~~~" << endl;
                            break;
                        }
                            
                        case 3:
                        {
                            cout << controllerList << endl;
                            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
                            cin >> id;
                            if (id == -1) break;
                            cin.ignore(INT_MAX, '\n');
                            cout << "Enter Updated Xbox Generation: ";
                            getline(cin, generation);
                            cout << "Enter Updated Layout: ";
                            getline(cin, layout);
                            cout << "Enter Updated Design: ";
                            getline(cin, design);
                            cout << "Enter Updated Color: ";
                            getline(cin, color);
                            cout << "Enter Updated Quantity: ";
                            cin >> quantity;
                            cout << "Enter Updated Price $";
                            cin >> price;
                            
                            if(controllerList.updateController(id, generation, layout, design, color, quantity, price))
                            {
                                cout << "\n~~~Xbox Controller Update Successful~~~\n";
                            }
                            else
                            {
                                cout << "\n~~~Failed to Update Xbox Controller~~~\n";
                            }
                            
                            break;
                        }
                        case 4:
                        {
                            if(controllerList.getCount() == 0)
                            {
                                cout << "~~~Current Inventory of Xbox Controllers~~~\n\nEmpty\n\n";
                            }
                            cout << controllerList << endl;
                            break;
                        }
                        case 5:
                            break;
                        default:
                            cout << "Choice not recognized, please drop in again." << endl;
                    }
                    
                } while (userChoice != 5);
                cout << endl;
            break;
            }
            
            case 3:
            {
                
                
                int userChoice = 0;
                
                do {
                    cout << "************************************************************************" << endl;
                    cout << "** Please make a choice from the following options:                   **" << endl;
                    cout << "** 1)  Add a new Xbox Exclusive to Inventory                          **" << endl;
                    cout << "** 2)  Remove an Xbox Exclusive from Inventory                        **" << endl;
                    cout << "** 3)  Update an existing Xbox Exclusive                              **" << endl;
                    cout << "** 4)  Display all Xbox Exclusives in Inventory                       **" << endl;
                    cout << "** 5)  Exit                                                           **" << endl;
                    cout << "************************************************************************" << endl;
                    cout << ">> ";
                    cin >> userChoice;
                    cin.ignore(INT_MAX, '\n');
                    switch (userChoice)
                    {
                        case 1:
                        {
                            cout << "Enter Xbox Generation: ";
                            getline(cin, generation);
                            cout << "Enter Title: ";
                            getline(cin, title);
                            cout << "Enter Edition: ";
                            getline(cin, edition);
                            cout << "Enter Genre: ";
                            getline(cin, genre);
                            cout << "Enter ESRB Rating: ";
                            cin >> esrbRating;
                            cout << "Enter Quantity: ";
                            cin >> quantity;
                            cout << "Enter Price $";
                            cin >> price;
                            
                            XboxExclusive xe(generation, title, edition, genre, esrbRating, quantity, price);
                            if (exclusiveList.addXboxExclusive(xe))
                                cout << "~~~Xbox exclusive added successfully!~~~" << endl;
                            else
                                cout << "~~~Failed to add xbox exclusive to Inventory~~~" << endl;
                            
                            
                            cout << endl;
                            break;
                        }
                        case 2:
                            cout << exclusiveList << endl;
                            cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                            cin >> id;
                            if (id == -1) break;
                            if (exclusiveList.removeXboxExclusive(id))
                                cout << "~~~Xbox exclusive removed successfully!~~~" << endl;
                            else
                                cout << "~~~Failed to remove xbox exclusive from Inventory~~~" << endl;
                            break;
                            
                        case 3:
                        {
                            cout << exclusiveList << endl;
                            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
                            cin >> id;
                            if (id == -1) break;
                            cin.ignore(INT_MAX, '\n');
                            cout << "Enter updated Generation: ";
                            getline(cin, generation);
                            cout << "Enter updated Title: ";
                            getline(cin, title);
                            cout << "Enter updated Edition: ";
                            getline(cin, edition);
                            cout << "Enter updated Genre: ";
                            getline(cin, genre);
                            cout << "Enter updated ESRB Rating: ";
                            cin >> esrbRating;
                            cout << "Enter updated Quantity: ";
                            cin >> quantity;
                            cout << "Enter updated Price $";
                            cin >> price;
                            
                            if(exclusiveList.updateExclusive(id, generation, title, edition, genre, esrbRating, quantity, price))
                            {
                                cout << "\n~~~Xbox Exclusive Update Successful~~~\n";
                            }
                            else
                            {
                                cout << "\n~~~Failed to Update Xbox Exclusive~~~\n";
                            }
                            
                            break;
                        }
                        case 4:
                        {
                            if(exclusiveList.getCount() == 0)
                            {
                                cout << "~~~Current Inventory of Xbox Exclusives~~~\n\nEmpty\n\n";
                            }
                            cout << exclusiveList << endl;
                            break;
                        }
                        case 5:
                            break;
                        default:
                            cout << "Choice not recognized, please drop in again." << endl;
                    }
                    
                } while (userChoice != 5);
                cout << endl;
                
            break;
            }
            
            case 4:
                cout << "Thank you for using Xbox Inventory!";
            break;
                
            default:
                cout << "Please use a valid choice";
        }
        
    }while(mainChoice != 4);
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
