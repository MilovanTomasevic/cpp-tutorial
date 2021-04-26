//
//  test.hpp
//  Zadatak28Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef TEST_HPP_INCLUDED
#define TEST_HPP_INCLUDED

#include <iostream>

using namespace std;

#include "dinstring.hpp"

class Test{
protected:
    DinString naziv;
    int osvojeniPoeni;
    
public:
    Test(const char* d = "", int os = 0) : naziv(d), osvojeniPoeni(os) {}
    
    //apstraktna klasa
    virtual int getPoeni() const = 0;
    
    virtual bool polozio() const = 0;
    
    void print() const{
        cout << "Naziv: " << naziv << " ; Osvojeni poeni: " << osvojeniPoeni << endl;
    }
};

#endif // TEST_HPP_INCLUDED
