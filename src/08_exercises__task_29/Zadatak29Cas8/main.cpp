//
//  main.cpp
//  Zadatak29Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 Date su klasa DinString i generička klasa List.
 
 Napisati apstraktnu klasu Artikal koja sadrži apstraktnu metodu za izračunavanje cene artikla.
 
 Iz apstraktne klase Artikal izvesti klasu Lek, koja sadrži objekte-članove: jkl (long), naziv (DinString), jedinicnaCena (double) i kolicina (int). Klasa treba da sadrži konstruktor bez parametara, konstruktor sa parametrima (gde je parametar za naziv tipa char[]), konstruktor sa parametrima (gde je parametar za naziv tipa DinString&), konstruktor kopije, get/set metode, realizacije odgovarajućih apstraktnih metoda i metodu za ispis.
 
 Napisati klasu EvidencijaLekova, koja sadrži objekte-članove: nazivApoteke (DinString), datum (DinString) i evidencija (List<Lek>). Klasa treba da sadrži konstruktor bez parametara, get/set metode (osim za polje evidencija), metodu za unos novog leka u evidenciju (pomoću tastature, dodati ga na kraj evidencije), metodu za dodavanje leka u evidenciju (pomoću već postojećeg objekta klase Lek,dodati ga na početak evidencije), metodu za brisanje leka iz evidencije, metodu za sortiranje evidencije po jediničnoj ceni leka (od najjeftinijeg leka do najskupljeg), kao i metodu za ispis.
 
 Realizovati sve metode. Napisati kratak test program.
 
 OBAVEZNO istestirati SVE metode i SVE konstruktore (osim get/set metoda).
 
 
*/

#include "evidencijaLekova.hpp"

int main()
{
    cout << "TESTIRANJE KLASE LEK" << endl << endl;
    
    DinString d("Pressing");
    Lek l1, l2(2, "Aspirin", 22.33, 10), l3(3, d, 34.56, 20), l4(l3);
    
    l1.ispis();
    l2.ispis();
    l3.ispis();
    l4.ispis();
    
    
    cout << endl << endl << "TESTIRANJE KLASE EVIDENCIJA LEKOVA" << endl;
    
    EvidencijaLekova e;
    
    e.ispis();
    
    
    if(e.dodajLek()){
        cout << "Lek uspesno dodat!" << endl;
    } else {
        cout << "Lek neuspesno dodat!" << endl;
    }
    
    e.ispis();
    
    if(e.dodajLek()){
        cout << "Lek uspesno dodat!" << endl;
    } else {
        cout << "Lek neuspesno dodat!" << endl;
    }
    
    e.ispis();
    
    
    if(e.dodajPostojeciLek(l1)){
        cout << "Lek uspesno dodat!" << endl;
    } else {
        cout << "Lek neuspesno dodat!" << endl;
    }
    
    e.ispis();
    
    
    e.sortLekovaPoJedinicnojCeni();
    
    cout << "Lekovi sortirani po jedinicnoj ceni, od najjeftinijeg do najskupljeg!" << endl;
    
    e.ispis();
    
    
    if(e.ukloniLek(1)){
        cout << "Najjeftiniji lek (po jedinicnoj ceni) uspesno uklonjen!" << endl;
    } else {
        cout << "Lek neuspesno uklonjen!" << endl;
    }
    
    e.ispis();
    
    return 0;
}
