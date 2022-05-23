/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #02
* LAST MODIFIED: 8/29/18
*****************************************************/
/*****************************************************************************
* TrianglePattern
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program that displays a triangle.
*****************************************************************************
* ALGORITHM:
* INCLUDE <cstdlib>
* INCLUDE <iostream>
* INCLUDE <iomanip>
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
    
    cout<<"     *\n"
    <<"    ***\n"
    <<"   *****\n"
    <<"  *******\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
