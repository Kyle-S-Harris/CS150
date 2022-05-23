//
//  XboxController.h
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/27/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#ifndef XBOXCONTROLLER_H
#define XBOXCONTROLLER_H

#include <iostream>

using namespace std;

class XboxController
{
    private:
    
        static int s_nextID;
        int m_id;
        string m_generation;
        string m_layout;
        string m_design;
        string m_color;
        int m_quantity;
        double m_price;
    
    public:
        XboxController();
        XboxController(string, string, string, string, int, double);
        inline int getId() const { return m_id; }
        inline string getGeneration() const { return m_generation; }
        inline string getLayout() const { return m_layout; }
        inline string getDesign() const { return m_design; }
        inline string getColor() const { return m_color; }
        inline int getQuantity () const { return m_quantity; }
        inline double getPrice() const { return m_price; }
    
        inline void setGeneration(string generation) { m_generation = generation; }
        inline void setLayout(string layout) { m_layout = layout; }
        inline void setDesign(string design) { m_design = design; }
        inline void setColor(string color) { m_color = color; }
        inline void setQuantity(int quantity) { m_quantity = quantity; }
        inline void setPrice(double price) { m_price = price; }
    
        bool operator==(const XboxController& other);
        ostream operator<<(const XboxController& other);
    
        friend ostream& operator<<(ostream& os, const XboxController& xc);
};

#endif /* XboxController_h */
