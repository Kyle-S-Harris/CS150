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

#ifndef XBOXCONSOLE_H
#define XBOXCONSOLE_H

#include <iostream>

using namespace std;

class XboxConsole
{
private:
    static int s_nextID;
    int m_id;
    string m_generation;
    string m_submodel;
    string m_chipset;
    int m_ramSize;
    int m_storageRating;
    int m_quantity;
    double m_price;
    
    
public:
    XboxConsole();
    XboxConsole(string, string, string, int, int, int, double);
    inline int getId() const { return m_id; }
    inline string getGeneration() const { return m_generation; }
    inline string getSubmodel() const { return m_submodel; }
    inline string getChipset() const { return m_chipset; }
    inline int getRamSize() const { return m_ramSize; }
    inline int getStorageRating() const { return m_storageRating; }
    inline int getQuantity () const { return m_quantity; }
    inline double getPrice() const { return m_price; }
    
    inline void setGeneration(string generation) { m_generation = generation; }
    inline void setSubmodel(string submodel) { m_submodel = submodel; }
    inline void setChipset(string chipset) { m_chipset = chipset; }
    inline void setRamSize(int ramSize) { m_ramSize = ramSize; }
    inline void setStorageRating(int storageRating) { m_storageRating = storageRating; }
    inline void setQuantity(int quantity) { m_quantity = quantity; }
    inline void setPrice(double price) { m_price = price; }
    
    bool operator==(const XboxConsole& other);
    ostream operator<<(const XboxConsole& other);
    
    friend ostream& operator<<(ostream& os, const XboxConsole& x);
    
    
};

#endif /* XboxConsole_h */
