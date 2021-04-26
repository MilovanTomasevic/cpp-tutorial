//
//  main.cpp
//  Zadatak26Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 U programskom jeziku C++ napisati generičku klasu List koja modeluje jednostruko spregnutu listu, čiji su elementi tipa T.
 Generičku klasu List testirati sa konkretizacijom List<int> i List<DinString>.
 
*/


#include "list.hpp"
#include "dinstring.hpp"

int main(){
    List<int> intLista;
    
    intLista.add(1, 10);
    intLista.add(2, 20);
    intLista.add(3, 30);
    intLista.add(4, 40);
    intLista.add(5, 50);
    
    cout << "LIST NAPUNJENA SA PODACIMA int TIPA" << endl;
    cout << "KONKRETIZACIJA -> List<int>" << endl;
    cout << endl;
    cout << intLista << endl;
    
    List<DinString> dinLista;
    
    DinString ds1("Mleko 1l");
    DinString ds2("Kafa 100g");
    DinString ds3("Ratluk 250gr");
    DinString ds4("Lav Pivo 2l");
    DinString ds5("Orbit zvake");
    
    dinLista.add(1, ds1);
    dinLista.add(2, ds2);
    dinLista.add(3, ds3);
    dinLista.add(4, ds4);
    dinLista.add(5, ds5);
    
    cout << "LIST NAPUNJENA SA PODACIMA DinString TIPA" << endl;
    cout << "KONKRETIZACIJA -> List<DinString>" << endl;
    cout << endl;
    cout << dinLista << endl << endl;
    
    cout << "CITANJE SVIH ELEMENATA, POZIV read() METODE" << endl;
    DinString ds;
    for(int i = 1; i <= dinLista.size(); i++){
        dinLista.read(i, ds);
        cout << "Element na poziciji i=" << i << " " << "je: " << ds << endl;
    }
    
    cout << endl;
    cout << "VELICINA LISTE: " << dinLista.size() << endl << endl;
    cout << "poziv clear() metode " << endl << endl;
    dinLista.clear();
    cout << "VELICINA LISTE: " << dinLista.size() << endl;
    
    return 0;
}
