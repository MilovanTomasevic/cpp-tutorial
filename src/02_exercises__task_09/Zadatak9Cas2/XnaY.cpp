//
//  XnaY.cpp
//  Zadatak9Cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "XnaY.hpp"

XnaY::XnaY(){
    x = 1;
    y = 1;
}

XnaY::XnaY(int xx, int yy){
    x = xx;
    y = yy;
}

XnaY::XnaY(const XnaY &xy){
    x = xy.x;
    y = xy.y;
}

void XnaY::setX(int xx){
    x = xx;
}

void XnaY::setY(int yy){
    y = yy;
}

void XnaY::setX_Y(int xx, int yy){
    x = xx;
    y = yy;
}

int XnaY::getX()const{
    return x;
}

int XnaY::getY()const{
    return y;
}

double XnaY::getXnaY()const{
    return pow(x, y);
}
