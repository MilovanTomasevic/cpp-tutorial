//
//  student.hpp
//  Zadatak27Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef STUDENT_DEF
#define STUDENT_DEF

#include "osoba.hpp"

class Student : public Osoba {
protected:
    int brojIndeksa;
    
public:
    Student() : Osoba(), brojIndeksa(0) {}
    
    Student(const Student& s) : Osoba((Osoba)s), brojIndeksa(s.brojIndeksa) {}
    
    int getBrojIndeksa() const {
        return brojIndeksa;
    }
    
    void setBrojIndeksa(int b) {
        brojIndeksa = b;
    }
    
    void predstaviSe() const {
        cout << "Zovem se " << ime << " " << prezime << ", a broj mog indeksa je " << brojIndeksa << "." << endl;
    }
};

#endif
