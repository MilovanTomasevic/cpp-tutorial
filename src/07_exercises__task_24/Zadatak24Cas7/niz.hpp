//
//  niz.hpp
//  Zadatak24Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef NIZ_HPP_INCLUDED
#define NIZ_HPP_INCLUDED

#include <iostream>
using namespace std;

template <class T, int D>   // T moze biti INT, DOUBLE... D nam je MAX duzina niza
class Niz {
private:
    T el[D];
    int brEl;
public:
    Niz() { brEl=0; }
    ~Niz() {}
    int getBrEl() const { return brEl; }
    
    //get
    T operator[](int i) const { return el[i]; }
    
    //set
    T& operator[](int i) { return el[i]; }
    
    //operator dodele
    Niz<T,D>& operator=(const Niz<T,D>&);
    
    
    void printNiz() const;
    bool insertNiz(const T&);
};

template <class T, int D>
Niz<T,D>& Niz<T,D>::operator=(const Niz<T,D>& rn) {
    for(brEl = 0; brEl < rn.brEl; brEl++)
        el[brEl] = rn[brEl];
    return *this;
}

template <class T, int D>
void Niz<T,D>::printNiz() const {
    cout << "( ";
    for(int i = 0; i < brEl - 1; i++)
        cout << el[i] << ", ";
    cout << el[brEl - 1] << " )" << endl;
}

template <class T, int D>
bool Niz<T,D>::insertNiz(const T& t) {
    if(brEl < D) {                               //proveravamo  trenutno stanje u nizu - da li je broj elemenata manji od MAX
        el[brEl] = t;                            // el - je niz, el[brEl] je index prvog praznog mesta u nizu jer ideksiranje krece od 0, el[0] = 1, el[1] = 2...
        brEl++;
        return true;
    }
    else
        return false;
}

template <class T, int D>
bool operator==(const Niz<T,D>& rn1, const Niz<T,D>& rn2) {
    if(rn1.getBrEl() != rn2.getBrEl())                       //uporedjujemo duzinu
        return false;
    for(int i = 0; i < rn1.getBrEl(); i++)                  //prolazimo kroz niz
        if(rn1[i] != rn2[i])                               //uporedjuje vrednosti nizova na istim pozicijama [i]
            return false;
    return true;
}

template <class T, int D>
bool operator!=(const Niz<T,D>& rn1, const Niz<T,D>& rn2) {
    if(rn1.getBrEl() != rn2.getBrEl())
        return true;
    for(int i = 0; i < rn1.getBrEl(); i++)
        if(rn1[i] != rn2[i])
            return true;
    return false;
}

#endif // NIZ_HPP_INCLUDED
