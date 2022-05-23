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

#ifndef XBOXCONSOLE_H
#define XBOXCONSOLE_H

#include "Console.h"
#include <iostream>

using namespace std;

class XboxConsole : public Console
{
private:
    int m_id;
    bool m_hasKinect;
    
public:
    XboxConsole();
    XboxConsole(string, string, string, int, int, int, double, bool);
    inline int getId() const { return m_id; }
    inline bool getHasKinect() const { return m_hasKinect; }
    inline void setHasKinect(bool hasKinect) { m_hasKinect = hasKinect; }
    bool operator==(const XboxConsole& other);
    friend ostream& operator<<(ostream& os, const XboxConsole& x);
    
    
};

#endif /* XboxConsole_h */
