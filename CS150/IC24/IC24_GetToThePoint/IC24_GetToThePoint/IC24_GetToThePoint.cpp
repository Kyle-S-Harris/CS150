/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/4/18
 *****************************************************/

#include <cstdlib>
#include <iostream>
#include "Point.h"
#include "Line.h"

int main(int argc, char * argv[])
{
    //Create 2 points (0,0) and (3,4)
    Point p1;
    Point p2(3,4);
    bool pointEqual;
    
    Point p3;
    Point p4(10, 5);
    Line l1;
    Line l2(p3, p4);
    bool lineEqual;
    
    
    std::cout << "~~~POINT~~~\n";
    std::cout << "P1 = " << p1 << std::endl;
    std::cout << "P2 = " << p2 << std::endl;
    std::cout << "Distance = " << p1.distanceTo(p2) << std::endl;
    std::cout << "Are they equal? ";
    
    if(p1.operator==(p2))
    {
        pointEqual = true;
        std::cout << "true\n";
    }
    else
    {
        pointEqual = false;
        std::cout << "false\n";
    }
    
    std::cout << "\n~~~LINE~~~\n";
    std::cout << "L1 = " << l1 << std::endl;
    std::cout << "L2 = " << l2 << std::endl;
    std::cout << "L1 Length = " << l1.length() << std::endl;
    std::cout << "L2 Length = " << l2.length() << std::endl;
    std::cout << "Are they equal? ";
    if(l1.operator==(l2))
    {
        lineEqual = true;
        std::cout << "true\n";
    }
    else
    {
        lineEqual = false;
        std::cout << "false\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
