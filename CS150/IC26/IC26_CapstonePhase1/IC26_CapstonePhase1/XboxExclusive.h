//
//  XboxExclusive.h
//  IC26_CapstonePhase1
//
//  Created by Kyle Harris on 11/29/18.
//  Copyright © 2018 Kyle Harris. All rights reserved.
//

#ifndef XBOXEXCLUSIVE_H
#define XBOXEXCLUSIVE_H

#include <iostream>

using namespace std;

class XboxExclusive
{
private:
    static int s_nextID;
    int m_id;
    string m_generation;
    string m_title;
    string m_edition;
    string m_genre;
    char m_esrbRating;
    int m_quantity;
    double m_price;
    
    
public:
    XboxExclusive();
    XboxExclusive(string, string, string, string, char, int, double);
    inline int getId() const { return m_id; }
    inline string getGeneration() const { return m_generation; }
    inline string getTitle() const { return m_title; }
    inline string getEdition() const { return m_edition; }
    inline string getGenre() const { return m_genre; }
    inline char getEsrbRating() const { return m_esrbRating; }
    inline int getQuantity () const { return m_quantity; }
    inline double getPrice() const { return m_price; }
    
    inline void setGeneration(string generation) { m_generation = generation; }
    inline void setTitle(string title) { m_title = title; }
    inline void setEdition(string edition) { m_edition = edition; }
    inline void setGenre(string genre) { m_genre = genre; }
    inline void setEsrbRating(char esrbRating) { m_esrbRating = esrbRating; }
    inline void setQuantity(int quantity) { m_quantity = quantity; }
    inline void setPrice(double price) { m_price = price; }
    
    bool operator==(const XboxExclusive& other);
    ostream operator<<(const XboxExclusive& other);
    
    friend ostream& operator<<(ostream& os, const XboxExclusive& xe);
    
};


#endif /* XboxExclusive_h */
