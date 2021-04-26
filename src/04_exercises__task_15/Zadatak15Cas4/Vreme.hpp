//
//  Vreme.hpp
//  Zadatak15Cas4
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef ZAGLAVLJE_HPP_INCLUDED
#define ZAGLAVLJE_HPP_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

class Vreme{
private:
    int sekunde;
    
public:
    // prazan konstruktor
    Vreme();
    //konstruktor sa parametirma: sekunde
    Vreme(int);
    //konstruktor sa parametrima: sekunde, minuti
    Vreme(int, int);
    //konstruktor sa parametrima: sekunde, minuti, Vremei
    Vreme(int, int, int);
    // konstruktor kopije
    Vreme(const Vreme&);
    
    //dodela kao konstruktor kopije a vraca to sto mu se da
    Vreme& operator=(const Vreme&);
    Vreme& operator+=(const Vreme&);
    Vreme& operator-=(const Vreme&);
    
//  ima pravo pristupa private poljima klase koja je friend (nije clanica klase) pogledati cpp ne pristupa sa Vreme::
    friend Vreme operator+(const Vreme&, const Vreme&);
    friend Vreme operator-(const Vreme&, const Vreme&);
    
    const Vreme& operator++();
    const Vreme operator++(int);
    const Vreme& operator--();
    const Vreme operator--(int);
    
    friend bool operator==(const Vreme&, const Vreme&);
    friend bool operator!=(const Vreme&, const Vreme&);
    friend bool operator<(const Vreme&, const Vreme&);
    friend bool operator<=(const Vreme&, const Vreme&);
    friend bool operator>(const Vreme&, const Vreme&);
    friend bool operator>=(const Vreme&, const Vreme&);
    
    friend ostream& operator<<(ostream&, const Vreme&);
    friend istream& operator>>(istream&, Vreme&);
    
};

#endif // ZAGLAVLJE_HPP_INCLUDED
