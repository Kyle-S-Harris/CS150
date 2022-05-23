/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/4/18
 *****************************************************/


#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{  
  // Member variables
  private:
          int m_x;
          int m_y;
         
  // Member functions 
  public:
         // Constructor (prototype only)
         Point(int x = 0, int y = 0);
         // Getters/Setters
         // 1 line = inline
         inline int getX() const { return m_x; }
         inline int getY() const { return m_y; }
         inline void setX(int x) { m_x = x; }
         inline void setY(int y) { m_y = y; }
         double distanceTo(const Point& other);
         inline bool operator==(const Point& other) { return m_x == other.m_x && m_y == other.m_y; }
         void operator=(const Point& other);
         
         friend std::ostream& operator<<(std::ostream& os, const Point& p);
                        
};

#endif
