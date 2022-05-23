//
//  XboxExclusiveList.h
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/29/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#ifndef XBOXEXCLUSIVELIST_H
#define XBOXEXCLUSIVELIST_H

#include "XboxExclusive.h"
#include <iostream>

class XboxExclusiveList
{
private:
    int m_count;
    const static int SIZE = 100;
    XboxExclusive m_list[SIZE];
    
public:
    XboxExclusiveList() { m_count = 0; }
    bool addXboxExclusive(XboxExclusive xe);
    bool removeXboxExclusive(int id);
    inline int getCount() const { return m_count; }
    
    friend ostream& operator<<(ostream& os, const XboxExclusiveList& xe);
};

#endif /* XboxExclusiveList_h */
