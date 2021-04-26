//
//  main.cpp
//  Zadatak7Cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


/*
 
 Napisati klasu Rerna (koja opisuje dijagram sa slike). Klasa treba da sadrži polja: trenutnoStanje (tipa nabrojivi niz celobrojnih vrednosti StanjeRerne) i temperatura (celobrojnog tipa - int). Temperatura se nalazi u opsegu 0 i 220 0C. Promena temperature se uvek vrši za korak od 20 0C. Temperatura se može menjati samo u stanju UKLJUCENA. U stanju POKVARENA temperatura ima vrednost -1, a u stanju ISKLJUCENA ima vrednost 0. Prilikom paljenja rerne, potrebno je automatski povećati temperaturu za jedan korak.
 
 IMPLEMENTIRATI:
     - prazan konstruktor 
     - metodu bool ukljuci() - metodu bool iskljuci() - metodu bool pokvari() - metodu bool popravi()
     - metodu bool pojacajTemperaturu() - metodu bool smanjiTemperaturu()
     - metodu string getTrenutnoStanje() const - metodu int getTemperatura() const
     - slobodnu funkciju int meni()
 
 NAPOMENE:
     - prazan konstruktor postavlja klasu Rerna u inicijalno stanje, gde je stanje je ISKLJUCENA, a temperatura 0
     - voditi računa o uslovima i granicama za polje temperatura
 
 */

#include "Rerna.hpp"

int meni(){
    int i;
    
    cout << "Izaberite operaciju" << endl;
    cout << "1. Ukljuci rernu" << endl;
    cout << "2. Iskljuci rernu" << endl;
    cout << "3. Pokvari rernu" << endl;
    cout << "4. Popravi rernu" << endl;
    cout << "5. Pojacaj temperaturu" << endl;
    cout << "6. Smanji temperaturu" << endl;
    cout << "7. Prikazi stanje" << endl;
    cout << "8. Kraj rada programa" << endl;
    cout << "Operacija-> ";
    
    cin >> i;
    
    return i;
}

int main()
{
    int i;
    
    Rerna r;
    
    do{
        cout << endl;
        
        i = meni();
        
        cout << endl;
        
        switch(i){
            case 1:
                if(r.ukljuci()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 2:
                if(r.iskljuci()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 3:
                if(r.pokvari()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 4:
                if(r.popravi()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 5:
                if(r.pojacajTemperaturu()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 6:
                if(r.smanjiTemperaturu()){
                    cout << "Operacija je izvrsena" << endl;
                }else{
                    cout << "Operacija nije izvrsena" << endl;
                }
                break;
            case 7:
                cout << "Stanje je: " << r.getTrenutnoStanje() << ", a temperatura: " << r.getTemperatura() << endl;
                break;
            case 8:
                cout << "Kraj koriscenja rerne" << endl;
                break;
            default:
                cout << "Nepostojeca operacija" << endl;
                break;
        }
    }while(i != 8);
    
    return 0;
}
