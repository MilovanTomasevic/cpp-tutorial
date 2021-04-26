//
//  desktopApp.hpp
//  Zadatak19Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef DESKTOPAPP_HPP_INCLUDED
#define DESKTOPAPP_HPP_INCLUDED

#include "application.hpp"
#include "computer.hpp"

class DesktopApp : public Application{
private:
    Computer minSysReq;
    Computer optimumSysReq;
    static int desInsNo;
    
public:
    DesktopApp();
    DesktopApp(const Computer&, const Computer&, char*, double);
    DesktopApp(const DesktopApp&);
    ~DesktopApp();
    void print() const;
    void showInsNo() const;
};

#endif // DESKTOPAPP_HPP_INCLUDED
