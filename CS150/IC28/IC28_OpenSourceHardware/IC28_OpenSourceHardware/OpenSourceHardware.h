/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#ifndef OPENSOURCEHARDWARE_H
#define OPENSOURCEHARDWARE_H

#include <string>
#include <iostream>

using namespace std;

class OpenSourceHardware
{
    protected:
        string m_model;
        double m_power;
        double m_price;
    
        OpenSourceHardware();
        OpenSourceHardware(string model, double power, double price);
    
    
public:
   
    inline void setModel(string model) { m_model = model; }
    inline void setPower(double power) { m_power = power; }
    inline void setPrice(double price) { m_price = price; }
    
    inline string getModel() const { return m_model; }
    inline double getPower() const { return m_power; }
    inline double getPrice() const { return m_price; }
    
    bool operator==(const OpenSourceHardware& other);
};


#endif /* OpenSourceHardware_h */
