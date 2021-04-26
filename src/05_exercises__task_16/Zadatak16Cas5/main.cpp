//
//  main.cpp
//  Zadatak16Cas5
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

/*

 DinString
 
*/


#include "dinstring.hpp"

int main(){
    DinString a, b("Dobar"), c("dan");
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    
    cout << endl << "Testiranje +=" << endl;
    cout << "a+=b: " << (a += b) << endl;
    cout << "a+=c: " << (a += c) << endl;
    
    cout << endl << "Testiranje +" << endl;
    cout << "a=b+c: " << (a = b + c) << endl;
    cout << "a=b+\" \"+c: " << (a = b + " " + c) <<endl;
    
    cout << endl <<"Testiranje []" << endl;
    char x = a[5];
    cout << "x=a[5] x: " << x << endl;
    a[5] = 'Z';
    cout << "Izvrseno a[5]='Z', sada je a: " << a << endl;
    
    cout << endl << "Testiranje ==, = i !=" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a==b? " << (a == b) << endl;
    cout << "a!=b? " << (a != b) << endl;
    a = b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    return 0;
}

