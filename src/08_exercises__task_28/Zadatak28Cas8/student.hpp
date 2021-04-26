//
//  student.hpp
//  Zadatak28Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "predmet.hpp"

class Student{
private:
    Predmet p1;
    Predmet p2;
public:
    Student(const Predmet& pp1, const Predmet& pp2) : p1(pp1), p2(pp2) {}
    
    void ispis() const{
        p1.ispis();
        p2.ispis();
        cout << "Student je osvojio vise poena iz predmeta: " << ((p1.getBodovi() > p2.getBodovi()) ? p1.getNaziv() : p2.getNaziv()) << endl;
    }
};


#endif // STUDENT_HPP_INCLUDED
