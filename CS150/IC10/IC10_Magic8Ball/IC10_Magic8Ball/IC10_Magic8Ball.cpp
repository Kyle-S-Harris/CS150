/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #10
* LAST MODIFIED: 10/01/18
*****************************************************/
/*****************************************************************************
* Magic8Ball
*****************************************************************************
* PROGRAM DESCRIPTION:
* A magic 8 ball simulator that gives "magic" answers to questions
*****************************************************************************
* ALGORITHM:
* 1. Get question from user
* 2. Select a random number between 1 and 8 ("magic")
* 3. Based on the number, output a corresponding answer
* 4. Give user option to repeat.
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <ctime>: date and time information
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char * argv[])
{
    string userInput;
    int answer;
    char again;
    bool isNotValid;
    
    isNotValid = true;
    
    do
    {
        cout << "What question would you like to ask Magic 8 Ball?\n";
        cin >> userInput;
        
        srand(time(NULL));
        answer = rand() % 8 + 1;
        
        if(answer == 1)
        {
            cout << "The answer is: It is certain\n\n";
        }
        else if(answer == 2)
        {
            cout << "The answer is: It is decidedly so\n\n";
        }
        else if(answer == 3)
        {
            cout << "The answer is: Most likely\n\n";
        }
        else if(answer == 4)
        {
            cout << "The answer is: Signs point to yes\n\n";
        }
        else if(answer == 5)
        {
            cout << "The answer is: Reply hazy, try again\n\n";
        }
        else if(answer == 6)
        {
            cout << "The answer is: Ask again later\n\n";
        }
        else if(answer == 7)
        {
            cout << "The answer is: Don't count on it\n\n";
        }
        else
        {
            cout << "The answer is: My sources say no\n\n";
        }
        
        cout << "Would you like to ask another question (Type Y/N)?\n";
        cin >> again;
        cout << "\n";
        
        if(again == 'N' || again == 'n')
        {
            isNotValid = false;
            cout << "Thank you for playing the Magic 8 Ball.\n\n";
        }
    }while (isNotValid);
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
