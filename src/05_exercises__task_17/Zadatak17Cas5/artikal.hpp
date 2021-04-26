//
//  artikal.hpp
//  Zadatak17Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED

#include "dinstring.hpp"
#include <iomanip>

class Artikal{
private:
    DinString naziv;
    double cena;
    static int instanci; // staviti ga u public vidljivost pa probati direktan pristup polju iz main-a
public:
    Artikal(const char[],const double);
    Artikal(const DinString&, const double);
    Artikal(const Artikal&);
    ~Artikal();
    
    DinString getNaziv()const;
    double getCena()const;
    
    friend ostream& operator<<(ostream& ,const Artikal&);
    
//    static int instanci;
    
    
};

#endif // ARTIKAL_HPP_INCLUDED
