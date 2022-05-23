//
//  XboxControllerList.h
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/29/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

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
        inline int getCount() const { return m_count; }
    
        friend ostream& operator<<(ostream& os, const XboxControllerList& xc);
    };


#endif /* XboxControllerList_h */
