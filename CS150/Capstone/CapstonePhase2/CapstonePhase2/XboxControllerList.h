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

#ifndef XBOXCONTROLLERLIST_H
#define XBOXCONTROLLERLIST_H

#include "XboxController.h"
#include <iostream>

class XboxControllerList
{
    private:
        int m_count;
        const static int SIZE = 100;
        XboxController m_list[SIZE];
    
    public:
        XboxControllerList() { m_count = 0; }
        bool addXboxController(XboxController xc);
        bool removeXboxController(int id);
        bool updateController(int id, string generation, string layout, string design, string color, int quantity, double price);
        inline int getCount() const { return m_count; }
    
        friend ostream& operator<<(ostream& os, const XboxControllerList& xc);
    };


#endif /* XboxControllerList_h */
