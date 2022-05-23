//
//  XboxExclusive.cpp
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/29/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#include "XboxExclusive.h"
#include <string>

int XboxExclusive::s_nextID = 10000;

XboxExclusive::XboxExclusive()
{
    m_id = s_nextID;
    m_generation = "360";
    m_title = "Halo 3";
    m_edition = "Standard";
    m_genre = "Sci-Fi";
    m_esrbRating = 'M';
    m_quantity = 1;
    m_price = 60;
}

XboxExclusive::XboxExclusive(string generation, string title, string edition, string genre, char esrbRating, int quantity, double price)
{
    m_id = s_nextID++;
    m_generation = generation;
    m_title = title;
    m_edition = edition;
    m_genre = genre;
    m_esrbRating = esrbRating;
    m_quantity = quantity;
    m_price = price;
}

bool XboxExclusive::operator==(const XboxExclusive& other)
{
    return m_generation == other.m_generation && m_title == other.m_title && m_edition == other.m_edition && m_genre == other.m_genre && m_esrbRating == other.m_esrbRating && m_quantity == other.m_quantity && m_price == other.m_price;
}

ostream& operator<<(ostream& os, const XboxExclusive& xe)
{
    os << "Xbox Exclusive[ID#" << xe.m_id << ", Generation=" << xe.m_generation << ", Title=" << xe.m_title << ", Edition=" << xe.m_edition
    << ", Genre=" << xe.m_genre << " , ESRB Rating=" << xe.m_esrbRating << " , Quantity=" << xe.m_quantity
    << ", Price=$" << xe.m_price << "]";
    return os;
}
