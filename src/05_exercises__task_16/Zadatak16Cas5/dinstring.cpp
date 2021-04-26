//
//  dinstring.cpp
//  Zadatak16Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


#include "dinstring.hpp"

DinString::DinString() {
    duzina = 0;
    text = NULL; //zato sto je pokazivac
}

DinString::DinString(const char ulaz[]) {
    duzina = 0;
    while(ulaz[duzina] != '\0')               // \0 - nalazi se na kraju i oznacava kraj stringa
        duzina++;                             //merimo duzinu stringa
    
    //punimo niz
    text = new char[duzina + 1];               //alociramo memoriju + 1 zbog \0
    for(int i = 0; i < duzina; i++)             // < duzina , ne = jer je poslenje mesto \0 to stavljamo na kraju
        text[i] = ulaz[i];                     //vrsi kopiranje
    
    text[duzina] = '\0';                        //stavimo na kraj niza \0
}

DinString::DinString(const DinString& ds) {
    duzina = ds.duzina;
    
    text = new char[duzina + 1];             // +1 obezbedjujemo kraj
    for(int i = 0; i < duzina; i++)
        text[i] = ds.text[i];
    
    text[duzina] = '\0';
}

DinString::~DinString() {
    delete[] text;
}

int DinString::length() const {               //get vraca duzinu
    return duzina;
}

char& DinString::operator[] (int i) {          // prima broj a vraca string koji se nalazi na toj poziciji
    return text[i];                            // s= 'Milovan'   s[3]= 'o' 0123 na cetvrtom mestu je slovo O
}

char DinString::operator[] (int i) const {     // citas i smestas
    return text[i];
}

DinString& DinString::operator=(const DinString& ds) {
    if(this != &ds) {                          // a ako su isti samo vrati pokazivac na domaci *this
        delete[] text;                        //oslobodis gde ces da upises i onda sve kao konstruktor kopije
        duzina = ds.duzina;
        text = new char[duzina + 1];
        for (int i = 0; i < duzina; i++)
            text[i] = ds.text[i];
        
        text[duzina] = '\0';
    }
    
    return *this;                             // a ako su isti samo vrati pokazivac na domaci *this
}

DinString& DinString::operator+=(const DinString& ds) {
    int i;
    char *tempText = new char[duzina + ds.duzina + 1];  //dinamicna alokacija pravimo nov zbog rezultata - pokazivac
    for (i = 0; i < duzina; i++)
        tempText[i] = text[i];
    for (i = 0; i < ds.duzina; i++)              // prolazi kroz duzinu DRUGOG stringa
        tempText[duzina + i] = ds.text[i];       //upisuje nakon prve duzine, karakter po karakter i pomera svaki for za jedno mesto
    tempText[duzina + ds.duzina] = '\0';
    
    duzina += ds.duzina;
    
    delete[] text;                               //oslobodi ono sto je bilo
    text = tempText;                             // i dodeljuje ono sto treba da bude vraca text zbog a+=b
    
    return *this;
}

bool operator==(const DinString& ds1, const DinString& ds2){
    if(ds1.duzina != ds2.duzina)
        return false;
    
    for(int i = 0; i < ds1.duzina; i++)
        if(ds1.text[i] != ds2.text[i])
            return false;
    
    return true;
}

bool operator!=(const DinString& ds1, const DinString& ds2){
    if(ds1.duzina != ds2.duzina)
        return true;
    
    for(int i = 0; i < ds1.duzina; i++)
        if(ds1.text[i] != ds2.text[i])
            return true;
    
    return false;
}

DinString operator+(const DinString& ds1, const DinString& ds2){
    DinString temp;
    temp.duzina = ds1.duzina + ds2.duzina;
    
    temp.text = new char[temp.duzina + 1];
    
    int i;
    for(i = 0; i < ds1.duzina; i++)
        temp.text[i] = ds1.text[i];
    
    for(i = 0; i < ds2.duzina; i++)
        temp.text[ds1.duzina + i] = ds2.text[i];
    temp.text[temp.duzina] = '\0';
    
    return temp;                        // vraca temp zbog a=b+c
    
}



ostream& operator<<(ostream& out, const DinString& ds) {
    if(ds.duzina > 0)
        out << ds.text;
    
    return out;
}
