//
//  main.cpp
//  Zadatak4Cas1
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
 Napisati program koji za pozitivan ceo broj unet sa konzole određuje rezultat dobijen sledećom formulom: 
 rez = √1 + √2 + ... + √n , gde je n broj koji je korisnik uneo, a rez rezultat koji treba da se ispiše na konzoli. Rezultat zaokružiti na 2 decimale.
 
 IMPLEMENTIRATI
 - funkciju za izračunavanje zadatog izraza koja kao parametar prima ceo
 broj, a vraća rezultat zaokružen na 2 decimale.
 
 */


#include <iostream>
#include <cmath>

using namespace std;

double f(int n) {
    double ret=0;
    
    for(int i = 1; i <= n; i++) {
        ret += sqrt(i);
    }
    
    // zaokruzivanje na 2 decimale - round gleda do zareza
    ret = round(ret * 100);
    ret = ret / 100;
    
    return ret;
}

int main()
{
    int broj;
    double rez;
    
    cout << "Unesite ceo pozitivan broj: ";
    cin >> broj;
    
    rez = f(broj);
    cout << "Rezultat je: " << rez << endl;
    
    return 0;
}
