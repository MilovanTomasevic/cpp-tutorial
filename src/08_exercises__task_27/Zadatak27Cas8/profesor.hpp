//
//  profesor.hpp
//  Zadatak27Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef PROFESOR_DEF
#define PROFESOR_DEF

#include "osoba.hpp"

class Profesor : public Osoba {
protected:
    DinString predmet;
    
public:
    Profesor() : Osoba(), predmet("") {}
    
    Profesor(const Profesor& p) : Osoba((Osoba)p), predmet(p.predmet) {}
    
    DinString getNazivPredmeta() const {
        return predmet;
    }
    
    void setNazivPredmeta(const DinString& p) {
        predmet = p;
    }
    
    void predstaviSe() const {
        cout << "Zovem se " << ime << " " << prezime << ", i predajem na predmetu " << predmet << "." << endl;
    }
};

#endif
