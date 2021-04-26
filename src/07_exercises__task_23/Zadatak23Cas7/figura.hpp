//
//  figura.hpp
//  Zadatak23Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef FIGURA_DEF
#define FIGURA_DEF

#include <iostream>
#include <math.h>

using namespace std;

class Figura {
public:
    virtual double getO() const = 0;
    virtual double getP() const = 0;
};

#endif
