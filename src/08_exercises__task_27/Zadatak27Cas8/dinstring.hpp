//
//  dinstring.hpp
//  Zadatak27Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef DINSTRING_DEF
#define DINSTRING_DEF
#include <iostream>

using namespace std;

class DinString {
private:
    int duzina;
    char *text;
public:
    DinString();
    DinString(const char[]);
    DinString(const DinString&);
    ~DinString();
    
    int length() const;
    
    char& operator[] (int);
    char operator[] (int) const;
    
    DinString& operator=(const DinString&);
    DinString& operator+=(const DinString&);
    
    friend bool operator==(const DinString&, const DinString&);
    friend bool operator!=(const DinString&, const DinString&);
    
    friend DinString operator+(const DinString&, const DinString&);
    
    friend ostream& operator<<(ostream&, const DinString&);
};

#endif
