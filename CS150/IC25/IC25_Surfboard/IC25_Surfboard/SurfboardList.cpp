/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #25
 * LAST MODIFIED: 11/27/18
 *****************************************************/
/*****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * "SurfBoardList.h" Contains a list of surfboards
 *****************************************************************************/

#include "SurfboardList.h"

using namespace std;

bool SurfboardList::addBoard(Surfboard sb)
{
    //Check to see if the list is full (m_count >= SIZE - 1)
    if(m_count >= SIZE - 1)
    {
        return false;
    }
    //If the list has space, add the surfboard to it
    m_list[m_count++] = sb;
    return true;
}
bool SurfboardList::removeBoard(int id)
{
    //LOOP THROUGH LIST to find the board's id
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

ostream& operator<<(ostream& os, const SurfboardList& sb)
{
    os << "~~~Current Inventory of Surfboards~~~\n\n";
    for(int i = 0; i < sb.m_count; i++)
    {
        os << sb.m_list[i] << endl;
    }
    return os;
}
