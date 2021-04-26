//
//  JSTrougao.hpp
//  Zadatak18Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef JSTROUGAO_HPP_INCLUDED
#define JSTROUGAO_HPP_INCLUDED

#include "JKTrougao.hpp"

class JSTrougao : public JKTrougao {
public:
    JSTrougao() : JKTrougao(1,1) {}
    JSTrougao(double aa) : JKTrougao(aa, aa) {}
    JSTrougao(const JSTrougao &jst) : JKTrougao(jst.a, jst.b) {}
};

#endif // JSTROUGAO_HPP_INCLUDED
