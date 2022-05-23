/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#include "OpenSourceHardware.h"

OpenSourceHardware::OpenSourceHardware()
{
    m_model = "";
    m_power = 0.0;
    m_price = 0.0;
}

OpenSourceHardware::OpenSourceHardware(string model, double power, double price)
{
    m_model = model;
    m_power = power;
    m_price = price;
}

bool OpenSourceHardware::operator==(const OpenSourceHardware& other)
{
    return m_model == other.m_model && m_power == other.m_power && m_price == other.m_price;
}
