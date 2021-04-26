//
//  main.cpp
//  Zadatak27Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
 Napisati klasu Osoba ima polja ime, prezime, i ima virtuelnu metodu za ispis podataka o osobi. Iz klase Osoba izvesti klasu Student. Student ima dodatno broj indeksa. Takođe, iz klase Osoba izvesti i klasu Profesor. Profesor ima dodatno i naziv predmeta koji predaje. Klase Student i Profesor imaju preklopljenu metodu za ispis podataka o sebi.
 Napisati klasu Učionica koja ima listu osoba koji su u njoj prisutne. Učionica ima svoj naziv i maksimalan broj osoba koje mogu da stanu u nju. Maksimalan broj prisutnih osoba se zadaje prilikom konstrukcije objekta klase Učionica. Prilikom dodavanja nove osobe proveriti da li u učionici ima slobodnih mesta.
 Za realizaciju liste koristiti generičku klasu List. Za imena, prezimena i nazive koristiti klasu DinString. Napisati kratak test program.
 IMPLEMENTIRATI:
 Osoba:
 get/set Ime
 get/set Prezime
 virtuelna metoda za ispis konstruktor bez parametara konstruktor kopije
 Student:
 get/set broj indeksa
 preklopljena metoda za ispis konstruktor bez parametara konstruktor kopije
 Profesor:
 get/set naziv predmeta
 preklopljena metoda za ispis konstruktor bez parametara konstruktor kopije
 Učionica:
 get/set naziva učionice
 metoda za dodavanje nove osobe u učionicu
 ispis svih prisutnih osoba u učionici
 konstruktor sa parametrima (za kapacitet učionice)
 
 
 */

#include "ucionica.hpp"

int main()
{
    cout << endl << endl << "TESTIRANJE KLASE OSOBA" << endl << endl;
    
    Osoba o;
    o.predstaviSe();
    
    o.setIme("Pera");
    o.setPrezime("Petrovic");
    o.predstaviSe();
    
    Osoba o2(o);
    o2.predstaviSe();
    
    
    
    cout << endl << endl << "TESTIRANJE KLASE STUDENT" << endl << endl;
    
    Student s;
    s.predstaviSe();
    
    s.setIme("Marko");
    s.setPrezime("Markovic");
    s.setBrojIndeksa(12345);
    s.predstaviSe();
    
    Student s2(s);
    s2.predstaviSe();
    
    
    
    cout << endl << endl << "TESTIRANJE KLASE STUDENT" << endl << endl;
    
    Profesor p;
    p.predstaviSe();
    
    p.setIme("Ivana");
    p.setPrezime("Ivanovic");
    p.setNazivPredmeta("Objektno programiranje");
    p.predstaviSe();
    
    Profesor p2(p);
    p2.predstaviSe();
    
    
    
    cout << endl << endl << "TESTIRANJE KLASE UCIONICA" << endl << endl;
    
    Ucionica u(5);
    
    u.ispis();
    
    if(u.dodaj(p)) {
        cout << "Uspesno dodavanje." << endl;
    } else {
        cout << "Neuspesno dodavanje." << endl;
    }
    
    if(u.dodaj(p2)) {
        cout << "Uspesno dodavanje." << endl;
    } else {
        cout << "Neuspesno dodavanje." << endl;
    }
    
    if(u.dodaj(s)) {
        cout << "Uspesno dodavanje." << endl;
    } else {
        cout << "Neuspesno dodavanje." << endl;
    }
    
    if(u.dodaj(s2)) {
        cout << "Uspesno dodavanje." << endl;
    } else {
        cout << "Neuspesno dodavanje." << endl;
    }
    
    if(u.dodaj(o)) {
        cout << "Uspesno dodavanje." << endl;
    } else {
        cout << "Neuspesno dodavanje." << endl;
    }
    
    if(u.dodaj(o2)) {
        cout << "Uspesno dodavanje." << endl;
    } else {
        cout << "Neuspesno dodavanje." << endl;
    }
    
    u.ispis();
    
    return 0;
}
