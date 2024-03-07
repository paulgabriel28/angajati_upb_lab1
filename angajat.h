#pragma once

struct Angajat {
    // implicit ar fi publice, dar nu vreau ca
    // oricine să poată modifica aceste campuri -> private
    
    private:
        char *nume;
        char id[5];
        float salariu_baza;
        // spor de stres, mediu toxic, munca suplimentara, vechime
        float spor_salariu[4];
    
    // dacă nu as face metodele publice, ar fi private ca și câmpurile
    // și nu as putea sa interactionez cu datele stocate
    public:
        // initializeaza fiecare camp cu 0 sau NULL
        void init();
        
        // citeste de la tastatura datele unui angajat
        void citire();
        
        // afișează informatii angajat
        void afisare() const;
        
        // modifica id angajat
        void modificare(char []);
        
        // modifica toate campurile folosind valorile stocate in
        // variabila Angajat data ca parametru
        void modificare(const Angajat &);
        
        // modifica valoarea de pe o anumita pozitie din vectorul de
        // sporuri (primul parametru), iar noua valoare e
        // transmisa in al doilea parametru
        void modificare(int, float);

        // * procesare salariu [ sortare (Lab1 -> 6) ]
        float salariu();
};