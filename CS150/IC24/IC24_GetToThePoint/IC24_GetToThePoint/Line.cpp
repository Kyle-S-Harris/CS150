/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/4/18
 *****************************************************/


#include "Line.h"

Line::Line(Point p1, Point p2)
{
    m_p1 = p1;
    m_p2 = p2;
}

void Line::operator=(const Line& other)
{
    m_p1 = other.m_p1;
    m_p2 = other.m_p2;
}
std::ostream& operator<<(std::ostream& os, const Line& l)
{
    os << "Line[P1 = " << l.m_p1 << ", P2 = " << l.m_p2 << "]";
    return os;
}
