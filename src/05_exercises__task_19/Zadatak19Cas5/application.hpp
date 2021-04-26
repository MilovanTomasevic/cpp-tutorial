//
//  application.hpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef APPLICATION_HPP_INCLUDED
#define APPLICATION_HPP_INCLUDED

#include <iostream>
using namespace std;

#include "dinstring.hpp"

class Application{
protected:
    DinString language;
    DinString author;
    double sizeMB;
    static int instancesNo;
    
public:
    Application();
    Application(char*, double);
    Application(const Application&);
    ~Application();
    void print() const;
    void showInsNo() const;
};

#endif // APPLICATION_HPP_INCLUDED
