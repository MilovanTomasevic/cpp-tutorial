//
//  Valjak.hpp
//  Zadatak11Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include <iostream>
#include <iomanip> //zbog setprecision funkcije koriscene u main-u

using namespace std;

#include "Krug.hpp"
#include "Pravougaonik.hpp"

class Valjak {
private:
    Krug B; // objekat-clan tipa klase Krug
    Pravougaonik M; // objekat-clan tipa klase Pravougaonik
public:
    Valjak(double rr = 2, double hh = 4) : B(rr), M(2 * rr * M_PI, hh) {}
    
    double getR() const{
        return B.getR();
    }
    
    double getH() const{
        return M.getB();
    }
    
    double getP() const{
        return 2 * B.getP() + M.getP();
    }
    
    double getV() const{
        return B.getP() * getH();
    }
};

#endif // VALJAK_HPP_INCLUDED
