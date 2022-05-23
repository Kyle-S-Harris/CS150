//
//  main.cpp
//  IC22_Time
//
//  Created by Kyle Harris on 11/6/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#include <cstdlib>
#include <iostream>

class Time
{
private:
    
    int m_hour;
    std::string m_meridiam;
    int m_minute;
    
public:
    
    Time(int hour, int minute, std::string meridiam)
    {
        setAll(hour, minute, meridiam);
    }
    
    //Copy constructor- creates a new obect by
    // copying all values of existing other one
    
   /* Time(const Time& other)
    {
        m_hour = other.m_hour;
        m_minute = other.m_minute;
        m_meridiam = other.m_meridiam;
    }*/
    
    friend std::ostream& operator<<(std::ostream& os, const Time& clock);
    
    void setAll(int hour, int minute, std::string meridiam)
    {
        setHour(hour);
        setMinute(minute);
        setmeridiam(meridiam);
    }
    
    void setHour(int hour)
    {
        m_hour = hour;
    }
    
    void setMinute(int minute)
    {
        m_minute = minute;
    }
    
    void setmeridiam(std::string meridiam)
    {
        m_meridiam = meridiam;
    }
    
    int getHour()
    {
        return m_hour;
    }
    
    int getMinute()
    {
        return m_minute;
    }
    
    std::string getMeridiam()
    {
        return m_meridiam;
    }
    
};

int main(int argc, char * argv[])
{
    
   
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
