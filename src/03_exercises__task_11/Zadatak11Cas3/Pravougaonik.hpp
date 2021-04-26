//
//  Pravougaonik.hpp
//  Zadatak11Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

class Pravougaonik {
private:
    double a;
    double b;
public:
    // konstruktor sa parametrima sa podrazumevanim vrednostima
    // ako se koristi ovaj konstruktor ne sme se pisati prazan konstruktor zato sto ce kompajler prijaviti gresku
    Pravougaonik(double aa = 1, double bb = 2){
        a = aa;
        b = bb;
    }
    
    double getA() const{
        return a;
    }
    
    double getB() const{
        return b;
    }
    
    double getO() const{
        return 2 * a + 2 * b;
    }
    
    double getP() const{
        return a * b;
    }
};

#endif // PRAVOUGAONIK_HPP_INCLUDED
