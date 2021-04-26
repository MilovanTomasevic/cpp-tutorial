//
//  desktopApp.cpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


#include "desktopApp.hpp"

int DesktopApp::desInsNo=0;

DesktopApp::DesktopApp(){
    desInsNo++;
}

DesktopApp::DesktopApp(const Computer& mc, const Computer& oc, char* l, double s) : Application(l, s), minSysReq(mc), optimumSysReq(oc){
    desInsNo++;
}

DesktopApp::DesktopApp(const DesktopApp& d) : Application((Application)d), minSysReq(d.minSysReq), optimumSysReq(d.optimumSysReq){
    desInsNo++;
}

DesktopApp::~DesktopApp(){
    desInsNo--;
}

void DesktopApp::print() const{
    Application::print();
    cout<<"Minimum system requirements----------"<<endl;
    minSysReq.print();
    cout<<"-------------------------------------"<<endl;
    cout<<"Optimum system requirements----------"<<endl;
    optimumSysReq.print();
    cout<<"-------------------------------------"<<endl;
}

void DesktopApp::showInsNo() const{
    cout<<"Desktop app instances: "<<desInsNo<<endl;
}
