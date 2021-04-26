//
//  Auto.cpp
//  Zadatak12Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


#include "Auto.hpp"

Auto::Auto() : M(), S() {}

Auto::Auto(int brzina, Tip_menjaca tip, Boja_skoljke boja) : M(brzina, tip), S(boja) {}

bool Auto::setBrzina(int b){
    return M.setBrzina(b);
}

void Auto::setTipMenjaca(Tip_menjaca t){
    M.setTip(t);
}

void Auto::setBoja(Boja_skoljke b){
    S.setBoja(b);
}

int Auto::getBrzina() const{
    return M.getBrzina();
}

string Auto::getTipMenjaca() const{
    return M.getTip();
}

string Auto::getBoja() const{
    return S.getBoja();
}
