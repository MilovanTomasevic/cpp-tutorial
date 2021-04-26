//
//  evidencijaLekova.hpp
//  Zadatak29Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef EVIDENCIJALEKOVA_HPP_INCLUDED
#define EVIDENCIJALEKOVA_HPP_INCLUDED

#include "lek.hpp"
#include "list.hpp"

class EvidencijaLekova{
private:
    DinString nazivApoteke;
    DinString datum;
    List<Lek> evidencija;
    
public:
    EvidencijaLekova() : nazivApoteke("Gradska apoteka"), datum("01.01.2017.") {}
    
    DinString getNazivApoteke() const {
        return nazivApoteke;
    }
    
    DinString getDatum() const {
        return datum;
    }
    
    void setNazivApoteke(const DinString& pNazivApoteke) {
        nazivApoteke = pNazivApoteke;
    }
    
    void setDatum(const DinString& pDatum) {
        datum = pDatum;
    }
    
    bool dodajLek(){
        bool ret = false;
        long pJkl;
        char pNaziv[100];
        double pJedinicnaCena;
        int pKolicina;
        
        
        cout << "Unesite jedinstveni kljuc leka (sifru leka): ";
        cin >> pJkl;
        
        cout << endl << "Unesite naziv leka: ";
        cin >> pNaziv;
        
        cout << endl << "Unesite jedinicnu cenu leka: ";
        cin >> pJedinicnaCena;
        
        cout << endl << "Unesite kolicinu leka: ";
        cin >> pKolicina;
        
        cout << endl;
        
        Lek l(pJkl, pNaziv, pJedinicnaCena, pKolicina);
        
        ret = evidencija.add(evidencija.size() + 1, l);
        
        return ret;
    }
    
    bool dodajPostojeciLek(const Lek& l) {
        bool ret = false;
        
        ret = evidencija.add(1, l);
        
        return ret;
    }
    
    bool ukloniLek(int position){
        return evidencija.remove(position);
    }
    
    void sortLekovaPoJedinicnojCeni(){
        Lek l1, l2;
        
        for(int i = 1; i < evidencija.size(); i++) {
            
            for(int j = i + 1; j <= evidencija.size(); j++) {
                evidencija.read(i, l1);
                evidencija.read(j, l2);
                
                if(l1.getJedinicnaCena() > l2.getJedinicnaCena()) {
                    evidencija.remove(i);
                    evidencija.add(i, l2);
                    evidencija.remove(j);
                    evidencija.add(j, l1);
                }
            }
        }
    }
    
    void ispis() const {
        cout << endl << "********************************************************" << endl;
        cout << "Naziv apoteke: " << getNazivApoteke() << " ; datum: " << getDatum() << " ;" << endl;
        
        if(evidencija.empty()){
            cout << "Nema lekova u apoteci." << endl;
        } else {
            Lek l;
            
            for(int i=1; i<=evidencija.size(); i++){
                evidencija.read(i, l);
                l.ispis();
            }
        }
        
        cout << "********************************************************" << endl << endl;
    }
    
};

#endif // EVIDENCIJALEKOVA_HPP_INCLUDED
