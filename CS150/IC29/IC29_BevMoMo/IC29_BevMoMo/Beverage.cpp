/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #29
 * LAST MODIFIED: 12/11/18
 *****************************************************/

#include "Beverage.h"
#include <iomanip>
              
int Beverage::s_nextOrderNumber = 1; 
                
Beverage::Beverage()
{
        m_orderNumber = 0;
        m_name = "";
        m_calories = 0;
        m_size = 0;
}
                
Beverage::Beverage(string name, int calories, int size)
{
        m_orderNumber = s_nextOrderNumber++;
        m_name = name;
        m_calories = calories;
        m_size = size;
}

bool Beverage::operator==(const Beverage& other)
{
        return m_orderNumber == other.m_orderNumber && m_name == other.m_name
        && m_calories == other.m_calories && m_size == other.m_size;
}

ostream& operator<<(ostream& os, const Beverage& b)
{
        if(b.m_size == 0)
        {
            os << "|" << fixed << left << setw(9) << b.m_orderNumber
            << "|" << left << setw(16) << b.m_name
            << "|" << left << setw(10) << b.m_calories
            << "|S     "
            << "|";
        }
        else if(b.m_size == 1)
        {
            os << "|" << fixed << left << setw(9) << b.m_orderNumber
            << "|" << left << setw(16) << b.m_name
            << "|" << left << setw(10) << b.m_calories
            << "|M     "
            << "|";
        }
        else
        {
            os << "|" << fixed << left << setw(9) << b.m_orderNumber
            << "|" << left << setw(16) << b.m_name
            << "|" << left << setw(10) << b.m_calories
            << "|L     "
            << "|";        }
        return os;
}
