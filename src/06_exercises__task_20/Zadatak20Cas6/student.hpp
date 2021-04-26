//
//  student.hpp
//  Zadatak20Cas6
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef STUDENT_DEF
#define STUDENT_DEF

#include "osoba.hpp"

class Student : public Osoba {
protected:
    int brojIndeksa;
    
public:
    Student(const char* s1 = "", const char* s2 = "", int i = 0) : Osoba(s1, s2), brojIndeksa(i) {
        cout << "Student: Konstruktor 1." << endl;
    }
    
    Student(const DinString& ds1, const DinString& ds2, int i) : Osoba(ds1, ds2), brojIndeksa(i) {
        cout << "Student: Konstruktor 2." << endl;
    }
    
    Student(const Osoba& os, int i) : Osoba(os), brojIndeksa(i) {
        cout << "Student: Konstruktor 3." << endl;
    }
    
    Student(const Student& s) : Osoba((Osoba)s), brojIndeksa(s.brojIndeksa) {
        cout << "Student: Konstruktor 4." << endl;
    }
    
    ~Student() {
        cout << "Student: Destruktor." << endl;
    }
    
    void predstaviSe() const {
        Osoba::predstaviSe();
        cout << "Broj mog indeksa je " << brojIndeksa << "." << endl;
    }
};

#endif
