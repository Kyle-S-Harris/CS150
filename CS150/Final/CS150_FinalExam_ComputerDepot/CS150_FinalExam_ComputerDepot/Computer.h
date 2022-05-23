//Kyle Harris
//CS150 Final (FA2018)

#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <iostream>

using namespace std;

class Computer
{
    protected:
        static int s_nextID;
    
        int m_id;
        string m_make;
        string m_model;
        double m_price;
    
    public:
        Computer();
        Computer(string make, string model, double price);
    
        inline int getID() const { return m_id; }
        inline string getMake() const { return m_make; }
        inline string getModel() const { return m_model; }
        inline double getPrice() const { return m_price; }
    
        inline void setMake(string make) { m_make = make; }
        inline void setModel(string model) { m_model = model; }
        inline void setPrice(double price) { m_price = price; }
    
        bool operator==(const Computer& other);
        friend ostream& operator<<(ostream& os, const Computer& cp);
    
        };

#endif
