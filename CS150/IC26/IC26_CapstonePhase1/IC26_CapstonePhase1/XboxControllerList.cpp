//
//  XboxControllerList.cpp
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/29/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

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

ostream& operator<<(ostream& os, const XboxControllerList& xc)
{
    os << "~~~Current Inventory of Xbox's~~~\n\n";
    for(int i = 0; i < xc.m_count; i++)
    {
        os << xc.m_list[i] << endl;
    }
    return os;
}
