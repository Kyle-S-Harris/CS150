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

#ifndef XBOXCONSOLELIST_H
#define XBOXCONSOLELIST_H
#include "XboxConsole.h"
#include <iostream>

class XboxConsoleList
{
private:
    int m_count;
    const static int SIZE = 100;
    XboxConsole m_list[SIZE];
    
public:
    XboxConsoleList() { m_count = 0; }
    bool addXbox(XboxConsole);
    bool removeXbox(int);
    bool updateXbox(int, string, string, string, int, int, int, double, bool);
    inline int getCount() const { return m_count; }
    
    friend ostream& operator<<(ostream& os, const XboxConsoleList& xb);
};

#endif /* XboxConsoleList_h */
