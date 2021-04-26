//
//  Auto.hpp
//  Zadatak12Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef AUTO_HPP_INCLUDED
#define AUTO_HPP_INCLUDED

#include "Menjac.hpp"
#include "Skoljka.hpp"

class Auto{
private:
    Menjac M; // objekat-clan tipa klase Menjac
    Skoljka S;// objekat-clan tipa klase Skoljka
public:
    Auto();
    Auto(int, Tip_menjaca, Boja_skoljke);
    
    bool setBrzina(int);
    void setTipMenjaca(Tip_menjaca);
    void setBoja(Boja_skoljke);
    
    int getBrzina() const;
    string getTipMenjaca() const;
    string getBoja() const;
};

#endif // AUTO_HPP_INCLUDED
