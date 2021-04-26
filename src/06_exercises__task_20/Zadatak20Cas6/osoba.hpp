//
//  osoba.hpp
//  Zadatak20Cas6
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef OSOBA_DEF
#define OSOBA_DEF

#include "dinstring.hpp"

#include <iostream>

using namespace std;

class Osoba {
private:
    DinString ime, prezime;
    
public:
    Osoba(const char* s1 = "", const char* s2 = "") : ime(s1), prezime(s2) {
        cout << "Osoba: Konstruktor 1." << endl;
    }
    
    Osoba(const DinString& ds1, const DinString& ds2) :	ime(ds1), prezime(ds2) {
        cout << "Osoba: Konstruktor 2." << endl;
    }
    
    Osoba(const Osoba& ro) : ime(ro.ime), prezime(ro.prezime) {
        cout << "Osoba: Konstruktor 3." << endl;
    }
    
    ~Osoba() {
        cout << "Osoba: Destruktor." << endl;
    }
    
    void predstaviSe() const {
        cout << "Zovem se " << ime << " " << prezime << "." << endl;
    }
};

#endif
