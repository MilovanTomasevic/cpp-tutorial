//
//  Machine.cpp
//  Zadatak8cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "Machine.hpp"

// prazan konstruktor
Machine::Machine(){
    currentState = sC;
    value = MAX_VALUE;
}

bool Machine::metodaX(){
    bool success;
    
    if(currentState == sB || currentState == sC){
        currentState = sA;
        success = true;
    } else {
        success = false;
    }
    
    return success;
}

bool Machine::metodaY(){
    bool success;
    
    if(currentState == sB || currentState == sD){
        currentState = sC;
        value = MAX_VALUE;
        success = true;
    } else {
        success = false;
    }
    
    return success;
}

bool Machine::metodaZ(){
    bool success;
    
    if(currentState == sA){
        currentState = sB;
        value = MIN_VALUE;
        success = true;
    } else {
        success = false;
    }
    
    return success;
}

bool Machine::metodaW(){
    bool success;
    
    if(currentState == sA){
        currentState = sD;
        value = MIN_VALUE;
        success = true;
    } else {
        success = false;
    }
    
    return success;
}

bool Machine::plus(){
    bool success;
    
    if(currentState == sA && value + STEP_VALUE <= MAX_VALUE){
        value += STEP_VALUE;
        success = true;
    } else {
        success = false;
    }
    
    return success;
}

bool Machine::minus(){
    bool success;
    
    if(currentState == sA && value - STEP_VALUE >= MIN_VALUE){
        value -= STEP_VALUE;
        success = true;
    } else {
        success = false;
    }
    
    return success;
}

string Machine::getCurrentState() const{
    string temp;
    
    switch(currentState){
        case sA:
            temp = "sA";
            break;
        case sB:
            temp = "sB";
            break;
        case sC:
            temp = "sC";
            break;
        case sD:
            temp = "sD";
            break;
        default:
            temp = "nedefinisano";
            break;
    }
    
    return temp;
}

int Machine::getValue() const{
    return value;
}
