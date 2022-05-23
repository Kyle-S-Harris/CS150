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

#ifndef PlaystationConsoleList_h
#define PlaystationConsoleList_h

#include "PlaystationConsole.h"
#include <iostream>

class PlaystationConsoleList
{
private:
    int m_count;
    const static int SIZE = 100;
    PlaystationConsole m_list[SIZE];
    
public:
    PlaystationConsoleList() { m_count = 0; }
    bool addPlaystation(PlaystationConsole ps);
    bool removePlaystation(int);
    bool updatePlaystation(int, string, string, string, int, int, int, double, bool);
    inline int getCount() const { return m_count; }
    
    friend ostream& operator<<(ostream& os, const PlaystationConsoleList& ps);
};

#endif /* PlaystationConsoleList_h */
