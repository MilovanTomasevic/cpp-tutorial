//
//  telefon.hpp
//  Zadatak21Cas6
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef TELEFON_H_INCLUDED
#define TELEFON_H_INCLUDED

#include <iostream>
using namespace std;

class Telefon {
    
protected:
    string broj;
    
public:
    Telefon(){
        broj = "22-333";
    }
    
    Telefon(string s){
        broj = s;
    }
    
    bool pozovi(string s){
        bool ret = false;
        if (s != broj){
            ret = true;
        }
        return ret; 
    }
    
};

#endif // TELEFON_H_INCLUDED
