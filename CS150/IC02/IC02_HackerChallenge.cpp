/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #02
* LAST MODIFIED: 8/29/18
*****************************************************/
/*****************************************************************************
* HackerChallenge
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program that displays a mysterious face.
*****************************************************************************
* ALGORITHM:
* INCLUDE <cstdlib>
* INCLUDE <iostream>
* START main method
* OUTPUT ASCII art
* END main method
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

int main(int argc, char *argv[])
{
    /***** OUTPUT SECTION *****/
    
    cout<<"   .------\\ /------.\n"
    <<"   |       -       |\n"
    <<"   |               |\n"
    <<"   |               |\n"
    <<"   |               |\n"
    <<"_______________________\n"
    <<"===========.===========\n"
    <<"  /~~~~~      ~~~~~ \\\n"
    <<"/ | .  |     | .  |   \\\n"
    <<"W  ---    / \  ---     W\n"
    <<"\\.      |o o|        ./\n"
    <<" |                   |\n"
    <<"  \\    #########    /\n"
    <<"   \\  ## ----- ##  /\n"
    <<"    \\##         ##/\n"
    <<"     \\_____v_____/\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
