/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/5/18
 *****************************************************/

#ifndef MONTH_H
#define MONTH_H
#include <iostream>

using namespace std;

class Month
{
private:
    string m_name;
    int m_number;
    
public:
    Month(string name = "January", int number = 1);
    inline string getName() const { return m_name; }
    inline int getNumber() const { return m_number; }
    inline void setName(string name) { m_name = name; }
    inline void setNumber(int number) { m_number = number; }
    inline bool operator==(const Month& other) { return m_name == other.m_name && m_number == other.m_number; }
    void operator=(const Month& other);
    Month operator++();
    Month operator++(int);
    Month operator--();
    Month operator--(int);
    friend ostream& operator<<(ostream& os, const Month& m);
};


#endif /* Month_h */
