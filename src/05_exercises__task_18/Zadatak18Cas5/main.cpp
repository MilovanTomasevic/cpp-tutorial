//
//  main.cpp
//  Zadatak18Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
    Nasledjivanje
 
 */

#include "jstrougao.hpp"

#include <iostream>
using namespace std;

int main(){
    Trougao t1(1,4,4);
    JKTrougao jk1(2,3);
    JSTrougao js1(5);
    
    cout<<t1.getP()<<endl;
    cout<<jk1.getP()<<endl;
    cout<<js1.getP()<<endl;
    
    return 0;
}
