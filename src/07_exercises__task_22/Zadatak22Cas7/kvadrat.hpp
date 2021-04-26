//
//  kvadrat.hpp
//  Zadatak22Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef KVADRAT_DEF
#define KVADRAT_DEF

#include "pravougaonik.hpp"

class Kvadrat : public Pravougaonik {
    
public:
    Kvadrat() : Pravougaonik(3,3) {}
    Kvadrat(double aa) : Pravougaonik(aa,aa) {}
    
//  kastovanje- sve sto je krug moze biti elipsa k⊂p
    Kvadrat(const Kvadrat& k) : Pravougaonik((Pravougaonik)k) {}
    
};

#endif
