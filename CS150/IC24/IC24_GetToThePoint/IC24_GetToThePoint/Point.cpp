/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/4/18
 *****************************************************/

#include "Point.h"
#include <cmath>

//When you implement functions from the header file,
//you have to prefix them with namespace (class name)

//Point:: lets C++ which class it's coming from

Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}

double Point::distanceTo(const Point& other)
{
    int deltaX = pow(other.m_x - m_x, 2);
    int deltaY = pow(other.m_y - m_y, 2);
    return sqrt(deltaX + deltaY);
}

void Point::operator=(const Point& other)
{
    m_x = other.m_x;
    m_y = other.m_y;
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << "Point[X = " << p.m_x << ", y = " << p.m_y << "]";
    return os;
}
