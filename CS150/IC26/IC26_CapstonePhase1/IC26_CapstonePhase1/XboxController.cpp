//
//  XboxController.cpp
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/27/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#include "XboxController.h"
#include <string>

int XboxController::s_nextID = 10000;

XboxController::XboxController()
{
    m_id = s_nextID;
    m_generation = "One";
    m_layout = "Elite";
    m_design = "Standard";
    m_color = "Red";
    m_quantity = 1;
    m_price = 60;
}

XboxController::XboxController(string generation, string layout, string design, string color, int quantity, double price)
{
    m_id = s_nextID++;
    m_generation = generation;
    m_layout = layout;
    m_design = design;
    m_color = color;
    m_quantity = quantity;
    m_price = price;
}

bool XboxController::operator==(const XboxController& other)
{
    return m_generation == other.m_generation && m_layout == other.m_layout && m_design == other.m_design && m_color == other.m_color && m_quantity == other.m_quantity && m_price == other.m_price;
}

ostream& operator<<(ostream& os, const XboxController& xc)
{
    os << "Xbox Controller[ID#" << xc.m_id << ", Generation=" << xc.m_generation << ", Layout=" << xc.m_layout << ", Design=" << xc.m_design
    << ", Color=" << xc.m_color << ", Quantity=" << xc.m_quantity
    << ", Price=$" << xc.m_price << "]";
    return os;
}

