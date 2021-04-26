//
//  Skoljka.hpp
//  Zadatak12Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

#include <iostream>
using namespace std;

enum Boja_skoljke {PLAVA, CRVENA, ZELENA};

class Skoljka{
private:
    Boja_skoljke boja;
public:
    Skoljka();
    Skoljka(Boja_skoljke);
    Skoljka(const Skoljka &);
    
    void setBoja(Boja_skoljke);
    
    string getBoja() const;
};

#endif // SKOLJKA_HPP_INCLUDED
