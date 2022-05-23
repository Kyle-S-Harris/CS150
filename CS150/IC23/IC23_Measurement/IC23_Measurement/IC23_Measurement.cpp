/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #23
 * LAST MODIFIED: 12/6/18
 *****************************************************/

#include <cstdlib>
#include <iostream>

using namespace std;

class Measurement
{
    private:
        int m_feet;
        int m_inches;
    
public:
    Measurement(int feet = 0, int inches = 0)
    {
        setAll(feet, inches);
    }
    
    Measurement(const Measurement& other)
    {
        m_feet = other.m_feet;
        m_inches = other.m_inches;
    }
    
    friend std::ostream& operator<<(std::ostream& os, const Measurement& m);
    
    void setAll(int feet, int inches)
    {
        setFeet(feet);
        setInches(inches);
    }
    
    void setFeet(int feet)
    {
        m_feet = feet;
    }
    
    void setInches(int inches)
    {
        m_inches = inches;
    }
    
    int getFeet()
    {
        return m_feet;
    }
    
    int getInches()
    {
        return m_inches;
    }
    
    bool operator==(const Measurement& other)
    {
        return (m_feet == other.m_feet && m_inches == other.m_inches);
    }
    
    Measurement operator+(const Measurement& other)
    {
        m_inches += other.m_inches;
        m_feet += other.m_feet;
        
        for(int i = 0; i < m_inches/12; i++)
        {
            if(m_inches > 11)
            {
                m_feet += 1;
                m_inches -= 12;
            }
        }
        
        Measurement newM(m_feet, m_inches);
        return newM;
    }
    
    Measurement operator-(const Measurement& other)
    {
        m_inches -= other.m_inches;
        m_feet -= other.m_feet;
    
        if(m_inches < 0)
        {
            m_feet -= 1;
            m_inches += 12;
        }
        Measurement newM(m_feet, m_inches);
        return newM;
    }

    //Without parameters => PREFIX
    Measurement operator++()
    {
        m_inches++;
        if(m_inches == 13)
        {
            m_inches = 0;
            m_feet++;
        }
        //PREFIX: return the new measurement
        Measurement newM(m_feet, m_inches);
        return newM;
    }
    
    //Without parameters => POSTFIX
    //Dummy parameter int => PREFIX
    
    Measurement operator++(int)
    {
        //Postfix = make copy of old value
        Measurement oldM(m_feet, m_inches);
        m_inches++;
        if(m_inches == 13)
        {
            m_inches = 0;
            m_feet++;
        }
        //POSTFIX: return the new time
        return oldM;
    }
    
    Measurement operator--()
    {
        m_inches--;
        if(m_inches == -1)
        {
            m_inches = 11;
            m_feet--;
        }
        //PREFIX: return the new measurement
        Measurement newM(m_feet, m_inches);
        return newM;
    }
    
    Measurement operator--(int)
    {
        //Postfix = make copy of old value
        Measurement oldM(m_feet, m_inches);
        m_inches--;
        if(m_inches == -1)
        {
            m_inches = 11;
            m_feet--;
        }
        //POSTFIX: return the new time
        return oldM;
    }
};

ostream& operator << (ostream& os, const Measurement& m)
{
    os << "Measurement[" << m.m_feet << " feet, " << m.m_inches << " inches]";
    return os;
}

int main(int argc, const char * argv[])
{
    Measurement m1(5, 18);
    
    
    if(m1.getInches() > 11)
    {
        m1.setFeet(m1.getFeet() + 1);
        m1.setInches(m1.getInches() - 12);
    }
    Measurement m2(m1);
    
    cout << "~~~Instantiating m1 and m2 with 5 feet, 18 inches~~~\n" <<
    "m1 = " << m1 << "\nm2 = " << m2 << "\nm1 == m2? ";
    
    if(m1.operator==(m2))
    {
        cout << "true\n\n";
    }
    else
    {
        cout << "false\n\n";
    }
    
    cout << "~~~++m1 (prefix increment) and --m2 (postfix decrement)~~~\n"
    << "++m1 = " << m1.operator++() << "\n--m2 = " << m2.operator--() << "\nm1 == m2? ";
    
    if(m1.operator==(m2))
    {
        cout << "true\n\n";
    }
    else
    {
        cout << "false\n\n";
    };
    
    Measurement m3;
    Measurement m4(13, 2);
    m3.operator+(m1);
    m3.operator+(m2);
    
    m4.operator-(m1);
    m4.operator-(m2);
    
    cout <<"~~~m3 = m1 + m2~~~\n" << m3 << "\n\n";
    
    cout <<"~~~m4 = m1 - m2~~~\n" << m4 << "\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
