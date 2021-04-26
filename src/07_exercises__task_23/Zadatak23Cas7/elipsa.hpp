//
//  elipsa.hpp
//  Zadatak23Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef ELIPSA_DEF
#define ELIPSA_DEF

#include "figura.hpp"

class Elipsa : public Figura {
private:
    double x, y;
    
public:
    Elipsa(double xx = 5, double yy = 3) {
        x = xx;
        y = yy;
    }
    
    Elipsa(const Elipsa& re) {
        x = re.x;
        y = re.y;
    }
    
    double getX() const {
        return x;
    }
    
    double getY() const {
        return y;
    }
    
    double getO() const {
        return M_PI * (3 * (x + y) - sqrt((3 * x + y) * (x + 3 * y)));
    }
    
    double getP() const {
        return x * y * M_PI;
    }
};

#endif
