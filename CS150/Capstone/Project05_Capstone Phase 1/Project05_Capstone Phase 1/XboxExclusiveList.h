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
    bool updateExclusive(int id, string generation, string title, string edition, string genre, char esrbRating, int quantity, double price);
    inline int getCount() const { return m_count; }
    
    friend ostream& operator<<(ostream& os, const XboxExclusiveList& xe);
};

#endif /* XboxExclusiveList_h */
