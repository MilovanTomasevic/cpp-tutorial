//
//  trezor.hpp
//  Zadatak25Cas7
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef TREZOR_HPP_INCLUDED
#define TREZOR_HPP_INCLUDED

template <class SADRZAJ, int KAPACITET>
class Trezor {
    
private:
    SADRZAJ sefovi[KAPACITET];            //Maksimalan broj sefova u trezoru, u svakom sefu mozemo imati max jedan predmet(sadrzaj)
    bool popunjenost[KAPACITET];         //pomocni niz za belezenje stanja - kada obrisemo neki element pa opet hocemo da upisemo na prvo prazno mesto
    
public:
    Trezor() {
        for(int i = 0; i < KAPACITET; i++) {
            popunjenost[i] = false; // false ce nam oznacavati prazan sef, a true zauzet sef
        }
    }
    
    int getBrojPopunjenihSefova() {
        int n = 0;
        for(int i = 0; i < KAPACITET; i++) {
            if(popunjenost[i]) {                  //kada je i=1 true
                n++;
            }
        }
        return n;
    }
    
    int ubaciSadrzaj(const SADRZAJ& predmet) {
        int ret = -1;
        for(int i = 0; i < KAPACITET; i++) {
            if(!popunjenost[i]) {               //kada nije true , kada je false - prazni sefovi
                popunjenost[i] = true;           // postavljanje mesta da je zauzeto sa TRUE
                sefovi[i] = predmet;             // i onda u trezoru na i-tom sefu stavi predmet
                ret = i;
                break;
            }
        }
        return ret;
    }
    
    bool izbaciSadrzaj(int sef) {
        bool ret = false;
        if(popunjenost[sef]) {                 //sadrzaj izbacujemo tako sto menjamo stanje sefa = true->false
            popunjenost[sef] = false;
            ret = true;
        }
        return ret;
    }
};


#endif // TREZOR_HPP_INCLUDED
