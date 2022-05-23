/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #26
 * LAST MODIFIED: 11/27/18
 *****************************************************/
/*****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * "XboxConsole.h": Contains characteristics of an xbox console
 *
 * <iostream>: header that defines input/output streams.
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
    bool addXbox(XboxConsole xb);
    bool removeXbox(int id);
    inline int getCount() const { return m_count; }
    
    friend ostream& operator<<(ostream& os, const XboxConsoleList& xb);
};

#endif /* XboxConsoleList_h */
