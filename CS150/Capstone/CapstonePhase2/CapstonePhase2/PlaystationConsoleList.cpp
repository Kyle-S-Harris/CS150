/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * PROJECT: 06
 * LAST MODIFIED: 12/13/18
 *****************************************************/
/*****************************************************************************
 * CapstonePhase2
 *****************************************************************************/

#include "PlaystationConsoleList.h"

using namespace std;

bool PlaystationConsoleList::addPlaystation(PlaystationConsole ps)
{
    if(m_count >= SIZE - 1)
    {
        return false;
    }
    m_list[m_count++] = ps;
    return true;
}
bool PlaystationConsoleList::removePlaystation(int id)
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

bool PlaystationConsoleList::updatePlaystation(int id, string generation, string submodel, string chipset, int ramSize, int storageRating, int quantity, double price, bool vrSupport)
{
    for(int i = 0; i < m_count; i++)
    {
        if(id == m_list[i].getId())
        {
            m_list[i].setGeneration(generation);
            m_list[i].setSubmodel(submodel);
            m_list[i].setChipset(chipset);
            m_list[i].setRamSize(ramSize);
            m_list[i].setStorageRating(storageRating);
            m_list[i].setQuantity(quantity);
            m_list[i].setPrice(price);
            m_list[i].setvrSupport(vrSupport);
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const PlaystationConsoleList& ps)
{
    os << "~~~Current Inventory of Playstation Consoles~~~\n\n";
    for(int i = 0; i < ps.m_count; i++)
    {
        os << ps.m_list[i] << endl;
    }
    return os;
}
