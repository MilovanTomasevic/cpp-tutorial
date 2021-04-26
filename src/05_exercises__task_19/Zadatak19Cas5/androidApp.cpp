//
//  androidApp.cpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "androidApp.hpp"

int AndroidApp::andInsNo=0;

AndroidApp::AndroidApp() : Application("Java", 5){
    minVersion=12;
    targetVersion=20;
    andInsNo++;
}

AndroidApp::AndroidApp(double m, double t, double s) : Application("Java", s) {
    minVersion=m;
    targetVersion=t;
    andInsNo++;
}

AndroidApp::AndroidApp(const AndroidApp& a) : Application((Application)a) {
    minVersion=a.minVersion;
    targetVersion=a.targetVersion;
    andInsNo++;
}

AndroidApp::~AndroidApp(){
    andInsNo--;
}

void AndroidApp::print() const{
    Application::print();
    cout<<"Minimum SDK version: "<<minVersion<<endl;
    cout<<"Target SDK version: "<<targetVersion<<endl;
}

void AndroidApp::showInsNo() const{
    cout<<"Android app instances: "<<andInsNo<<endl;
}
