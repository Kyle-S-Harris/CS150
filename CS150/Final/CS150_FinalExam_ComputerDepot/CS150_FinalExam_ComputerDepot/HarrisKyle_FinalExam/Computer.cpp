//Kyle Harris
//CS150 Final (FA2018)

#include "Computer.h"
#include <iomanip>

using namespace std;

int Computer::s_nextID = 100;

Computer::Computer()
{
    m_id = 0;
    m_make = "";
    m_model = "";
    m_price = 0.0;
}

Computer::Computer(string make, string model, double price)
{
    m_id = s_nextID++;
    m_make = make;
    m_model = model;
    m_price = price;
}

bool Computer::operator==(const Computer& other)
{
    return m_id == other.m_id && m_make == other.m_make && m_model == other.m_model
    && m_price == other.m_price;
}

ostream& operator<<(ostream& os, const Computer& cp)
{
    os << "|" << fixed << left << setw(6) << cp.m_id
       << "|" << left << setw(7) << cp.m_make
       << "|" << left << setw(15) << cp.m_model
       << "|" << left << setw(8) << setprecision(2) << cp.m_price
       << "|";
    return os;
}
