//
//  Rerna.hpp
//  Zadatak7Cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef OVEN_H_INCLUDED
#define OVEN_H_INCLUDED

#include <iostream>
using namespace std;

// deklarisanje konstanti za potrebe donje, gornje granice i koraka temperature rerne
#define TEMPERATURA_MINIMUM 0
#define TEMPERATURA_MAKSIMUM 220
#define TEMPERATURA_KORAK 20

enum StanjeRerne {ISKLJUCENA, UKLJUCENA, POKVARENA};

class Rerna{
private:
    StanjeRerne trenutnoStanje;
    int temperatura;
public:
    // PROTOTIPOVI
    
    Rerna();
    
    bool ukljuci();
    bool iskljuci();
    bool pokvari();
    bool popravi();
    
    bool pojacajTemperaturu();
    bool smanjiTemperaturu();
    
    // metoda je READ-ONLY, tj. ne menja stanje objekta 
    string getTrenutnoStanje() const;
    
    // metoda je READ-ONLY, tj. ne menja stanje objekta
    int getTemperatura() const;
};

#endif // OVEN_H_INCLUDED  

