//
//  Televizor.hpp
//  Zadatak10Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef TV_HPP_INCLUDED
#define TV_HPP_INCLUDED

#include <iostream>
using namespace std;

// definisanje konstantani koje predstavljaju granice opsega zvuka i koraka
#define ZVUK_MINIMUM 0
#define ZVUK_MAKSIMUM 20
#define ZVUK_KORAK 1
#define ZVUK_POKVAREN -1

// definisanje konstantani koje predstavljaju granice opsega kanala i koraka
#define KANAL_MINIMUM 1
#define KANAL_MAKSIMUM 5
#define KANAL_KORAK 1
#define KANAL_POKVAREN -1

enum Stanje_televizora {UKLJUCEN, ISKLJUCEN, POKVAREN};

class Televizor{
private:
    Stanje_televizora stanje;
    int zvuk;
    int kanal;
public:
    Televizor();
    Televizor(const Televizor &);
    
    int getZvuk() const;
    int getKanal() const;
    string getStanje() const;
    
    bool ukljuci();
    bool iskljuci();
    bool pokvari();
    bool popravi();
    
    bool pojacajZvuk();
    bool smanjiZvuk();
    
    bool sledeciKanal();
    bool prethodniKanal();
};

#endif // TV_HPP_INCLUDED
