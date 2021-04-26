//
//  main.cpp
//  Zadatak24Cas7
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 U programskom jeziku C++ napisati generičku klasu Niz koja modeluje niz koji je dužine D i tipa T.
 Generičku klasu Niz testirati sa konkretizacijom Niz <int, 10>.
 
 
 HELP:
 Korisni je imati mehanizam pomocu kojeg mozemo napisati klasu koja modeluje niz ciji cu elementi nekog tipa T,
 a kasnije ukoliko zelimo niz celih brojeva tada mozemo reci da je tip T ustvari tip INT odnosno ako zelimo niz realnih brojeva
 tada mozemo reci da je tip T tipa DOUBLE. 
 
 Generickim klasama opisujemo opsti slucaj - bez upotrebe konkretnih tipova.
 
*/

#include "niz.hpp"

int main()
{
    
    Niz<int,10> iNiz1, iNiz2;
    
    iNiz1.insertNiz(1);
    iNiz1.insertNiz(2);
    iNiz1.insertNiz(3);
    iNiz1.insertNiz(4);
    iNiz1.insertNiz(5);
    iNiz1.insertNiz(6);
    iNiz1.printNiz();
    
    iNiz2 = iNiz1;
    if(iNiz1 == iNiz2)
        cout << "iNiz1 i iNiz2 su jednaki" << endl;
    else
        cout << "iNiz1 i iNiz2 nisu jednaki" << endl;
    
    return 0;
}
