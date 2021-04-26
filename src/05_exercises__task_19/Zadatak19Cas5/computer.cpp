//
//  computer.cpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


#include "computer.hpp"

Computer::Computer(){
    hddGB=500;
    ramGB=8;
    gCard="Nvidia GeForce GTX 970 or equal";
    os="Win7";
}

Computer::Computer(double h, double r, char* g, char* o){
    hddGB=h;
    ramGB=r;
    gCard=g;
    os=o;
}

Computer::Computer(const Computer& c){
    hddGB=c.hddGB;
    ramGB=c.ramGB;
    gCard=c.gCard;
    os=c.os;
}

void Computer::print() const{
    cout<<"HDD [GB]: "<<hddGB<<endl;
    cout<<"RAM [GB]: "<<ramGB<<endl;
    cout<<"Graphical card: "<<gCard<<endl;
    cout<<"Operative system: "<<os<<endl;
}
