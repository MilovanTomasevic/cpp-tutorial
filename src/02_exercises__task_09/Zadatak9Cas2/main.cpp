//
//  main.cpp
//  Zadatak9Cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
 Napisati klasu XnaY koja modeluje matematicku operaciju X^Y
 
 IMPLEMENTIRATI
     - prazan konstruktor
     - konstruktor sa parametrima - konstruktor kopije
     - metodu void setX(int)
     - metodu void setY(int)
     - metodu void setX_Y(int, int)
     - metodu int getX() const
     - metodu int getY() const
     - metodu double getXnaY() const
 
 NAPOMENE:
     - prazan konstruktor podešava X i Y na 1
     - za izračunavanje iskoristiti metodu pow() koja se nalazi u C++ zaglavlju cmath.
     
 
 */

#include "XnaY.hpp"

int main()
{
    // prazan konstruktor
    XnaY xy1;
    
    // konstruktor sa parametrima
    XnaY xy2(5,2);
    
    // konstruktor kopije
    XnaY xy3(xy2);
    
    int valX, valY;
    
    cout <<  "xy1: X = " << xy1.getX() << "; Y = " << xy1.getY() << "; X^Y = " << xy1.getXnaY() << endl;
    cout <<  "xy2: X = " << xy2.getX() << "; Y = " << xy2.getY() << "; X^Y = " << xy2.getXnaY() << endl;
    cout <<  "xy3: X = " << xy3.getX() << "; Y = " << xy3.getY() << "; X^Y = " << xy3.getXnaY() << endl;
    
    
    cout << endl << "Unesite ceo broj x: ";
    cin >> valX;
    cout << endl << "Unesite ceo broj y: ";
    cin >> valY;
    
    xy1.setX(valX);
    xy1.setY(valY);
    cout <<  "xy1: X = " << xy1.getX() << "; Y = " << xy1.getY() << "; X^Y = " << xy1.getXnaY() << endl;
    
    xy2.setX_Y(valX, valY);
    cout <<  "xy2: X = " << xy2.getX() << "; Y = " << xy2.getY() << "; X^Y = " << xy2.getXnaY() << endl;
    
    return 0;
}
