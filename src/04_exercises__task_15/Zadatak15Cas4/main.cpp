//
//  main.cpp
//  Zadatak15Cas4
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 Uz upotrebu mehanizma preklapanja operatora napisati klasu Vreme koja modeluje proteklo vreme. Klasa sadrži polje sekunde (tipa int).
 
 IMPLEMENTIRATI
     - prazan konstruktor
     - konstruktor sa parametrima (sekunde, sekunde i minuti, sekunde i minuti i sati)
     - konstruktor kopije
     - preklapanje operatora: -, +
     - preklapanje operatora: =, +=, -=
     - preklapanje postfiksnog i prefiksnog operatora za inkrementiranje i dekrementiranje: -- i ++
     - preklapanje operatora za poredjenja: ==, !=, <, <=, >, >= 
     - preklapanje operatora upisa: >>
     - preklapanje operatora ispisa: <<
 
 Primeri ispisa:
     Proteklo vreme: 10s
     Proteklo vreme: 30m : 20s 
     Proteklo vreme: 60h : 50m : 40s 
     Proteklo vreme: - 33h : 12m : 58s
 
 NAPOMENE:
 - operatori -- i ++ vrše inkrementiranje/dekrementiranje za jednu sekundu 
 - pod “negativnim” vremenom se podrazumeva vreme koje je prošlo. 
 
 Naprimer, vrednost -90 označava da se događaj desio pre 90 sekundi. 
 Prilikom ispisa ovo vreme ispisati kao - 1m : 30s
 
 
*/


#include "Vreme.hpp"

int main()
{
    Vreme v1, v2(10), v3(20, 30), v4(40, 50, 60), v5(v4);
    
    cout << "Vreme 1: " << v1;
    cout << "Vreme 2: " << v2;
    cout << "Vreme 3: " << v3;
    cout << "Vreme 4: " << v4;
    cout << "Vreme 5: " << v5;
    
    cout << endl;
    
    // poziv preklopljenog operatora za proveru jednakosti
    cout << "Vreme 4 == Vreme 5 " << ((v4 == v5) ? "Da" : "Ne") << endl;
    
    // poziv preklopljenog operatora za proveru nejednakosti
    cout << "Vreme 4 != Vreme 5 " << ((v4 != v5) ? "Da" : "Ne") << endl;
    
    // poziv preklopljenog operatora <
    cout << "Vreme 4 < Vreme 5 " << ((v4 < v5) ? "Da" : "Ne") << endl;
    
    // poziv preklopljenog operatora <=
    cout << "Vreme 4 <= Vreme 5 " << ((v4 <= v5) ? "Da" : "Ne") << endl;
    
    // poziv preklopljenog operatora >
    cout << "Vreme 4 > Vreme 5 " << ((v4 > v5) ? "Da" : "Ne") << endl;
    
    // poziv preklopljenog operatora >=
    cout << "Vreme 4 >= Vreme 5 " << ((v4 >= v5) ? "Da" : "Ne") << endl;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    cout << "Vreme 2: " << v2;
    cout << "Vreme 1 = Vreme 2" << endl;
    
    // poziv preklopljenog operatora dodele =
    v1 = v2;
    cout << "Vreme 1: " << v1;
    cout << "Vreme 2: " << v2;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora prefiksni ++
    cout << "Vreme 1: ++v1 " << ++v1;
    cout << "Vreme 1: " << v1;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora postfiskni ++
    cout << "Vreme 1: v1++ " << v1++;
    cout << "Vreme 1: " << v1;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora prefiksni --
    cout << "Vreme 1: --v1 " << --v1;
    cout << "Vreme 1: " << v1;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora postfiksni --
    cout << "Vreme 1: v1-- " << v1--;
    cout << "Vreme 1: " << v1;
    
    cout << endl;
    cout << "Vreme 1: " << v1;
    cout << "Vreme 4: " << v4;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenih operatora - i =
    v3 = v1 - v4;
    cout << "v3 = v1 - v4: " << v3;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    cout << "Vreme 4: " << v4;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenih operatora + i =
    v3 = v1 + v4;
    cout << "v3 = v1 + v4: " << v3;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenog operatora -=
    v3 -= v1;
    cout << "v3 -= v1: " << v3;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenog operatora +=
    v3 += v1;
    cout << "v3 += v1: " << v3;
    
    cout << endl;
    
    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora +=
    cout << "Unesite novu vrednost sekundi za objekat 'Vreme 1': ";
    cin >> v1;
    cout << "Vreme 1: " << v1;
    
    return 0;
}
