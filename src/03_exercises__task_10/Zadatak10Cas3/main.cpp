//
//  main.cpp
//  Zadatak10Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 Napisati klasu Televizor koja opisuje dijagram sa slike. Klasa treba da sadrži: prazan konstruktor, konstruktor kopije, tri polja (stanje, zvuk i kanal) i odgovarajuće metode.
 
 Polje stanje predstavlja stanje televizora i tipa je niza celobrojnih konstanti Stanje_televizora. Objekat se može naći u jednom od sledećih stanja: UKLJUCEN, ISKLJUCEN ili POKVAREN. Nabrojivi niz konstanti nazvati Stanje_televizora.
 Polje zvuk predstavlja jačinu zvuka, celobrojnog je tipa podataka (int) i kreće se u opsegu od 0 do 20. Inkremetiranje i dekrementiranje zvuka se vrši sa korakom 1. Korisniku ne treba dozvoliti da izađe iz opsega.
 Polje kanal predstavlja kanal koji gledamo, celobrojnog je tipa podataka (int) i kreće se u opsegu od 1 do 5. Promena kanala se vrši sa korakom 1. Korisniku ne treba dozvoliti da izađe iz opsega.
 
 Zvuk se može pojačati/smanjiti i kanal se može promeniti samo kada se objekat nalazi u stanju UKLJUCEN. U stanju ISKLJUCEN jačina zvuka treba da bude 0 i kanal 1. U stanju POKVAREN jačina zvuka treba da bude -1 i kanal -1.
 Inicijalno stanje (početno) klase je stanje ISKLJUCEN. U tom stanju polje zvuk je 0, a kanal je 1.
 Na osnovnu povratne vrednosti poziva metode korisniku prikazati odgovarajuću poruku. Za true prikazati uspesno, za false prikazati neuspesno.
 
 IMPLEMENTIRATI
     - prazan konstruktor
     - konstruktor kopije - bool ukljuci()
     - bool iskljuci()
     - bool pokvari()
     - bool popravi()
     - bool pojacajZvuk()
     - bool smanjiZvuk()
     - bool sledeciKanal()
     - bool prethodniKanal() - string getStanje() const - int getZvuk() const
     - int getKanal() const
     - int meni()
 
 Primer: Stanje: ukljucen Kanal: 2 Zvuk: 4
 Primer liste operacija: 
     1. ukljuci
     2. iskljuci
     3. pokvari
     4. popravi
     5. pojacajZvuk
     6. smanjiZvuk
     7. sledeciKanal
     8. prethodniKanal 9. Prikazi stanje
     10. Kraj rada programa

*/


#include "Televizor.hpp"

int meni(){
    int n;
    
    cout << "Izaberite operaciju" << endl;
    cout << " 1. ukljuci" << endl;
    cout << " 2. iskljuci" << endl;
    cout << " 3. pokvari" << endl;
    cout << " 4. popravi" << endl;
    cout << " 5. pojacaj zvuk" << endl;
    cout << " 6. smanji zvuk" << endl;
    cout << " 7. sledeci kanal" << endl;
    cout << " 8. prethodni kanal" << endl;
    cout << " 9. prikazi stanje" << endl;
    cout << "10. kraj rada programa" << endl;
    cout << "Operacija-> ";
    
    cin >> n;
    
    return n;
}

// ova funkcija nije trazena u zadatku i nije neophodna,
// ali smanjuje kolicinu koda i olaksava citljivost istog
void ispisUspeha(bool upit){
    if(upit)
        cout << "Operacija je izvrsena" << endl;
    else
        cout << "Operacija nije izvrsena" << endl;
}

int main()
{
    Televizor tv1;
    int n;
    
    do{
        cout << endl;
        
        n = meni();
        
        cout << endl;
        
        switch(n){
            case 1:
                ispisUspeha(tv1.ukljuci());
                break;
            case 2:
                ispisUspeha(tv1.iskljuci());
                break;
            case 3:
                ispisUspeha(tv1.pokvari());
                break;
            case 4:
                ispisUspeha(tv1.popravi());
                break;
            case 5:
                ispisUspeha(tv1.pojacajZvuk());
                break;
            case 6:
                ispisUspeha(tv1.smanjiZvuk());
                break;
            case 7:
                ispisUspeha(tv1.sledeciKanal());
                break;
            case 8:
                ispisUspeha(tv1.prethodniKanal());
                break;
            case 9:
                cout << "Televizor je " << tv1.getStanje() << ", jacina zvuka je "
                << tv1.getZvuk() << ", a kanal je " << tv1.getKanal() << endl;
                break;
            case 10:
                cout << "Kraj rada programa" << endl;
                break;
            default:
                cout << "Nepostojeca operacija" << endl;
                break;
        }
    }while(n != 10);
    
    Televizor tv2(tv1);
    cout << "Instanca tv2" << endl;
    cout << "Televizor je " << tv2.getStanje() << ", jacina zvuka je "
    << tv2.getZvuk() << ", a kanal je " << tv2.getKanal() << endl;
    
    return 0;
}
