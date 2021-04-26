//
//  main.cpp
//  Zadatak6Cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


/*
 
 Napisati klasu Kocka koja modeluje kocku za igru.
 IMPLEMENTIRATI
     - prazan konstruktor
     - konstruktor sa parametrima
     - konstruktor kopije
     - metodu void baci()
     - metodu int getVrednost() const
     - slobodnu funkciju int meni()
 
 NAPOMENE:
     - prazan konstruktor podešava stranu kocke na 1
     - za generisanje slučajne vrednosti iskoristiti rand() funkciju koja se nalazi u C++ zaglavlju cstdlib. Formula za generisanje vrednosti je rand()%X+Y, gde X predstavlja max a Y min (max=6,min=1)
     - slobodna funkcija int meni() prikazuje listu operacija i kao povratnu vrednost vraća broj izabrane operacije. Na osnovu vraćene vrednosti poziva se odgovarajuća metoda
 
 */


#include "Kocka.hpp"

// deklarisanje konstante
#define KRAJ_RADA 3

int meni(){
    cout << "Izaberite operaciju" << endl;
    cout << "1. Baci kocku" << endl;
    cout << "2. Prikazi kocku" << endl;
    cout << "3. Kraj" << endl;
    cout << "Operacija-> ";
    int n;
    cin >> n;
    return n;
}

int main()
{
    // prazan konstruktor
    Kocka k1;
    
    // konstruktor sa parametrima
    // nije implementirana logika ako korisnik prosledi vrednost manju od 1 ili vecu od 6
    // kocka za igru moze da ima samo vrednosti 1, 2, 3, 4, 5, 6 (broj tackica)
    Kocka k2(3);
    
    // konstruktor kopije
    // konstruktor kopije ocekuje da mu se kao parametar prosledi podatak (promenljiva) tipa te klase
    Kocka k3(k2);
    
    int n;
    
    do{
        n = meni();
        
        switch(n){
            case 1: // baci
                k1.baci();
                cout << endl << "Kocka je bacena" << endl << endl;
                break;
            case 2: // prikazi
                cout << endl << "Vrednost kocke je: " << k1.getVrednost() << endl << endl;
                break;
            case 3: // kraj rada programa
                cout << endl << "Kraj rada programa " << endl << endl;
                break;
            default:
                cout << endl << "Nepostojeca operacija" << endl << endl;
                break;
        }
    } while(n != KRAJ_RADA);
    
    return 0;
}
