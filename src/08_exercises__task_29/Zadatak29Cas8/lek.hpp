//
//  lek.hpp
//  Zadatak29Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED

#include "artikal.hpp"
#include "dinstring.hpp"

class Lek : public Artikal {
private:
    long jkl;
    DinString naziv;
    double jedinicnaCena;
    int kolicina;
    
public:
    Lek() : jkl(1), naziv("Brufen"), jedinicnaCena(100), kolicina(10) {}
    
    Lek(long pJkl, char pNaziv[], double pJedinicnaCena, int pKolicina) : jkl(pJkl), naziv(pNaziv), jedinicnaCena(pJedinicnaCena), kolicina(pKolicina) {}
    
    Lek(long pJkl, const DinString& pNaziv, double pJedinicnaCena, int pKolicina) : jkl(pJkl), naziv(pNaziv), jedinicnaCena(pJedinicnaCena), kolicina(pKolicina) {}
    
    Lek(const Lek& l) : jkl(l.jkl), naziv(l.naziv), jedinicnaCena(l.jedinicnaCena), kolicina(l.kolicina) {}
    
    long getJkl() const {
        return jkl;
    }
    
    DinString getNaziv() const {
        return naziv;
    }
    
    double getJedinicnaCena() const {
        return jedinicnaCena;
    }
    
    int getKolicina() const {
        return kolicina;
    }
    
    void setJkl(long pJkl) {
        jkl = pJkl;
    }
    
    void setNaziv(const DinString& pNaziv) {
        naziv = pNaziv;
    }
    
    void setJedinicnaCena(double pJedinicnaCena) {
        jedinicnaCena = pJedinicnaCena;
    }
    
    void setKolicina(int pKolicina) {
        kolicina = pKolicina;
    }
    
    double izracunajCenu() const {
        return jedinicnaCena * kolicina;
    }
    
    void ispis() const {
        cout << "jkl: " << getJkl() << " ; naziv: " << getNaziv() << " ; jedinicna cena: " << getJedinicnaCena() << " ; kolicina: " << getKolicina() << " ; " << endl;
    }
};

#endif // LEK_HPP_INCLUDED
