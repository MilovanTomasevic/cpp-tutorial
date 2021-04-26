//
//  computer.hpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef COMPUTER_HPP_INCLUDED
#define COMPUTER_HPP_INCLUDED

#include <iostream>
using namespace std;

#include "dinstring.hpp"

class Computer{
private:
    double hddGB;
    double ramGB;
    DinString gCard;
    DinString os;
    
public:
    Computer();
    Computer(double, double, char*, char*);
    Computer(const Computer&);
    void print() const;
};

#endif // COMPUTER_HPP_INCLUDED
