//
//  main.cpp
//  Zadatak5Cas1
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


/*
 
 
 Napisati program koji izračunava i prikazuje svotu novca potrebnu za kupovinu karata za bioskop.
 
 IMPLEMENTIRATI
 - funkciju za izračunavanje potrebne svote novca, koja ima parametre koje određuju količinu karata i cenu jedne karte (ukoliko cena jedne karte nije definisana podrazumevati da košta 50 dinara).
 
 */



#include <iostream>
using namespace std;

double kupiKarte(int kolicina, double jedCena = 50){
    return kolicina * jedCena;
}

int main()
{
    int kol;
    double jCena, potrebanNovac;
    
    cout << "Unesite kolicinu karata koje biste da kupite: ";
    cin >> kol;
    cout << endl;
    
    cout << "Unesite cenu jedne karte (unesite negativan broj \n ukoliko zelite da koristite podrazumevanu cenu): ";
    cin >> jCena;
    cout << endl;
    
    if(jCena < 0){
        potrebanNovac = kupiKarte(kol);
    } else {
        potrebanNovac = kupiKarte(kol, jCena);
    }
    
    cout << "Vas racun iznosi " << potrebanNovac << " dinara." << endl;
    
    return 0;
}

