/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * PROJECT: 05
 * LAST MODIFIED: 11/30/18
 *****************************************************/
/*****************************************************************************
 * CapstonePhase1
 *****************************************************************************/

#include "XboxExclusiveList.h"

using namespace std;

bool XboxExclusiveList::addXboxExclusive(XboxExclusive xe)
{
    if(m_count >= SIZE - 1)
    {
        return false;
    }
    m_list[m_count++] = xe;
    return true;
}
bool XboxExclusiveList::removeXboxExclusive(int id)
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

bool XboxExclusiveList::updateExclusive(int id, string generation, string title, string edition, string genre, char esrbRating, int quantity, double price)
{
    for(int i = 0; i < m_count; i++)
    {
        if(id == m_list[i].getId())
        {
            m_list[i].setGeneration(generation);
            m_list[i].setTitle(title);
            m_list[i].setEdition(edition);
            m_list[i].setGenre(genre);
            m_list[i].setEsrbRating(esrbRating);
            m_list[i].setQuantity(quantity);
            m_list[i].setPrice(price);
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const XboxExclusiveList& xe)
{
    os << "~~~Current Inventory of Xbox Exclusives~~~\n\n";
    for(int i = 0; i < xe.m_count; i++)
    {
        os << xe.m_list[i] << endl;
    }
    return os;
}

