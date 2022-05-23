/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #08
* LAST MODIFIED: 09/26/18
*****************************************************/
/*****************************************************************************
* PasswordStrength
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to determine how strong your password is.
*****************************************************************************
* ALGORITHM:
* 1. Ask user for password and ask again to confirm, check that they are same.
* 2. Check each password character to determine how many preferred
* characteristics it has.
* 3. If password doesn't have desired length or characteristics, tell user what they need
* to add. Otherwise, tell them they have an enterprise password.
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <string>: to use string and its methods.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    int size, howManyNIST;
    string password, passwordConfirm;
    char passwordCharacter;
    bool hasUpperCase, hasLowerCase, hasDigit, hasSymbol;

    hasUpperCase = false;
    hasLowerCase = false;
    hasDigit = false;
    hasSymbol = false;
    
    cout << "Enter your password: ";
    cin >> password;
    
    cout << "Confirm your password: ";
    cin >> passwordConfirm;
    
    if(password == passwordConfirm)
    {
        cout << "\nPassword's Match\n";
    }
    else
    {
        cout << "\nPasswords do not match\n";
        system("PAUSE");
        return EXIT_FAILURE;
    }
    
    size = password.size();
    
    
    for (int i = 0; i < size; i++)
    {
        passwordCharacter = password[i];
        if(!hasUpperCase && passwordCharacter >= 'A' && passwordCharacter <= 'Z')
        {
            hasUpperCase = true;
        }
        if(!hasLowerCase && passwordCharacter >= 'a' && passwordCharacter <= 'z')
        {
            hasLowerCase = true;
        }
        if(!hasDigit && passwordCharacter >= '0' && passwordCharacter <= '9')
        {
            hasDigit = true;
        }
        if(!hasSymbol && (passwordCharacter == '!' || passwordCharacter == '@'|| passwordCharacter == '#'
           || passwordCharacter == '$' || passwordCharacter == '%' || passwordCharacter == '^'
           || passwordCharacter == '&' || passwordCharacter == '*' || passwordCharacter == '('
           || passwordCharacter == ')'))
        {
            hasSymbol = true;
        }
    }
    
    howManyNIST = hasUpperCase + hasLowerCase+ hasDigit + hasSymbol;
    
    if(size < 8 || howManyNIST < 4)
    {
        cout << "The \"" << password << "\" password does not meet the minimum requirements.\n"
        << "Please add 1 or more of the following criteria:\n\n";
        
        if(size < 8)
        {
            cout << "Password must have at least 8 characters.\n\n";
        }
        if(!hasUpperCase)
        {
            cout << "At least one uppercase letter.\n\n";
        }
        if(!hasLowerCase)
        {
            cout << "At least one lowercase letter.\n\n";
        }
        if(!hasDigit)
        {
            cout << "At least one digit.\n\n";
        }
        if(!hasSymbol)
        {
            cout << "At least one symbol: ! @ # $ % ^ & * ( ) .\n\n";
        }
    }
    else
    {
        cout << "You have an enterprise password according to NIST!\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
