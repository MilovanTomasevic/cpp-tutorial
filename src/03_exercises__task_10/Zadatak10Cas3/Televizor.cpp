//
//  Televizor.cpp
//  Zadatak10Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "Televizor.hpp"

Televizor::Televizor(){
    stanje = ISKLJUCEN;
    zvuk = ZVUK_MINIMUM;
    kanal = KANAL_MINIMUM;
}

Televizor::Televizor(const Televizor &t){
    stanje = t.stanje;
    zvuk = t.zvuk;
    kanal = t.kanal;
}

int Televizor::getZvuk() const{
    return zvuk;
}

int Televizor::getKanal() const{
    return kanal;
}

string Televizor::getStanje() const{
    switch(stanje){
        case UKLJUCEN:
            return "ukljucen";
        case ISKLJUCEN:
            return "iskljucen";
        case POKVAREN:
            return "pokvaren";
        default:
            return "nedefinisano";
    }
}

// metoda koja ukljucuje televizor
// televizor se moze ukljuciti samo ako se nalazi u stanju iskljucen
bool Televizor::ukljuci(){
    if(stanje == ISKLJUCEN){
        stanje = UKLJUCEN;
        return true;
    }
    
    return false;
}

// metoda koja iskljucuje televizor
// televizor se moze iskljuciti samo ako se nalazi u stanju ukljucen
bool Televizor::iskljuci(){
    if(stanje == UKLJUCEN){
        stanje = ISKLJUCEN;
        zvuk = ZVUK_MINIMUM;
        kanal = KANAL_MINIMUM;
        return true;
    }
    
    return false;
}

// metoda koja dovodi televizor u neispravno stanje
// televizor se moze pokvariti ako se nalazi u stanju ukljucen ili iskljucen
bool Televizor::pokvari(){
    if(stanje != POKVAREN){
        stanje = POKVAREN;
        zvuk = ZVUK_POKVAREN;
        kanal = KANAL_POKVAREN;
        return true;
    }
    
    return false;
}

// metoda koja popravlja televizor
// televizor se moze popraviti samo ako je pokvaren
bool Televizor::popravi(){
    if(stanje == POKVAREN){
        stanje = ISKLJUCEN;
        zvuk = ZVUK_MINIMUM;
        kanal = KANAL_MINIMUM;
        return true;
    }
    
    return false;
}

// zvuk se moze pojacati samo ako se televizor nalazi u stanju ukljucen
// prilikom pojacavanja zvuka treba voditi racuna da se ne probije gornja granica zvuka
bool Televizor::pojacajZvuk(){
    if(stanje == UKLJUCEN && zvuk + ZVUK_KORAK <= ZVUK_MAKSIMUM){
        zvuk += ZVUK_KORAK;
        return true;
    }
    
    return false;
}

// zvuk se moze smanjiti samo ako se televizor nalazi u stanju ukljucen
// prilikom smanjivanja zvuka treba voditi racuna da se ne probije donja granica zvuka
bool Televizor::smanjiZvuk(){
    if(stanje == UKLJUCEN && zvuk - ZVUK_KORAK >= ZVUK_MINIMUM){
        zvuk -= ZVUK_KORAK;
        return true;
    }
    
    return false;
}

// kanal se moze promeniti samo ako se televizor nalazi u stanju ukljucen
// prilikom prelaska na sledeci kanal treba voditi racuna da se ne probije gornja granica
bool Televizor::sledeciKanal(){
    if(stanje == UKLJUCEN && kanal + KANAL_KORAK <= KANAL_MAKSIMUM){
        kanal += KANAL_KORAK;
        return true;
    }
    
    return false;
}

// kanal se moze promeniti samo ako se televizor nalazi u stanju ukljucen
// prilikom prelaska na prethodni kanal treba voditi racuna da se ne probije donja granica
bool Televizor::prethodniKanal(){
    if(stanje == UKLJUCEN && kanal - KANAL_KORAK >= KANAL_MINIMUM){
        kanal -= KANAL_KORAK;
        return true;
    }
    return false;
}
