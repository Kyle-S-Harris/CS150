/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #27
 * LAST MODIFIED: 11/27/18
 *****************************************************/
/*
 Algorithm:
 1. Ask user if they want to add, remove, update, or display a surfboard.
 2. If they decide to add, ask them the brand, model, length, width, thickness, quantity, and price of their choice.
 3. If they decide to remove a board, ask which id they want to remove and remove it from the array of SurfboardList.
 4. If they decide to update a bopard, ask for which id they want to update and 
 
 */
#include <iostream>
#include <string>
#include "Surfboard.h"
#include "SurfboardList.h"


int main(int argv, char* argc[])
{

	string brand, model;
	double length, width, thickness, price;
	int id, quantity;
	SurfboardList boardList;

	int userChoice = 0;

	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO                                **" << endl;
		cout << "**                      ENCHILADA SURFBOARDS                          **" << endl;
		cout << "**               \"Where you get the whole enchilada!\"                 **" << endl;          
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Surfboard to Inventory                               **" << endl;
		cout << "** 2)  Remove a Surfboard from Inventory                              **" << endl;
		cout << "** 3)  Update an existing Surfboard                                   **" << endl;
		cout << "** 4)  Display all Surfboards in Inventory                            **" << endl;
		cout << "** 5)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> userChoice;
		cin.ignore(INT_MAX, '\n');
		switch (userChoice)
		{
		case 1:
		{
			cout << "Enter Brand: ";
			getline(cin, brand);
			cout << "Enter Model: ";
			getline(cin, model);
			cout << "Enter Length: ";
			cin >> length;
			cout << "Enter Width: ";
			cin >> width;
			cout << "Enter Thickness: ";
			cin >> thickness;
			cout << "Enter Quantity: ";
			cin >> quantity;
			cout << "Enter Price $";
			cin >> price;

			Surfboard s(brand, model, length, width, thickness, quantity, price);
			if (boardList.addBoard(s))
				cout << "~~~Surfboard added successfully!~~~" << endl;
			else
				cout << "~~~Failed to add Surfboard to Inventory~~~" << endl;


			cout << endl;
			break;
		}
		case 2:
			cout << boardList << endl;
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			if (id == -1) break;
			if (boardList.removeBoard(id))
				cout << "~~~Surfboard removed successfully!~~~" << endl;
			else
				cout << "~~~Failed to remove Surfboard from Inventory~~~" << endl;
			break;
		case 3:
            cout << boardList << endl;
			cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
			if (id == -1) break;

			cin.ignore(INT_MAX, '\n');
			cout << "\nEnter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated Length: ";
			cin >> length;
			cout << "Enter Updated Width: ";
			cin >> width;
			cout << "Enter Updated Thickness: ";
			cin >> thickness;
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;

            // Now update the board!
            if(boardList.updateBoard(id, brand, model, length, width, thickness, quantity, price))
            {
                cout << "\n~~~Surfboard Update Successful~~~\n";
            }
            else
            {
                cout << "\n~~~Failed to Update Surfboard~~~\n";
            }
            
            break;
		case 4:
			cout << boardList << endl;
			break;
		case 5:
			cout << "Aloha, enjoy the ride!!!" << endl;
			break;
		default:
            cout << "Choice not recognized, please drop in again." << endl;
		}

	} while (userChoice != 5);
	cout << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
