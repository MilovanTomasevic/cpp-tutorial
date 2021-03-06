//
//  JKTrougao.hpp
//  Zadatak18Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef JKTROUGAO_HPP_INCLUDED
#define JKTROUGAO_HPP_INCLUDED

#include "Trougao.hpp"

class JKTrougao : public Trougao {
public:
    JKTrougao() : Trougao(1,2,2) {}
    JKTrougao(double aa, double bb) : Trougao(aa, bb, bb) {}
    JKTrougao(const JKTrougao &jkt) : Trougao(jkt.a, jkt.b, jkt.c) {}
};

#endif // JKTROUGAO_HPP_INCLUDED
