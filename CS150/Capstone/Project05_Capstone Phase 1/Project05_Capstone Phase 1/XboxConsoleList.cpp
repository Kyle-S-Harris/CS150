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

bool XboxConsoleList::updateConsole(int id, string generation, string submodel, string chipset, int ramSize, int storageRating, int quantity, double price)
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
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const XboxConsoleList& xb)
{
    os << "~~~Current Inventory of Xbox Consoles~~~\n\n";
    for(int i = 0; i < xb.m_count; i++)
    {
        os << xb.m_list[i] << endl;
    }
    return os;
}
