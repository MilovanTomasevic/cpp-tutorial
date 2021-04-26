//
//  Menjac.cpp
//  Zadatak12Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "Menjac.hpp"

Menjac::Menjac(){
    brzina = 1;
    tip = AUTOMATIK;
}

Menjac::Menjac(int br, Tip_menjaca t){
    brzina = br;
    tip = t;
}

Menjac::Menjac(const Menjac &m){
    brzina = m.brzina;
    tip = m.tip;
}

// podesvanje broja brzina menjaca
bool Menjac::setBrzina(int b){
    bool uspesno;
    
    if(b > 0 && b < 7){
        brzina = b;
        uspesno = true;
    }else{
        uspesno = false;
    }
    
    return uspesno;
}

// podesvanje tipa menjaca
// 1 automatik, 2 manuelni
void Menjac::setTip(Tip_menjaca t){
    tip = t;
}

int Menjac::getBrzina() const{
    return brzina;
}

string Menjac::getTip() const{
    string temp;
    
    switch(tip){
        case AUTOMATIK:
            temp = "automatik";
            break;
        case MANUELNI:
            temp = "manuelni";
            break;
        default:
            temp = "nedefinisan";
            break;
    }
    
    return temp;
}
