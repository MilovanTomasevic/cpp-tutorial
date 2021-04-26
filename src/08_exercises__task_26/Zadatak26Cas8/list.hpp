//
//  list.hpp
//  Zadatak26Cas8
//
//  Created by Milovan Tomasevic on 19/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef LIST_DEF
#define LIST_DEF

#include <stdlib.h>
#include <iostream>

using namespace std;

template <class T>
class List{
private:
    struct listEl{
        T content;           // sadrzaj elementa
        struct listEl* next;
    };
    listEl *head;           // sadrzaj objekta
    listEl *tail;
    int noEl;
    
public:
    List(){
        head=tail=NULL;
        noEl=0;
    }
    
    List(const List<T>&);
    
    List<T>& operator=(const List<T>&);
    
    virtual ~List();
    
    int size() const { return noEl; }
    
    bool empty() const { return head == NULL ? 1 : 0; }
    
    bool add(int, const T&);
    
    bool remove(int);
    
    bool read(int, T&)const;
    
    void clear();
};


template <class T>
ostream& operator<<(ostream& out, const List<T>& rl) {
    out << endl;
    out << "--------" << endl;
    for(int i = 1; i <= rl.size(); i++){
        if(i != 1) out << ", ";
        T res;                                // T res u koji smestamo procitano i ispisujemo i sve tako dok ima
        rl.read(i, res);
        out << res;
    }
    out << endl << "--------" << endl;
    return out;
}

template <class T>
List<T>::List(const List<T>& rl) {
    head = NULL;
    tail = NULL;
    noEl = 0;
    
    for(int i = 1; i <= rl.noEl; i++){
        T res;
        if(rl.read(i, res))
            add(i, res);
    }
}

template <class T>
List<T>& List<T>::operator=(const List<T>& rl) {
    if(this != &rl) {
        clear();
        head = NULL;
        tail = NULL;
        noEl = 0;
        
        for(int i = 1; i <= rl.noEl; i++){
            T res;
            if(rl.read(i, res))
                add(i, res);
        }
    }
    return *this;
}

template <class T>
List<T>::~List() {
    while(!empty())
        remove(1);
}

template <class T>
bool List<T>::add(int n, const T& newContent) {
    if(n < 1 || n > noEl + 1)                        //provera: da li je trazena pozicija-n validna
        return false;
    else {
        listEl* newEl = new listEl;                 // ako jeste kreira element
        if(newEl == NULL)
            return false;
        else {
            newEl->content = newContent;            // ubacujemo u sadrzaj elementa, koji smo kreirali, ono sto smo prosledili
            if(n == 1) {                            // ako ga ubacujemo na prvo mesto
                newEl->next = head;                 // novi element pokazuje isto gde i head (na prvi element u listi koji ce postati drugi)
                head = newEl;                       // i glava sada pokazuje na prvi element(novi) - sadrzi njegovu adresu
            } else if(n == noEl + 1) {              // ako ce na poslednje mesto (posle zadnjeg)
                newEl->next = NULL;                 // onda poslednji element nema pokazivac
                tail->next = newEl;                 // a rep pokazuje na taj element pa je zato on onda na poslednjem mestu
            } else {
                listEl* temp = head;                // ako ga stavlja bilo gde
                for(int i = 2; i < n; i++)          // od drugog do mesta kojeg dodajemo
                    temp = temp->next;              // trazimo poziciju jedno mesto pre, pozicija-1
                newEl->next = temp->next;           // novi element pokazuje na ono nasta pokazuje temp a to je na poziciju koju stavljamo element
                temp->next = newEl;                 // prednodni pokazuje na novi
            }
            noEl++;
            if(newEl->next == NULL)
                tail = newEl;
            return true;
        }
    }
}

template <class T>
bool List<T>::remove(int n){
    if(n < 1 || n > noEl)
        return false;
    else {
        if(n == 1) {                         // ako brisemo prvi element
            listEl* del = head;
            head = head->next;
            if(tail == del)
                tail = NULL;
            delete del;
            noEl--;
        } else {
            listEl* temp = head;
            for(int i = 2; i < n; i++)
                temp = temp->next;          // idemo do elementa kojeg cemo obrisati
            listEl* del = temp->next;       // kazemo da je del bas taj element koji brisemo
            temp->next = del->next;         // i onda temp nam pokazuje gde nam je pokazivao obrisani element - tako samo prevezali 
            if(tail == del)
                tail = temp;
            delete del;
            noEl--;
        }
        return true;
    }
}

template <class T>
bool List<T>::read(int n,T& retVal) const {
    if(n < 1 || n > noEl)
        return false;
    else {
        if(n == 1)
            retVal = head->content;
        else if(n == noEl)
            retVal = tail->content;
        else {
            listEl* temp = head;
            for(int i = 1; i < n; i++)
                temp = temp->next;               // dodjemo do pozicije-1
            retVal = temp->content;             // tamo gde on pokazuje tu je vrednost koju citamo
        }
        return true;
    }
}

template <class T>
void List<T>::clear() {
    while(!empty())
        remove(1);
}

#endif
