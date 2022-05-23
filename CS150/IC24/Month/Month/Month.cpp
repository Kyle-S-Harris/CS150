/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #24
 * LAST MODIFIED: 12/5/18
 *****************************************************/

#include "Month.h"

string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

Month::Month(string name, int number)
{
    m_name = name;
    m_number = number;
}

void Month::operator=(const Month& other)
{
    m_name = other.m_name;
    m_number = other.m_number;
}

Month Month::operator++()
{
    m_name = months[m_number];
    m_number++;
    if(m_number == 13)
    {
        m_name = "January";
        m_number = 1;
    }
    //PREFIX: return the new month
    Month newM(m_name, m_number);
    return newM;
}

//Without parameters => POSTFIX
//Dummy parameter int => PREFIX

Month Month::operator++(int)
{
    //Postfix = make copy of old value
    Month oldM(m_name, m_number);
    m_name = months[m_number];
    m_number++;
    if(m_number == 13)
    {
        m_name = "January";
        m_number = 1;
    }
    //POSTFIX: return the old month
    return oldM;
}

Month Month::operator--()
{
    m_name = months[m_number - 2];
    m_number--;
    if(m_number == 0)
    {
        m_name = "December";
        m_number = 12;
    }
    //PREFIX: return the new month
    Month newM(m_name, m_number);
    return newM;
}

Month Month::operator--(int)
{
    //Postfix = make copy of old value
    Month oldM(m_name, m_number);
    m_name = months[m_number - 2];
    m_number--;
    if(m_number == 0)
    {
        m_name = "December";
        m_number = 12;
    }
    //POSTFIX: return the old month
    return oldM;
}

std::ostream& operator<<(std::ostream& os, const Month& m)
{
    os << "Month [" << m.m_name << " (" << m.m_number << ")]";
    return os;
}

