#include <iostream>
#include <cstdlib>
#include <cstring>

#include "angajat.h"

using namespace std;

void Angajat::init() {
    if(nume != NULL) {
        delete [] nume;
        nume = NULL;
    }

    strcpy(id, "0000");

    salariu_baza = 0;

    for(int i = 0; i < 4; i++) {
        spor_salariu[i] = 0;
    }
}

void Angajat::citire() {
    // cout<<"\n -> Angajat::citire():";
    
    cout<<"\n- Nume: ";
    char temp[100];
    cin>>temp;
    nume = new char[strlen(temp) + 1];
    strcpy(nume, temp);

    cout<<"\n- ID: ";
    cin>>id;

    cout<<"\n- Salariu de baza: ";
    cin>>salariu_baza;

    cout<<"\n- Spor Salariu [4]: ";
    for(int i = 0; i < 4; i++) {
        cin>>spor_salariu[i];
    }
}

void Angajat::afisare() const {
    // cout<<"\n-> Angajat::afisare():";
    cout<<"\n- Nume: "<<nume;
    cout<<"\n- ID: "<<id;
    cout<<"\n- Salariu de baza: "<<salariu_baza;
    cout<<"\n- Spor salariu: ";
    for(int i = 0; i < 4; i++) {
        cout<<spor_salariu[i]<<' ';
    }
}

void Angajat::modificare(char new_id[]) {
    // cout<<"\n-> Angajat::modificare(char []):";
    strcpy(id, new_id);
}

void Angajat::modificare(const Angajat &a) {
    // cout<<"\n-> Angajat::modificare(const Angajat &):";
    if(nume != NULL) {
        delete [] nume;
        nume = NULL;
    }
    nume = new char[strlen(a.nume) + 1];
    
    if(a.nume != NULL) {
        strcpy(nume, a.nume);
    }

    strcpy(id, a.id);

    salariu_baza = a.salariu_baza;

    for(int i = 0; i < 4; i++) {
        spor_salariu[i] = a.spor_salariu[i];
    }
}

void Angajat::modificare(int poz, float val) {
    // cout<<"\n-> Angajat::modificare(int, float):";
    spor_salariu[poz] = val;
}

float Angajat::salariu() {
    // cout<<"\n-> Angajat::salariu(const Angajat &):";
    float salariu = 0;
    salariu += salariu_baza;
    for(int i = 0; i < 4; i++) {
        salariu += spor_salariu[i];
    }
    return salariu;
}