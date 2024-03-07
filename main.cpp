#include <iostream>
#include <cstring>
#include "angajat.h"
using namespace std;

int main()
{
    // 1. 
    int n;
    cout<<"Dimensiune vector angajati: ";
    cin>>n;

    Angajat *a;
    a = new Angajat[n];

    for(int i = 0; i < n; i++) {
        a[i].init();
        a[i].citire();
    }

    // 2.
    for(int i = 0; i < n; i++) {
        a[i].afisare();
    }

    // 3.
    a[0].modificare(a[1]);

    // 4.
    char *new_id;
    new_id = new char[5];
    strcpy(new_id, "1311");
    a[0].modificare(new_id);

    // 5.
    int poz = 0;
    float val = 7.5;
    a[0].modificare(poz, val);

    cout<<"\n\n Sortare: \n";
    // 6.
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i].salariu() > a[j].salariu()) {
                Angajat aux;
                aux.init();
                aux.modificare(a[i]);
                a[i].modificare(a[j]);
                a[j].modificare(aux);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        a[i].afisare();
    }

    return 0;
}