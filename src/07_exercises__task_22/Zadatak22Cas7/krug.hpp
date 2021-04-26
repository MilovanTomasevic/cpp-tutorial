//
//  krug.hpp
//  Zadatak22Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef KRUG_DEF
#define KRUG_DEF

#include "elipsa.hpp"

class Krug : public Elipsa {
    
public:
    Krug() : Elipsa(2,2) {}
    Krug(double xx) : Elipsa(xx,xx) {}
    
//  kastovanje - sve sto je krug moze biti elipsa k⊂e
    Krug(const Krug& k) : Elipsa((Elipsa)k) {}
    
};

#endif
