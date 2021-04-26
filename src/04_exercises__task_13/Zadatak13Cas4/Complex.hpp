//
//  Complex.hpp
//  Zadatak13Cas4
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef COMPLEX_HPP_INCLUDED
#define COMPLEX_HPP_INCLUDED

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    // konstruktori
    Complex();
    Complex(double, double);
    Complex(const Complex&);
    
    // get metode
    double getReal() const;
    double getImag() const;
    
    // set metode
    void setReal(double);
    void setImag(double);
    
    // preklapanje operatora - prototip funkcije
    Complex& operator=(const Complex&);
    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator/=(const Complex&);
    
    // prefiksni (radi direktno &) i postfiksni operator
    
/*   ako je a=5
    
    ++a - bice a=6
    a++ - bice a=6
    b=++a - bice b=6
    b=a++ - prvo ce b postati a tj 5 pa tek onda uvecati a na 6 */
    
    const Complex& operator++();
    const Complex operator++(int);
    
    /*
    friend funkcije nisu metode neke klase nego bilo koje - slobodne funkcije
     pa se zato zovu friend 
     
     One su kao prijatelji tj kada nam neko postane prijatelj (proglasimo funkciju prijatljskom)
     on zna nase tajne (ima pristup PRIVATE segmentima te klase gde je definisana)
     
     */
    
    // funkcija vraca Complex a operator vrsi operaciju nad prametrima Complex&
    // const je zato sto ih ne menjamo nego citamo njihovu vrednost
    friend Complex operator+(const Complex&, const Complex&);
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    friend Complex operator/(const Complex&, const Complex&);
    
    friend bool operator==(const Complex&, const Complex&);
    friend bool operator!=(const Complex&, const Complex&);
    
    
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);
};

#endif // COMPLEX_HPP_INCLUDED
