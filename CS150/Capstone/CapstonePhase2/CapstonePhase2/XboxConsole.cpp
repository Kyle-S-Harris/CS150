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

#include "XboxConsole.h"
#include <string>

XboxConsole::XboxConsole()
{
    m_id = 0;
    m_generation = "One";
    m_submodel = "X";
    m_chipset = "Evolved Jaguar";
    m_ramSize = 12;
    m_storageRating = 500;
    m_quantity = 1;
    m_price = 400;
    m_hasKinect = false;
}

XboxConsole::XboxConsole(string generation, string submodel, string chipset, int ramSize, int storageRating, int quantity, double price, bool hasKinect)
{
    m_id = s_nextID++;
    m_generation = generation;
    m_submodel = submodel;
    m_chipset = chipset;
    m_ramSize = ramSize;
    m_storageRating = storageRating;
    m_quantity = quantity;
    m_price = price;
    m_hasKinect = hasKinect;
}

bool XboxConsole::operator==(const XboxConsole& other)
{
    return m_generation == other.m_generation && m_submodel == other.m_submodel && m_chipset == other.m_chipset && m_ramSize == other.m_ramSize && m_storageRating == other.m_storageRating && m_quantity == other.m_quantity && m_price == other.m_price && m_hasKinect == other.m_hasKinect;
}

ostream& operator<<(ostream& os, const XboxConsole& x)
{
    if(x.m_hasKinect == true)
    {
        os << "Xbox [ID#" << x.m_id << ", Generation=" << x.m_generation << ", Submodel=" << x.m_submodel << ", Chipset=" << x.m_chipset
        << ", RAM Size=" << x.m_ramSize << " GB, Storage Rating=" << x.m_storageRating << " GB, Quantity=" << x.m_quantity
        << ", Price=$" << x.m_price << ", Kinect Included? true]";
    }
    else
    {
        
        os << "Xbox [ID#" << x.m_id << ", Generation=" << x.m_generation << ", Submodel=" << x.m_submodel << ", Chipset=" << x.m_chipset
        << ", RAM Size=" << x.m_ramSize << " GB, Storage Rating=" << x.m_storageRating << " GB, Quantity=" << x.m_quantity
        << ", Price=$" << x.m_price << ", Kinect Included? false]";
    }
    
    return os;
}
