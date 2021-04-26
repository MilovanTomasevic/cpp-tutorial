//
//  dijamant.hpp
//  Zadatak25Cas7
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef DIJAMANT_HPP_INCLUDED
#define DIJAMANT_HPP_INCLUDED

class Dijamant {
    
private:
    double vrednost;
    double karat;
    
public:
    Dijamant() : vrednost(10000), karat(1) {}
    
    Dijamant(double v, double k) : vrednost(v), karat(k) {}
    
    Dijamant(const Dijamant& d) : vrednost(d.vrednost) , karat(d.karat) {}
    
    double getVrednost() const {
        return vrednost;
    }
    
    double getKarat() const {
        return karat;
    }
    
};

#endif // DIJAMANT_HPP_INCLUDED
