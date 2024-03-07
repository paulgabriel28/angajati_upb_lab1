# Laborator 1 - Evidenta Angajatilor

Acest proiect implementează un sistem simplu de evidență a angajaților pentru o firmă. Scopul este de a stoca și gestiona detaliile angajaților, precum nume, ID-uri, salarii de bază și diverse tipuri de sporuri.

## Cerință

Cerința laboratorului presupune următoarele aspecte:

1. Stocarea angajaților într-un vector alocat dinamic, cu datele introduse de la tastatură.
2. Afișarea tuturor detaliilor despre toți angajații.
3. Posibilitatea de a modifica datele unui angajat folosind informațiile unui alt angajat.
4. Modificarea ID-ului unui angajat.
5. Modificarea valorii pentru orice tip de spor pentru un anumit angajat.
6. Sortarea tuturor angajaților în funcție de salariul total (salariul de bază + toate sporurile).

## Structura Proiectului

- **angajat.h**: Fișierul header conține definiția structurii Angajat împreună cu funcțiile membre asociate.
- **angajat.cpp**: Implementarea metodelor definite în fișierul header.
- **main.cpp**: Fișierul principal al proiectului, care conține funcția `main` și testează funcționalitatea metodelor.

## Mod de Utilizare

Pentru a rula proiectul:

1. Compilați și rulați proiectul într-un mediu de dezvoltare C++.
2. Introduceți dimensiunea vectorului de angajați și detalii pentru fiecare angajat.
3. Proiectul va afișa detaliile angajaților și va efectua operațiile cerute, inclusiv sortarea acestora după salariul total.

## Observații

- Proiectul este construit conform specificațiilor date în cerință, asigurând stocarea și gestionarea eficientă a datelor angajaților.
- Se recomandă să se testeze și să se verifice fiecare funcționalitate înainte de a proceda la etapa următoare.
