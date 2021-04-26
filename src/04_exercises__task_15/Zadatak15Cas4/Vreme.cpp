//
//  Vreme.cpp
//  Zadatak15Cas4
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//


#include "Vreme.hpp"

// prazan konstruktor
Vreme::Vreme(){
    sekunde = 0;
}

// konstruktor sa parametirma: sekunde
Vreme::Vreme(int s){
    sekunde = s;
}

// konstruktor sa parametrima: sekunde, minuti
Vreme::Vreme(int s, int m){
    sekunde = s + 60 * m;
}

// konstruktor sa parametrima: sekunde, minuti, sati
Vreme::Vreme(int s, int m, int h){
    sekunde = s + 60 * m + 3600 * h;
}

// konstruktor kopije
Vreme::Vreme(const Vreme& v){
    sekunde = v.sekunde;
}

Vreme& Vreme::operator=(const Vreme &v){
    sekunde = v.sekunde;
    return *this;
}

Vreme& Vreme::operator+=(const Vreme &v){
    sekunde += v.sekunde;
    return *this;
}

Vreme& Vreme::operator-=(const Vreme &v){
    sekunde -= v.sekunde;
    return *this;
}

//zato sto je firend
Vreme operator+(const Vreme& v1, const Vreme& v2){ //koristimo to sto smo vec preklopili +=
    Vreme v(v1);
    v += v2; //gore smo preklopili +=bpa zato ovako da pokazemo da moze
    return v;
    
//    ili
//    Vreme v();
//    v=v1+v2;
//    return v;
    
    
}

Vreme operator-(const Vreme& v1, const Vreme& v2){ //koristimo to sto smo vec preklopili -=
    Vreme v(v1);
    v -= v2;
    return v;
}

const Vreme& Vreme::operator++(){
    ++sekunde; //uvecava za sekundu
    return *this;
}

const Vreme Vreme::operator++(int){
    Vreme v(sekunde);
    ++sekunde; //uvecava za sekundu
    return v;
}

const Vreme& Vreme::operator--(){
    --sekunde; //umanjuje za sekundu
    return *this;
}

const Vreme Vreme::operator--(int){
    Vreme v(sekunde);
    --sekunde; //umanjuje za sekundu
    return v;
}

bool operator==(const Vreme& v1, const Vreme& v2){
    return v1.sekunde == v2.sekunde;
}

bool operator!=(const Vreme& v1, const Vreme& v2){  //koristimo to sto smo vec preklopili ==
    return !(v1 == v2);
}

bool operator<(const Vreme& v1, const Vreme& v2){
    return v1.sekunde < v2.sekunde;
}

bool operator<=(const Vreme& v1, const Vreme& v2){
    return v1.sekunde <= v2.sekunde;
}

bool operator>(const Vreme& v1, const Vreme& v2){
    return v1.sekunde > v2.sekunde;
}

bool operator>=(const Vreme& v1, const Vreme& v2){
    return v1.sekunde >= v2.sekunde;
}

ostream& operator<<(ostream& os, const Vreme& v){
    
    int h = 0, m = 0, s = 0;
    
    os << "Proteklo vreme: ";
    
    
    
    /*  primer za 3665 sekundi
     
     korak 1 za h 
     3665 / 3600 = 1,01805556 
     posto je tipa int on uzima samo 1 i znamo da je jedan sat
     
     korak 2 za minute
     3665 po modulu (% ostatak pri delenju) 3600
     3665 / 3600 = 1,01805556
     1,01805556 - 1 = 0,01805556 //posle zareza zato -1
     0,01805556 * 3600 = 65 to je ostatak
     65/60 = 1,08333333 to znaci da imam 1minut
     
     korak 3 za sekunde
     1,08333333 - 1 = 0,08333333
     0,08333333 * 60 = 5 i to su sekunde
     
     
     ili jednostavnije
     
     ostream& operator<<(ostream &out, const Vreme &a){
     int m=0;
     int h=0;
     int s=a.sekunde;
     if(s<60){
     out<<s<<"s";
     }else{
     
     while(s>60){
     s=s-60;
     m++;
     }
     
     while(m>60){
     m=m-60;
     h++;
     }
     out<<h<<"h "<<m<<"m "<<s<<"s ";
     }
     return out;
     }
     
     */
    
    if(v.sekunde != 0){ //ako je jednak 0 onda ne treba menjati
        h = abs((v.sekunde / 3600));
        m = abs((v.sekunde % 3600) / 60);
        s = abs((v.sekunde % 3600) % 60);
        
        if(v.sekunde < 0)
            os << " - ";
        
        if(h != 0)
            os << h << "h : ";
        
        if(m != 0)
            os << m << "m : ";
    }
    
    os << s << "s" << endl;
    
    return os;
}

istream& operator>>(istream& is, Vreme& v){
    is >> v.sekunde;
    return is;
}
