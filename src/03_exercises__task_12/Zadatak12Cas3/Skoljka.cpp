//
//  Skoljka.cpp
//  Zadatak12Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "Skoljka.hpp"

Skoljka::Skoljka(){
    boja = PLAVA;
}

Skoljka::Skoljka(Boja_skoljke b){
    boja = b;
}

Skoljka::Skoljka(const Skoljka &s){
    boja = s.boja;
}

void Skoljka::setBoja(Boja_skoljke b){
    boja = b;
}

string Skoljka::getBoja() const{
    string temp;
    
    switch(boja){
        case PLAVA:
            temp = "plava";
            break;
        case ZELENA:
            temp = "zelena";
            break;
        case CRVENA:
            temp = "crvena";
            break;
        default:
            temp = "nedefinisana";
            break;
    }
    
    return temp;
}
