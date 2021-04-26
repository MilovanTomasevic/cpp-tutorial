//
//  osoba.hpp
//  Zadatak27Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef OSOBA_DEF
#define OSOBA_DEF

#include "dinstring.hpp"

class Osoba {
protected:
    DinString ime, prezime;
    
public:
    Osoba() : ime("niko"), prezime("niko") {}
    
    Osoba(const Osoba &ro) : ime(ro.ime), prezime(ro.prezime) {}
    
    DinString getIme() const {
        return ime;
    }
    
    void setIme(const DinString& i) {
        ime = i;
    }
    
    DinString getPrezime() const {
        return prezime;
    }
    
    void setPrezime(const DinString& p) {
        prezime = p;
    }
    
    virtual void predstaviSe() const {
        cout << "Zovem se " << ime << " " << prezime << "." << endl;
    }
};

#endif
