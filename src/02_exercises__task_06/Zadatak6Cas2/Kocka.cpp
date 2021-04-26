//
//  Kocka.cpp
//  Zadatak6Cas2
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#include "Kocka.hpp"

// prazan konstruktor
Kocka::Kocka(){
    srand(time(0)); //da ne bi uvek generisao slucajne brojeve istim redosledom
    
    val = 1;
}

// konstruktor sa parametrima
Kocka::Kocka(int i){
    srand(time(0)); //da ne bi uvek generisao slucajne brojeve istim redosledom
    
    val = i;
}

// konstruktor kopije
//const u zagradi - da ne menjamo gosta k.val = 6 NE SME
Kocka::Kocka(const Kocka &k){
    srand(time(0)); //da ne bi uvek generisao slucajne brojeve istim redosledom
    
    val = k.val;
}

void Kocka::baci(){
    // formula po kojoj se koristi rand() funkcija je rand()%X+Y
    // gde X predstavlja gornju granicu, a Y donju
    val = rand() % 6 + 1;
}

//Ne sme da menja gosta
int Kocka::getVrednost() const{
    return val;
}

