//
//  main.cpp
//  Zadatak22Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 U programskom jeziku C++ napisati apstraktnu klasu Figura, koja sadrži apstraktne metode za izračunavanje obima i površine. Iz apstraktne klase Figura izvesti klase Pravougaonik i Elipsa. Klase treba da sadrže konstruktor bez parametara, konstruktor sa parametrima, konstruktor kopije, get metode i realizaciju odgovarajućih apstraktnih metoda. Iz klase Pravougaonik izvesti klasu Kvadrat. Iz klase Elipsa izvesti klasu Krug. Napisati klasu Oblik (slika 1, obojen crnom bojom) koja sadrži objekte-članove: A (klasa Kvadrat) i B (klasa Krug). Klasa treba da sadrži konstruktor bez parametara, konstruktor sa parametrima, konstruktor kopije, metode za izračunavanje obima i površine. Realizovati sve metode. Napisati kratak test program. OBAVEZNO istestirati SVE metode i SVE konstruktore.
 
*/


#include "oblik.hpp"

int main()
{
    cout << "PRAVOUGAONIK P1:" << endl;
    Pravougaonik p1;
    cout << "Povrsina: " << p1.getP() << endl;
    cout << "Obim: " << p1.getO() << endl << endl;
    
    cout << "PRAVOUGAONIK P2:" << endl;
    Pravougaonik p2(3,5);
    cout << "Povrsina: " << p2.getP() << endl;
    cout << "Obim: " << p2.getO() << endl;
    cout << " " << endl;
    
    cout << "PRAVOUGAONIK P3:" << endl;
    Pravougaonik p3(p2);
    cout << "Povrsina: " << p3.getP() << endl;
    cout << "Obim: " << p3.getO() << endl << endl;
    
    
    cout << "ELIPSA E1:" << endl;
    Elipsa e1;
    cout << "Povrsina: " << e1.getP() << endl;
    cout << "Obim: " << e1.getO() << endl << endl;
    
    cout << "ELIPSA E2:" << endl;
    Elipsa e2(3,5);
    cout << "Povrsina: " << e2.getP() << endl;
    cout << "Obim: " << e2.getO() << endl << endl;
    
    cout << "ELIPSA E3:" << endl;
    Elipsa e3(e2);
    cout << "Povrsina: " << e3.getP() << endl;
    cout << "Obim: " << e3.getO() << endl << endl;
    
    
    cout << "KVADRAT K1:" << endl;
    Kvadrat k1;
    cout << "Povrsina: " << k1.getP() << endl;
    cout << "Obim: " << k1.getO() << endl << endl;
    
    cout << "KVADRAT K2:" << endl;
    Kvadrat k2(4);
    cout << "Povrsina: " << k2.getP() << endl;
    cout << "Obim: " << k2.getO() << endl << endl;
    
    cout << "KVADRAT K3:" << endl;
    Kvadrat k3(k2);
    cout << "Povrsina: " << k3.getP() << endl;
    cout << "Obim: " << k3.getO() << endl << endl;
    
    cout << "KRUG KR1:" << endl;
    Krug kr1;
    cout << "Povrsina: " << kr1.getP() << endl;
    cout << "Obim: " << kr1.getO() << endl << endl;
    
    cout << "KRUG KR2:" << endl;
    Krug kr2(3);
    cout << "Povrsina: " << kr2.getP() << endl;
    cout << "Obim: " << kr2.getO() << endl << endl;
    
    cout << "KRUG KR3:" << endl;
    Krug kr3(kr2);
    cout << "Povrsina: " << kr3.getP() << endl;
    cout << "Obim: " << kr3.getO() << endl << endl;
    
    
    cout << "OBLIK O1:" << endl;
    Oblik o1;
    
    cout << "Povrsina: " << o1.getP() << endl;
    cout << "Obim: " << o1.getO() << endl << endl;
    
    cout << "OBLIK O2:" << endl;
    Oblik o2(6);
    cout << "Povrsina: " << o2.getP() << endl;
    cout << "Obim: " << o2.getO() << endl << endl;
    
    cout << "OBLIK O3:" << endl;
    Oblik o3(o2);
    cout << "Povrsina: " << o3.getP() << endl;
    cout << "Obim: " << o3.getO() << endl << endl;
    
    return 0;
}
