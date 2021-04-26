//
//  kolokvijum.hpp
//  Zadatak28Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef KOLOKVIJUM_HPP_INCLUDED
#define KOLOKVIJUM_HPP_INCLUDED

#include <cstdlib>
#include "test.hpp"

class Kolokvijum : public Test{
public:
    Kolokvijum() : Test() {}
    
    Kolokvijum(const char* n) : Test(n, rand()%25 + 1) {}
    
    int getPoeni() const {
        return osvojeniPoeni;
    }
    
    bool polozio() const {
        bool ret = false;
        if(osvojeniPoeni > 12)
            ret = true;
        
        return ret;
    }
};



#endif // KOLOKVIJUM_HPP_INCLUDED
