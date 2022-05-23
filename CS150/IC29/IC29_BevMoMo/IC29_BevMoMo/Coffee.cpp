/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #29
 * LAST MODIFIED: 12/11/18
 *****************************************************/

#include "Coffee.h"
#include <iomanip>
                
Coffee::Coffee() : Beverage()
{
        m_orderNumber = 0;
        m_name = "";
        m_calories = 0;
        m_size = 0;
        m_caffeine = 0;
        m_roast = "N/A";
}
                
Coffee::Coffee(string name, int calories, int size, int caffeine, string roast)
{
        m_orderNumber = s_nextOrderNumber++;
        m_name = name;
        m_calories = calories;
        m_size = size;
        m_caffeine = caffeine;
        m_roast = roast;
}

bool Coffee::operator==(const Coffee& other)
{
        return m_orderNumber == other.m_orderNumber && m_name == other.m_name
        && m_calories == other.m_calories && m_size == other.m_size;
}

ostream& operator<<(ostream& os, const Coffee& c)
{
        if(c.m_size == 0)
        {
            os << "|" << fixed << left << setw(9) << c.m_orderNumber
               << "|" << left << setw(16) << c.m_name
               << "|" << left << setw(10) << c.m_calories
               << "|S     "
               << "|" << left << setw(15) << c.m_caffeine
               << "|" << left << setw(10) << c.m_roast
               << "|" ;
        }
        else if(c.m_size == 1)
        {
            os << "|" << fixed << left << setw(9) << c.m_orderNumber
            << "|" << left << setw(16) << c.m_name
            << "|" << left << setw(10) << c.m_calories
            << "|M     "
            << "|" << left << setw(15) << c.m_caffeine
            << "|" << left << setw(10) << c.m_roast
            << "|" ;
        }
        else
        {
            os << "|" << fixed << left << setw(9) << c.m_orderNumber
            << "|" << left << setw(16) << c.m_name
            << "|" << left << setw(10) << c.m_calories
            << "|L     "
            << "|" << left << setw(15) << c.m_caffeine
            << "|" << left << setw(10) << c.m_roast
            << "|" ;
        }
        return os;
}
