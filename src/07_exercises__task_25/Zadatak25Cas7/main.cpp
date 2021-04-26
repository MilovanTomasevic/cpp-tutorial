//
//  main.cpp
//  Zadatak25Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 U programskom jeziku C++ napisati generičku klasu Trezor<class SADRZAJ, int KAPACITET>, koja opisuje trezor sa sefovima, pri čemu je u svakom sefu trezora moguće držati po jedan predmet tipa SADRZAJ, a ukupan broj sefova odgovara vrednosti KAPACITET. Po kreiranju trezora, svi sefovi u trezoru su prazni. Trezor<class SADRZAJ, int KAPACITET> treba da sadrži konstruktor bez parametara, metodu int ubaciSadrzaj(const SADRZAJ& predmet), metodu bool izbaciSadrzaj(int sef) i metodu getBrojPopunjenihSefova().
 
 Metoda ubaciSadrzaj(const SADRZAJ& predmet) smešta predmet u prvi prazan sef, čime taj sef postaje pun, a povratna vrednost označava u kojem je po redu sefu izvršeno ubacivanje odnosno -1 ako nije došlo do ubacivanja jer su svi sefovi bili puni.
 
 Metoda bool izbaciSadrzaj(int sef) uklanja predmet koji se nalazi u popunjenom sefu sa rednim brojem sef čime taj sef postaje prazan, a povratna vrednost označava da li je došlo do izbacivanja.
 
 Metoda getBrojPopunjenihSefova() kao rezultat daje broj sefova u trezoru koji su popunjeni.

 Napisati klasu Dijamant koja opisuje dijamant sa sledećim karakteristikama: vrednošću (polje vrednost tipa double) i broj karata (polje karat tipa double). Klasa Dijamant treba da sadrži konstruktor bez parametara, konstruktor sa parametrima, konstruktor kopije i get metode.
 
 Napisati kratak test program u kojem će biti istestirana jedna konkretizacija generičke klase Trezor<class SADRZAJ, int KAPACITET> koja za svoj SADRZAJ ima objekte klase Dijamant — OBAVEZNO istestirati SVE konstruktore i SVE metode.
 
 Za strukturu podataka koja opisuje sefove u trezoru koristiti statički alocirani niz.
 
*/


#include <iostream>

#include "trezor.hpp"
#include "dijamant.hpp"

using namespace std;

int main()
{
    Trezor<Dijamant, 100> trezor;            // Napravljen objekat trezor klase Trezor, sa sadrzajem tipa klase Dijamant i sa kapacitetom od 100 sefova
    Dijamant d1, d2(100000, 50), d3(d2);     // Kreirani objekti tipa Dijamant 
    
    cout << "D1: vrednost=" << d1.getVrednost() << " karat=" << d1.getKarat() << endl;
    cout << "D2: vrednost=" << d2.getVrednost() << " karat=" << d2.getKarat() << endl;
    cout << "D3: vrednost=" << d3.getVrednost() << " karat=" << d3.getKarat() << endl;
    
    cout << "Trezor: ubaci D1 rezultat=" << trezor.ubaciSadrzaj(d1) << endl;
    cout << "Trezor: broj popunjenih=" << trezor.getBrojPopunjenihSefova() << endl;
    cout << "Trezor: ubaci D2 rezultat=" << trezor.ubaciSadrzaj(d2) << endl;
    cout << "Trezor: broj popunjenih=" << trezor.getBrojPopunjenihSefova() << endl;
    cout << "Trezor: ubaci D3 rezultat=" << trezor.ubaciSadrzaj(d3) << endl;
    cout << "Trezor: broj popunjenih=" << trezor.getBrojPopunjenihSefova() << endl;
    
    cout << "Trezor: izbaci 50 rezultat=" << trezor.izbaciSadrzaj(50) << endl;
    cout << "Trezor: broj popunjenih=" << trezor.getBrojPopunjenihSefova() << endl;
    cout << "Trezor: izbaci 0 rezultat=" << trezor.izbaciSadrzaj(0) << endl;
    cout << "Trezor: broj popunjenih=" << trezor.getBrojPopunjenihSefova() << endl;
    
    return 0;
}


