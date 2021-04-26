//
//  telefonGen2.hpp
//  Zadatak21Cas6
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef TELEFONGEN2_H_INCLUDED
#define TELEFONGEN2_H_INCLUDED

#include "telefon.hpp"
#include "kamera.hpp"

class TelefonGen2 : public Telefon {
    
protected:
    Kamera k;
    
public:
    TelefonGen2() : Telefon(), k() {} // moze i samo TelefonGen2() {}
    
    TelefonGen2(int mp, int fsp, string broj) : Telefon(broj), k(mp, fsp) {}
    
    int getPhotoCounter() const {
        return k.getPhotoCounter();
    }
    
    bool slikajSliku(){
        return k.slikaj();
    }
    
};

#endif // TELEFONGEN2_H_INCLUDED
