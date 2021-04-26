//
//  Krug.hpp
//  Zadatak11Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include <cmath>

class Krug {
private:
    double r;
public:
    // konstruktor sa parametrima sa podrazumevanim vrednostima
    // ako se koristi ovaj konstruktor ne sme se pisati prazan konstruktor zato sto ce kompajler prijaviti gresku
    Krug(double rr = 1){
        r = rr;
    }
    
    double getR() const{
        return r;
    }
    
    double getO() const{
        return 2 * r * M_PI;
    }
    
    double getP() const{
        return r * r * M_PI;
    }
};

#endif // KRUG_HPP_INCLUDED
