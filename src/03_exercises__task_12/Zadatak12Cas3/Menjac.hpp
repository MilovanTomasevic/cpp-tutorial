//
//  Menjac.hpp
//  Zadatak12Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

#include <iostream>
using namespace std;

enum Tip_menjaca {AUTOMATIK = 1, MANUELNI};

class Menjac{
private:
    int brzina;
    Tip_menjaca tip;
public:
    Menjac();
    Menjac(int, Tip_menjaca);
    Menjac(const Menjac &);
    
    bool setBrzina(int);
    void setTip(Tip_menjaca);
    
    int getBrzina() const;
    string getTip() const;
};

#endif // MENJAC_HPP_INCLUDED
