/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #02
* LAST MODIFIED: 8/29/18
*****************************************************/
/*****************************************************************************
* CyborgDataTypes
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program that outputs the size of each primitive data type.
*****************************************************************************
* ALGORITHM:
* INCLUDE <cstdlib>
* INCLUDE <iostream>
* INCLUDE <iomanip>
* START main method
* OUTPUT primitive sizes
* END main method
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <iomanip>: to modify input/output characteristics.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    /***** OUTPUT SECTION *****/
    
    cout<<left <<setw(20) <<"bool: " <<sizeof(bool) <<" byte(s)\n\n"
    <<setw(20) <<"char: " <<sizeof(char) <<" byte(s)\n\n"
    <<setw(20) <<"short: " <<sizeof(short) <<" byte(s)\n\n"
    <<setw(20) <<"int: " <<sizeof(int) <<" byte(s)\n\n"
    <<setw(20) <<"long: " <<sizeof(long) <<" byte(s)\n\n"
    <<setw(20) <<"long long: " <<sizeof(long long) <<" byte(s)\n\n"
    <<setw(20) <<"float: " <<sizeof(float) <<" byte(s)\n\n"
    <<setw(20) <<"double: " <<sizeof(double) <<" byte(s)\n\n"
    <<setw(20) <<"long double: " <<sizeof(long double) <<" byte(s)\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
