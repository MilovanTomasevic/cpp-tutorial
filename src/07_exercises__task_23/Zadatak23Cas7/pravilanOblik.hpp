//
//  pravilanOblik.hpp
//  Zadatak23Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef PRAVILANOBLIK_DEF
#define PRAVILANOBLIK_DEF

#include "oblik.hpp"

class PravilanOblik : public Oblik {
public:
    PravilanOblik(double aa = 4) : Oblik(aa, aa) {}
    
//  pravilanOblik⊂Oblik
    PravilanOblik(const PravilanOblik& po) : Oblik((Oblik)po) {}
};

#endif
