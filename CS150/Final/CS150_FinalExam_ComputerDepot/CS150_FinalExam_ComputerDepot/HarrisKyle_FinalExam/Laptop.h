//Kyle Harris
//CS150 Final (FA2018)

#ifndef LAPTOP_H
#define LAPTOP_H

#include "Computer.h"
#include <string>
#include <iostream>

using namespace std;

class Laptop : public Computer
{
    private:
        double m_batteryLife;
        double m_weight;
    
    public:
        Laptop();
        Laptop(string make, string model, double price, double batteryLife, double weight);
    
        inline double getBatteryLife() const { return m_batteryLife; }
        inline double getWeight() const { return m_weight; }
    
        inline void setBatteryLife(double batteryLife) { m_batteryLife = batteryLife; }
        inline void setWeight(double weight) { m_weight = weight; }
    
        bool operator==(const Laptop& other);
        friend ostream& operator<<(ostream& os, const Laptop& l);
};

#endif

