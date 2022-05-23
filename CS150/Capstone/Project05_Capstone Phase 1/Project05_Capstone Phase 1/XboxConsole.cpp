/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * PROJECT: 05
 * LAST MODIFIED: 11/30/18
 *****************************************************/
/*****************************************************************************
 * CapstonePhase1
 *****************************************************************************/

#include "XboxConsole.h"
#include <string>

int XboxConsole::s_nextID = 10000;

XboxConsole::XboxConsole()
{
    m_id = s_nextID;
    m_generation = "One";
    m_submodel = "X";
    m_chipset = "Evolved Jaguar";
    m_ramSize = 12;
    m_storageRating = 500;
    m_quantity = 1;
    m_price = 400;
}

XboxConsole::XboxConsole(string generation, string submodel, string chipset, int ramSize, int storageRating, int quantity, double price)
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

bool XboxConsole::operator==(const XboxConsole& other)
{
    return m_generation == other.m_generation && m_submodel == other.m_submodel && m_chipset == other.m_chipset && m_ramSize == other.m_ramSize && m_storageRating == other.m_storageRating && m_quantity == other.m_quantity && m_price == other.m_price;
}

ostream& operator<<(ostream& os, const XboxConsole& x)
{
    os << "Xbox [ID#" << x.m_id << ", Generation=" << x.m_generation << ", Submodel=" << x.m_submodel << ", Chipset=" << x.m_chipset
    << ", RAM Size=" << x.m_ramSize << " GB, Storage Rating=" << x.m_storageRating << " GB, Quantity=" << x.m_quantity
    << ", Price=$" << x.m_price << "]";
    return os;
}
