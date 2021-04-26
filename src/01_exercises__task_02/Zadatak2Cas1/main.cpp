//
//  main.cpp
//  Zadatak2Cas1
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
 Napisati program koji pronalazi najveći broj među svim koje korisnik unosi preko konzole.
 
 IMPLEMENTIRATI
 - pronalaženje najvećeg broja (maksimuma)
 
 NAPOMENE:
 - sve implementirati u main() funkciji
 
*/


#include <iostream>
using namespace std;

int main()
{
    int pom, n, maksimum = 0;
    
    cout << "Koliko brojeva biste da unesete? ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "Unosite broj: ";
        cin >> pom;
        
        // provera da li je uneti broj trenutni maksimum
        // ili je prvi unos, kog treba proglasiti pocetnim maksimumom
        if(pom > maksimum || i == 0){
            maksimum = pom;
        }
    }
    
    cout << "Maksimum je: " << maksimum << endl;
    
    return 0;
}
