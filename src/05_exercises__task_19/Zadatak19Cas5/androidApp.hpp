//
//  androidApp.hpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef ANDROIDAPP_HPP_INCLUDED
#define ANDROIDAPP_HPP_INCLUDED

#include "application.hpp"

class AndroidApp : public Application{
private:
    double minVersion;
    double targetVersion;
    static int andInsNo;
    
public:
    AndroidApp();
    AndroidApp(double, double, double);
    AndroidApp(const AndroidApp&);
    ~AndroidApp();
    void print() const;
    void showInsNo() const;
};

#endif // ANDROIDAPP_HPP_INCLUDED
