/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/5/18
 *****************************************************/

#include <cstdlib>
#include <iostream>
#include "Month.h"

using namespace std;

int main(int argc, char * argv[])
{
    Month m1("December", 12);
    Month m2;
    
    cout << "~~~Instantiating m1 with January (1) and m2 with December (12)~~~\n";
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;
    cout << "m1 == m2? ";
    
    if(m1.operator==(m2))
    {
        cout << "true\n\n";
    }
    else
    {
        cout << "false\n\n";
    }
    
    cout << "~~~++m1 (prefix increment) --m2 (postfix decrement)~~~\n";
    m1.operator++();
    m2.operator--();
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;
    cout << "m1 == m2? ";
    
    if(m1.operator==(m2))
    {
        cout << "true\n\n";
    }
    else
    {
        cout << "false\n\n";
    }
    
    cout << "~~~Assigning m1 = m2~~~\n";
    m1.operator=(m2);
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;
    cout << "m1 = m2? ";
    
    if(m1.operator==(m2))
    {
        cout << "true\n\n";
    }
    else
    {
        cout << "false\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
