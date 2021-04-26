//
//  main.cpp
//  Zadatak1Cas1
//
//  Created by Milovan Tomasevic on 3/18/17.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


/*
 
 Napisati program koji pronalazi sumu svih brojeva koje korisnik unosi preko konzole.
 
 IMPLEMENTIRATI
 - izračunavanje sume
 
 NAPOMENE:
 - sve implementirati u main() funkciji

*/

#include <iostream> // biblioteka za osnovne funkcije
using namespace std; // biblioteka cout cin - ispis

int main()
{
    int pom, suma = 0;
    
    do {
        cout << "Unosite broj koji biste da dodate u sumu (ili 0 za izlaz): ";
        cin >> pom;
        suma += pom;
        cout << "Trenutna suma je: " << suma << endl;
    } while(pom != 0);
    
    cout << "Konacna suma je: " << suma << endl;
    
    return 0;
}
