/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #26
 * LAST MODIFIED: 11/27/18
 *****************************************************/
/*****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * "XboxConsoleList.h" Contains a list of xbox consoles
 *****************************************************************************/


#include "XboxConsoleList.h"

using namespace std;

bool XboxConsoleList::addXbox(XboxConsole xb)
{
    if(m_count >= SIZE - 1)
    {
        return false;
    }
    m_list[m_count++] = xb;
    return true;
}
bool XboxConsoleList::removeXbox(int id)
{
    for(int i = 0; i < m_count; i++)
    {
        if(m_list[i].getId() == id)
        {
            for(int j = i; j < m_count; j++)
            {
                m_list[j] = m_list[j+1];
            }
            m_count--;
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const XboxConsoleList& xb)
{
    os << "~~~Current Inventory of Xbox's~~~\n\n";
    for(int i = 0; i < xb.m_count; i++)
    {
        os << xb.m_list[i] << endl;
    }
    return os;
}
