//
//  main.cpp
//  Zadatak11Cas3
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 Uz upotrebu kompozicije napisati klasu Valjak koja opisuje geometrijsku figuru valjak. Klasa Valjak treba da se sastoji iz 2 objekta-člana: klase Krug i klase Pravougaonik. Klasa Valjak treba da implementira: konstruktor sa parametrima (sa podrazumevanim vrednostima za parametre), get metodu getR koja kao povratnu vrednost vraća poluprečnik baze valjka (poluprečnik r kruga), get metodu getH koja kao povratnu vrednost vraća visinu omotača valjka (stranica b pravougaonika) i metode getP i getV koje kao povratne vrednosti vraćaju površinu i zapreminu valjka.
 Klasu Krug opisati pomoću polja r tipa double koje predstavlja poluprečnik kruga. Sama klasa treba da implementira: konstruktor sa parametrima (sa podrazumevanim vrednostima za parametre), get metodu getR koja kao povratnu vednost vraća poluprečnik kruga, i metode getO i getP koje kao povratne vrednosti vraćaju obim i površinu kruga.
 Klasu Pravougaonik opisati pomoću polja a i b tipa double koja predstavljaju stranice a i b pravougaonika. Sama klasa treba da implementira: konstruktor sa parametrima (sa podrazumevanim vrednostima za parametre), get metode getA i getB koje kao povratne vrednosti vraćaju dužinu stranica a i b, i metoda getO i getP koje kao povratne vrednosti vraćaju obim i površinu pravougaonika.

*/


#include "Valjak.hpp"

int main()
{
    Krug k1;
    Krug k2(3);
    Pravougaonik p1;
    Pravougaonik p2(1,8);
    Valjak v1;
    Valjak v2(2,4);
    
//    cout << fixed << setprecision(2);
    
    cout << "Instanca k1" << endl;
    cout << "Povrsina kruga je: " << k1.getP() << " ,a obim je: " << k1.getO() << endl << endl;
    
    cout << "Instanca k2" << endl;
    cout << "Povrsina kruga je: " << k2.getP() << " ,a obim je: " << k2.getO() << endl << endl;
    
    cout << "Instanca p1" << endl;
    cout << "Povrsina pravougaonika je: " << p1.getP() << " ,a obim je: " << p1.getO() << endl << endl;
    
    cout << "Instanca p2" << endl;
    cout << "Povrsina pravougaonika je: " << p2.getP() << " ,a obim je: " << p2.getO() << endl << endl;
    
    cout << "Instanca v1" << endl;
    cout << "Povrsina valjka je: " << v1.getP() << " ,a zapremina je: " << v1.getV() << endl << endl;
    
    cout << "Instanca v2" << endl;
    cout << "Povrsina valjka je: " << v2.getP() << " ,a zapremina je: " << v2.getV() << endl << endl;
    
    return 0;
}
