//
//  Machine.hpp
//  Zadatak8cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef MASINA_H_INCLUDED
#define MASINA_H_INCLUDED

#include <iostream>
using namespace std;

#define MAX_VALUE 80
#define MIN_VALUE 0
#define STEP_VALUE 20

enum MachineState {sA, sB, sC, sD};

class Machine {
private:
    MachineState currentState;
    int value;
public:
    Machine();
    
    bool metodaX();
    bool metodaY();
    bool metodaZ();
    bool metodaW();
    
    bool plus();
    bool minus();
    
    string getCurrentState() const;
    int getValue() const;
};

#endif // MASINA_H_INCLUDED
