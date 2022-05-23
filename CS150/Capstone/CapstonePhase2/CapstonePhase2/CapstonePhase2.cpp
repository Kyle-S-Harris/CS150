/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * PROJECT: 06
 * LAST MODIFIED: 12/13/18
 *****************************************************/
/*****************************************************************************
 * CapstonePhase2
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include "XboxConsole.h"
#include "XboxConsoleList.h"
#include "PlaystationConsole.h"
#include "PlaystationConsoleList.h"

int main(int argc, char * argv[])
{
    XboxConsoleList x1;
    PlaystationConsoleList p1;
    string generation, submodel, chipset;
    int id, ramSize, storageRating, quantity;
    double price;
    int choice = 0;
    bool hasKinect = false, vrSupport = false;
    int mainChoice = 0;
    
    /*
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
    XboxExclusiveList exclusiveList;*/
    
    do
    {
        cout << "************************************************************************" << endl;
        cout << "**                                                                    **" << endl;
        cout << "**                          WELCOME TO THE                            **" << endl;
        cout << "**                        XBOX INVENTORY APP                          **" << endl;
        cout << "**                                                                    **" << endl;
        cout << "************************************************************************" << endl;
        cout << "** Please make a choice from the following options:                   **" << endl;
        cout << "** 1)  Xbox                                                           **" << endl;
        cout << "** 2)  Playstation                                                    **" << endl;
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
                            cout << "Has Kinect? ";
                            cin >> hasKinect;
                            
                            
                            XboxConsole xb(generation, submodel, chipset, ramSize, storageRating, quantity, price, hasKinect);
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
                            cout << "Has Kinect? ";
                            cin >> hasKinect;
                            
                            if(x1.updateXbox(id, generation, submodel, chipset, ramSize, storageRating, quantity, price, hasKinect))
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
                
                
                
                do
                {
                    cout << "************************************************************************" << endl;
                    cout << "** Please make a choice from the following options:                   **" << endl;
                    cout << "** 1)  Add a new PS to Inventory                                    **" << endl;
                    cout << "** 2)  Remove an PS from Inventory                                  **" << endl;
                    cout << "** 3)  Update an existing PS Console                                **" << endl;
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
                            cout << "Enter PS Generation: ";
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
                            cout << "VR Supported? ";
                            cin >> vrSupport;
                            
                            
                            PlaystationConsole ps(generation, submodel, chipset, ramSize, storageRating, quantity, price, vrSupport);
                            if(p1.addPlaystation(ps))
                            {
                                cout << "~~~PS added successfully!~~~" << endl;
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
                            
                            if(p1.getCount() == 0)
                            {
                                cout << "There is nothing to remove!\n\n";
                            }
                            else
                            {
                                cout << p1 << endl;
                                cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                                cin >> id;
                                if(p1.removePlaystation(id))
                                {
                                    cout << "~~~PS removed successfully!~~~" << endl;
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
                            cout << p1 << endl;
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
                            cout << "VR Supported? ";
                            cin >> vrSupport;
                            
                            if(p1.updatePlaystation(id, generation, submodel, chipset, ramSize, storageRating, quantity, price, vrSupport))
                            {
                                cout << "\n~~~PS Console Update Successful~~~\n";
                            }
                            else
                            {
                                cout << "\n~~~Failed to Update PS Console~~~\n";
                            }
                            
                            break;
                        }
                        case 4:
                        {
                            if(p1.getCount() == 0)
                            {
                                cout << "~~~Current Inventory of PS Consoles~~~\n\nEmpty\n\n";
                            }
                            else
                            {
                                cout << p1 << endl;
                            }
                            break;
                        }
                        case 5:
                            break;
                            
                    }
                    
                }while (choice != 5);
            break;
            }
            
           /* case 3:
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
                cout << "Please use a valid choice";*/
        }
        
    }while(mainChoice != 4);
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
