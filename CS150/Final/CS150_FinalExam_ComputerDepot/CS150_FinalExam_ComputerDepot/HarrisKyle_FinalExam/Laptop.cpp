//Kyle Harris
//CS150 Final (FA2018)

#include "Laptop.h"
#include <iomanip>

using namespace std;

Laptop::Laptop() : Computer()
{
    m_id = 0;
    m_make = "";
    m_model = "";
    m_price = 0.0;
    m_batteryLife = 0.0;
    m_weight = 0.0;
}

Laptop::Laptop(string make, string model, double price, double batteryLife, double weight)
{
    m_id = s_nextID++;
    m_make = make;
    m_model = model;
    m_price = price;
    m_batteryLife = batteryLife;
    m_weight = weight;
}

bool Laptop::operator==(const Laptop& other)
{
    return m_id == other.m_id && m_make == other.m_make && m_model == other.m_model
    && m_price == other.m_price && m_batteryLife == other.m_batteryLife && m_weight == other.m_weight;
}

ostream& operator<<(ostream& os, const Laptop& l)
{
    os << "|" << fixed << left << setw(6) << l.m_id
    << "|" << left << setw(7) << l.m_make
    << "|" << left << setw(15) << l.m_model
    << "|" << left << setw(8) << setprecision(2) << l.m_price
    << "|" << left << setw(15) << setprecision(1) << l.m_batteryLife
    << "|" << left << setw(15) << setprecision(1) << l.m_weight
    << "|";
    return os;
}

