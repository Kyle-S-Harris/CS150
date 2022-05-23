/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #29
 * LAST MODIFIED: 12/11/18
 *****************************************************/

#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
#include <iostream>

using namespace std;

class Beverage
{
      protected:
             static int s_nextOrderNumber;
             int m_orderNumber;
             string m_name;
             int m_calories;
             int m_size;
     public:
             Beverage();
             Beverage(string name, int calories, int size);

      
             inline int getOrderNumber() const { return m_orderNumber; }
             inline string getName() const { return m_name; }
             inline int getCalories() const { return m_calories; }
             inline int getSize() const { return m_size; }
             
             inline void setName(string name) { m_name = name; }
             inline void setCalories(int calories) { m_calories = calories; }
             inline void setSize(int size) { m_size = size; }
             
            friend ostream& operator<<(ostream& os, const Beverage& b);
             bool operator==(const Beverage& other);
             
};




#endif
