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

#include "XboxControllerList.h"

using namespace std;

bool XboxControllerList::addXboxController(XboxController xc)
{
    if(m_count >= SIZE - 1)
    {
        return false;
    }
    m_list[m_count++] = xc;
    return true;
}
bool XboxControllerList::removeXboxController(int id)
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

bool XboxControllerList::updateController(int id, string generation, string layout, string design, string color, int quantity, double price)
{
    for(int i = 0; i < m_count; i++)
    {
        if(id == m_list[i].getId())
        {
            m_list[i].setGeneration(generation);
            m_list[i].setLayout(layout);
            m_list[i].setDesign(design);
            m_list[i].setColor(color);
            m_list[i].setQuantity(quantity);
            m_list[i].setPrice(price);
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const XboxControllerList& xc)
{
    os << "~~~Current Inventory of Xbox Controllers~~~\n\n";
    for(int i = 0; i < xc.m_count; i++)
    {
        os << xc.m_list[i] << endl;
    }
    return os;
}
