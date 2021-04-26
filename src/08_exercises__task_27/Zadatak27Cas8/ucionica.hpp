//
//  ucionica.hpp
//  Zadatak27Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef UCIONICA_H_INCLUDED
#define UCIONICA_H_INCLUDED

#include "student.hpp"
#include "profesor.hpp"
#include "list.hpp"

class Ucionica{
private:
    List<Osoba> osobe;
    DinString naziv;
    int kapacitet;
    
public:
    Ucionica(int m) : kapacitet(m){}
    
    DinString getNaziv() const {
        return naziv;
    }
    
    void setNaziv(const DinString& n) {
        naziv = n;
    }
    
    bool dodaj(const Osoba& os){
        if(osobe.size() < kapacitet){
            return osobe.add(osobe.size() + 1, os);
        }
        
        return false;
    }
    
    void ispis() const {
        if(osobe.size() == 0) {
            cout << endl << "Ucionica je prazna." << endl;
        } else {
            Osoba o;
            cout << endl << "U ucionici su:" << endl;
            
            for (int i = 1; i <= osobe.size(); i++){
                osobe.read(i, o);
                o.predstaviSe();
            }
        }
    }
    
};

#endif // UCIONICA_H_INCLUDED
