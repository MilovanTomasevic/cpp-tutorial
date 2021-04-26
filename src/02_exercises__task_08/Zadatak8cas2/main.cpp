//
//  main.cpp
//  Zadatak8cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*
 
 Napisati klasu Machine (koja opisuje dijagram sa slike). Klasa treba da sadrži polja: currentState i value. Polje value može imati vrednosti između 0 i 80, a menja se sa korakom koji iznosi 20.
 
 IMPLEMENTIRATI:
     - prazan konstruktor
     - metodu bool metodaX() - metodu bool metodaY() - metodu bool metodaZ() - metodu bool metodaW()
     - metodu bool plus()
     - metodu bool minus()
     - metodu string getCurrentState() const; - metodu int getValue() const;
     - slobodnu funkciju int meni()
     - slobodnu funkciju void printInfo(const Machine&)
 
 NAPOMENE:
     - prazan konstruktor postavlja klasu Machine u inicijalno stanje, gde je currentState = sC, a value = 80
     - voditi računa o uslovima i granicama za polje value
     - metoda bool plus() povećava vrednost polja value za jedan korak, ukoliko su zadovoljeni uslovi
     - metoda bool minus() smanjuje vrednost polja value za jedan korak, ukoliko su zadovoljeni uslovi
     
 */


#include "Machine.hpp"

int meni(){
    int ret;
    
    cout << "Unesite broj za zeljenu operaciju:" << endl;
    cout << "1 - X" << endl;
    cout << "2 - Y" << endl;
    cout << "3 - Z" << endl;
    cout << "4 - W" << endl;
    cout << "5 - Plus" << endl;
    cout << "6 - Minus" << endl;
    cout << "7 - Kraj rada programa" << endl;
    cout << "Operacija-> ";
    
    cin >> ret;
    
    return ret;
}

void printInfo(const Machine& m){
    cout << "Stanje masine je: " << m.getCurrentState() << ", a vrednost je: " << m.getValue() << endl;
}

int main()
{
    Machine m;
    int pom;
    
    do {
        cout << endl;
        
        pom = meni();
        
        cout << endl;
        
        switch(pom){
            case 1 :
                if(m.metodaX()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 2 :
                if(m.metodaY()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 3 :
                if(m.metodaZ()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 4 :
                if(m.metodaW()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 5 :
                if(m.plus()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 6 :
                if(m.minus()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 7 :
                cout << "Masina zavrsava sa radom" << endl;
                break;
            default:
                cout << "Nepostojeca operacija" << endl;
                break;
        }
        
        printInfo(m);
        
    } while (pom != 7);
    
    return 0;
}
