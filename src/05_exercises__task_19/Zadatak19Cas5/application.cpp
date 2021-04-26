//
//  application.cpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "application.hpp"

int Application::instancesNo=0;

Application::Application(){
    language="C++";
    author="\"Zdrav Razum\" doo";
    sizeMB=200;
    instancesNo++;
}

Application::Application(char* l, double s){
    language=l;
    author="\"Zdrav Razum\" doo";
    sizeMB=s;
    instancesNo++;
}

Application::Application(const Application& a){
    language=a.language;
    author=a.author;
    sizeMB=a.sizeMB;
    instancesNo++;
}

Application::~Application(){
    instancesNo--;
}

void Application::print() const{
    cout<<"Language: "<<language<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Size [MB]: "<<sizeMB<<endl;
}

void Application::showInsNo() const{
    cout<<"Application instances: "<<instancesNo<<endl;
}
