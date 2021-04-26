//
//  pravougaonik.hpp
//  Zadatak22Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef PRAVOUGAONIK_DEF
#define PRAVOUGAONIK_DEF

#include "figura.hpp"

class Pravougaonik : public Figura {
    
private:
    double a,b;
    
public:
    Pravougaonik(){
        a=2;
        b=4;
    }
    Pravougaonik(double aa, double bb) {
        a=aa;
        b=bb;
    }
    Pravougaonik(const Pravougaonik& p){
        a=p.a;
        b=p.b;
    }
    
    double getA() const {
        return a;
    }
    double getB() const {
        return b;
    }
    
    double getO() const {
        return 2*a+2*b;
    }
    double getP() const {
        return a*b;
    }
    
};

#endif
