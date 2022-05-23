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

#include "PlaystationConsole.h"
#include <string>

PlaystationConsole::PlaystationConsole()
{
    m_id = 0;
    m_generation = "4";
    m_submodel = "Pro";
    m_chipset = "Not Real 4K";
    m_ramSize = 8;
    m_storageRating = 500;
    m_quantity = 1;
    m_price = 399;
    m_vrSupport = true;
}

PlaystationConsole::PlaystationConsole(string generation, string submodel, string chipset, int ramSize, int storageRating, int quantity, double price, bool vrSupport)
{
    m_id = s_nextID++;
    m_generation = generation;
    m_submodel = submodel;
    m_chipset = chipset;
    m_ramSize = ramSize;
    m_storageRating = storageRating;
    m_quantity = quantity;
    m_price = price;
    m_vrSupport = vrSupport;
}

bool PlaystationConsole::operator==(const PlaystationConsole& other)
{
    return m_generation == other.m_generation && m_submodel == other.m_submodel && m_chipset == other.m_chipset && m_ramSize == other.m_ramSize && m_storageRating == other.m_storageRating && m_quantity == other.m_quantity && m_price == other.m_price && m_vrSupport == other.m_vrSupport;
}

ostream& operator<<(ostream& os, const PlaystationConsole& p)
{
    if(p.m_vrSupport == true)
    {
        os << "Playstation [ID#" << p.m_id << ", Generation=" << p.m_generation << ", Submodel=" << p.m_submodel << ", Chipset=" << p.m_chipset
        << ", RAM Size=" << p.m_ramSize << " GB, Storage Rating=" << p.m_storageRating << " GB, Quantity=" << p.m_quantity
        << ", Price=$" << p.m_price << ", VR Supported? true]";
    }
    else
    {
        
        os << "Playstation [ID#" << p.m_id << ", Generation=" << p.m_generation << ", Submodel=" << p.m_submodel << ", Chipset=" << p.m_chipset
        << ", RAM Size=" << p.m_ramSize << " GB, Storage Rating=" << p.m_storageRating << " GB, Quantity=" << p.m_quantity
        << ", Price=$" << p.m_price << ", VR Supported? false]";
    }
    return os;
}
