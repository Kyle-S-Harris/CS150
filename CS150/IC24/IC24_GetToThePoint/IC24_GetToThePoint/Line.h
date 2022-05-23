/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/4/18
 *****************************************************/


#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include <iostream>

class Line
{
    // Member variables
private:
    Point m_p1;
    Point m_p2;
    
    // Member functions
public:
    // Constructor (prototype only)
    Line(Point p1 = 0, Point p2 = 0);
    // Getters/Setters
    // 1 line = inline
    inline Point getP1() const { return m_p1; }
    inline Point getP2() const { return m_p2; }
    inline int getX1() const { return m_p1.getX(); }
    inline int getX2() const { return m_p2.getX(); }
    inline int getY1() const { return m_p1.getX(); }
    inline int getY2() const { return m_p2.getX(); }
    
    inline void setX1(int x1) { m_p1.setX(x1); }
    inline void setX2(int x2) { m_p1.setX(x2); }
    inline void setY1(int y1) { m_p1.setY(y1); }
    inline void setY2(int y2) { m_p1.setY(y2); }
    inline int length() { return m_p1.distanceTo(m_p2); }
    inline bool operator==(const Line& other) { return m_p1 == other.m_p1 && m_p2 == other.m_p2; }
    void operator=(const Line& other);
    friend std::ostream& operator<<(std::ostream& os, const Line& l);
    
};

#endif
