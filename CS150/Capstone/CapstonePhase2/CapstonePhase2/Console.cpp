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

#include "Console.h"
#include <string>

using namespace std;

int Console::s_nextID = 10000;

Console::Console()
{
    m_id = 0;
    m_generation = "One";
    m_submodel = "X";
    m_chipset = "Evolved Jaguar";
    m_ramSize = 12;
    m_storageRating = 500;
    m_quantity = 1;
    m_price = 400;
}

Console::Console(string generation, string submodel, string chipset, int ramSize, int storageRating, int quantity, double price)
{
    m_id = s_nextID++;
    m_generation = generation;
    m_submodel = submodel;
    m_chipset = chipset;
    m_ramSize = ramSize;
    m_storageRating = storageRating;
    m_quantity = quantity;
    m_price = price;
}

bool Console::operator==(const Console& other)
{
    return m_generation == other.m_generation && m_submodel == other.m_submodel && m_chipset == other.m_chipset && m_ramSize == other.m_ramSize && m_storageRating == other.m_storageRating && m_quantity == other.m_quantity && m_price == other.m_price;
}

ostream& operator<<(ostream& os, const Console& c)
{
    os << "Xbox [ID#" << c.m_id << ", Generation=" << c.m_generation << ", Submodel=" << c.m_submodel << ", Chipset=" << c.m_chipset
    << ", RAM Size=" << c.m_ramSize << " GB, Storage Rating=" << c.m_storageRating << " GB, Quantity=" << c.m_quantity
    << ", Price=$" << c.m_price << "]";
    return os;
}
