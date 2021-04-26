//
//  dinstring.hpp
//  Zadatak16Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef DINSTRING_DEF
#define DINSTRING_DEF
#include <iostream>

using namespace std;

class DinString {
private:
    int duzina;
    char *text; //dinamicki alociran niz - String niz carova - karaktera
public:
    DinString();
    DinString(const char[]);
    DinString(const DinString&);
    ~DinString(); //koristimo zbog dinamicke alokacije
    
    int length() const;
    
    //za indeksiranje
    char& operator[] (int); // niz[2]= 3
    char operator[] (int) const; // vraca vrednost bez promene,  char a = niz[4]
    
    //dodela vrednosti &   s1=s2
    DinString& operator=(const DinString&);
    DinString& operator+=(const DinString&);
    
    
    friend bool operator==(const DinString&, const DinString&);
    friend bool operator!=(const DinString&, const DinString&);
    
    
    friend DinString operator+(const DinString&, const DinString&);
    
    friend ostream& operator<<(ostream&, const DinString&);
};

#endif
