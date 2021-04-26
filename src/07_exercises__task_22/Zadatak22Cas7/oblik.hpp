//
//  oblik.hpp
//  Zadatak22Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef OBLIK_DEF
#define OBLIK_DEF

#include "kvadrat.hpp"
#include "krug.hpp"

class Oblik {
    
private:
    Kvadrat A;
    Krug B;
    
public:
    Oblik() : A(6), B(3) {}
    Oblik(double aa) : A(aa), B(aa / 2){}         // poluprecnik kruga je polovina stranice kvadrata
    Oblik(const Oblik& o) : A(o.A), B(o.B){}
    
    double getP() const {
        return A.getP() - B.getP();
    }
    
    double getO() const {
        return B.getO() + A.getO();
    }
    
};

#endif

