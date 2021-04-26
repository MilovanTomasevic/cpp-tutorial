//
//  main.cpp
//  Zadatak3Cas1
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
 Napisati program koji vrši sortiranje dinamički alociranog niza čiji elementi se učitavaju preko konzole.
 
 IMPLEMENTIRATI
     - funkciju za unos elemenata sa dva argumenta
         1. pokazivač na niz
         2. dužina niza
     - funkciju za sortiranje sa tri argumenta
         1. pokazivač na niz
         2. dužina niza
         3. nabrojivi niz podataka celobrojnog tipa (RASTUCE, OPADAJUCE)
     - funkciju za štampanje elemenata sa dva argumenta 
         1. pokazivač na niz
         2. dužina niza
 
 NAPOMENE:
     - dužina niza se unosi preko konzole
 
 */




#include <iostream>
using namespace std;

enum VrstaSortiranja  {RASTUCE, OPADAJUCE};


//Pokazivac uvek pokazuje na prvi element niza
void unosElemenata(int *niz, int duzina){
    cout << "Unesite elemente niza" << endl;
    for(int i = 0; i < duzina; i++){
        cout << "\tniz[" << i << "]=";
        cin >> niz[i];
    }
    cout << endl;
}

void stampaj(int *niz, int duzina){
    for(int i = 0; i < duzina; i++){
        cout << "\tniz[" << i << "]=" << niz[i] ;
    }
    cout << endl;
}

void sortiraj(int *niz, int duzina, VrstaSortiranja nacin){
    int temp;
    
    switch(nacin){
        case RASTUCE: // rastuce sortiranje
            for(int i = 0; i < duzina - 1; i++){
                for(int j = 1 + i; j < duzina; j++){
                    if(niz[i] > niz[j]){
                        temp = *(niz + i);
                        *(niz + i) = *(niz + j);
                        *(niz + j) = temp;
                    }
                }
            }
            break;
        case OPADAJUCE: // opadajuce sortiranje
            for(int i = 0; i < duzina - 1; i++){
                for(int j = 1 + i; j < duzina; j++){
                    if(niz[i] < niz[j]){
                        temp = *(niz + i);
                        *(niz + i) = *(niz + j);
                        *(niz + j) = temp;
                    }
                }
            }
            break;
    }
}

int main()
{
    int duzina;
    
    cout << "Unesite duzinu niza->";
    cin >> duzina;
    cout << endl;
    
    if(duzina <= 0){
        return 0;
    }
    
    // dinamicka alokacija memorije niza promenjivih tipa 'int' duzine 'duzina'
    int *niz = new int[duzina];
    
    if(niz == NULL){
        cout << "Racunar nema dovoljno memorije!" << endl;
        return 0;
    }
    
    unosElemenata(niz,duzina);
    
    cout << "Niz pre sortiranja" << endl;
    stampaj(niz, duzina);
    
    cout << endl << "Niz posle rastuceg sortiranja" << endl;
    sortiraj(niz, duzina, RASTUCE);
    stampaj(niz, duzina);
    
    cout << endl << "Niz posle opadajuceg sortiranja" << endl;
    sortiraj(niz, duzina, OPADAJUCE);
    stampaj(niz, duzina);
    
    // oslobadjanje dinamicki alocirane memorije
    delete[] niz;
    
    return 0;
}
