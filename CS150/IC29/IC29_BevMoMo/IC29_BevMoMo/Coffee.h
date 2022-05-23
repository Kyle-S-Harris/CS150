/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #29
 * LAST MODIFIED: 12/11/18
 *****************************************************/

#ifndef COFFEE_H
#define COFFEE_H

#include "Beverage.h"
#include <string>
#include <iostream>

using namespace std;

class Coffee : public Beverage
{
      private:
             int m_caffeine;
             string m_roast;
      public:
                 
             Coffee();
             Coffee(string name, int calories, int size, int caffeine, string roast);
                
      
      
             inline int getCaffeine() const { return m_caffeine; }
             inline string getRoast() const { return m_roast; }
             
             inline void setCaffeine(int caffeine) { m_caffeine = caffeine; }
             inline void setRoast(string roast) { m_roast = roast; }
             
             friend ostream& operator<<(ostream& os, const Coffee& c);
             bool operator==(const Coffee& other);
             
};




#endif
