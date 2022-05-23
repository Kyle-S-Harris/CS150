/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #22
 * LAST MODIFIED: 11/20/18
 *****************************************************/
/*****************************************************************************
 * Time
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that can display and change the displayed time.
 *****************************************************************************
 * ALGORITHM:
 * 1. Create 2 Time objects, t1 with the parameters filled (full) and t2 without (default)
 * 2. Output both objects' time, if they are the same, output true. Otherwise, false.
 * 3. Output t1's time and prefix increment its time and output t2's time.
 * If they are the same, output true. Otherwise, false.
 * 4. Output t1's time and output t2's time and postfix increment its time.
 * If they are the same, output true. Otherwise, false.
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *****************************************************************************/
#include <cstdlib>
#include <iostream>

class Time
{
    private:
    
        int m_hour;
        std::string m_meridiam;
        int m_minute;
    
    public:
  
        Time(int hour = 12, int minute = 0, std::string meridiam = "AM")
        {
            setAll(hour, minute, meridiam);
        }
    
        //Copy constructor- creates a new object by
        // copying all values of existing other one
    
        Time(const Time& other)
        {
            m_hour = other.m_hour;
            m_minute = other.m_minute;
            m_meridiam = other.m_meridiam;
        }
    
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
    
        //Helpers
    
        bool operator==(const Time& other)
        {
            return (m_minute == other.m_minute && m_hour == other.m_hour && m_meridiam == other.m_meridiam);
        }
    
        //Without parameters => PREFIX
        Time operator++()
        {
            m_minute++;
            if(m_minute == 60)
            {
                m_minute = 0;
                m_hour++;
                if(m_hour == 12)
                {
                    m_meridiam = (m_meridiam == "AM") ? "PM" : "AM";
                }
                if(m_hour == 13)
                {
                    m_hour = 1;
                }
            }
            //PREFIX: return the new time
            Time newT(m_hour, m_minute, m_meridiam);
            return newT;
        }
    
        //Without parameters => POSTFIX
        //Dummy parameter int => PREFIX
    
        Time operator++(int)
        {
            //Postfix = make copy of old value
            Time oldT(m_hour, m_minute, m_meridiam);
            m_minute++;
            if(m_minute == 60)
            {
                m_minute = 0;
                m_hour++;
                if(m_hour == 12)
                {
                    m_meridiam = (m_meridiam == "AM") ? "PM" : "AM";
                }
                if(m_hour == 13)
                {
                    m_hour = 1;
                }
            }
            //POSTFIX: return the new time
            return oldT;
        }
    
        Time operator--()
        {
            m_minute--;
            if(m_minute == -1)
            {
                m_minute = 59;
                m_hour--;
                if(m_hour == 11)
                {
                    m_meridiam = (m_meridiam == "AM") ? "PM" : "AM";
                }
                if(m_hour == 0)
                {
                    m_hour = 12;
                }
            }
            //PREFIX: return the new time
            Time newT(m_hour, m_minute, m_meridiam);
            return newT;
        }
    
        Time operator--(int)
        {
            //Postfix = make copy of old value
            Time oldT(m_hour, m_minute, m_meridiam);
            m_minute--;
            if(m_minute == -1)
            {
                m_minute = 59;
                m_hour--;
                if(m_hour == 11)
                {
                    m_meridiam = (m_meridiam == "AM") ? "PM" : "AM";
                }
                if(m_hour == 0)
                {
                    m_hour = 12;
                }
            }
            //POSTFIX: return the new time
            return oldT;
        }
    
};

std::ostream& operator << (std::ostream& os, const Time& v)
{
    if(v.m_minute >= 0 && v.m_minute < 10)
    {
        os << "Time[" << v.m_hour << ":0" << v.m_minute << " " << v.m_meridiam << "]";
    }
    else
    {
        os << "Time[" << v.m_hour << ":" << v.m_minute << " " << v.m_meridiam << "]";
    }
    
    return os;
}

int main(int argc, char* argv[])
{
    
    Time t1(11, 59, "PM");
    Time t2; // 12:00 AM

    std::cout << "~~~Original Times~~~\n";
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << "\nT1 is equal to T2? ";
    
    if(t1.operator==(t2) == 0)
    {
        std::cout << "false\n\n";
    }
    else
    {
        std::cout << "true\n\n";
    }
    
    
    std::cout << "~~~cout << ++t1~~~";
    std::cout << "\nt1: " << t1.operator++() << std::endl;
    std::cout << "t2: " << t2 << "\nT1 is equal to T2? ";
    
    if(t1.operator==(t2) == 0)
    {
        std::cout << "false\n\n";
    }
    else
    {
        std::cout << "true\n\n";
    }
    
    std::cout << "~~~cout << t2++~~~";
    std::cout << "\nt1: " << t1 << std::endl;
    std::cout << "t2: " << t2.operator++(1) << "\nT1 is equal to T2? ";
    
    if(t1.operator==(t2) == 0)
    {
        std::cout << "false\n\n";
    }
    else
    {
        std::cout << "true\n\n";
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
