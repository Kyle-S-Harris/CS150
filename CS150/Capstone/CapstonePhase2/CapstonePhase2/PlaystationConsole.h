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

#ifndef PlaystationConsole_h
#define PlaystationConsole_h

#include "Console.h"
#include <iostream>

using namespace std;

class PlaystationConsole : public Console
{
private:
    int m_id;
    bool m_vrSupport;
    
public:
    PlaystationConsole();
    PlaystationConsole(string, string, string, int, int, int, double, bool);
    inline int getId() const { return m_id; }
    inline bool getvrSupport() const { return m_vrSupport; }
    inline void setvrSupport(bool vrSupport) { m_vrSupport = vrSupport; }
    bool operator==(const PlaystationConsole& other);
    friend ostream& operator<<(ostream& os, const PlaystationConsole& p);
    
    
};

#endif /* PlaystationConsole_h */
