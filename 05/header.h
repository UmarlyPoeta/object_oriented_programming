#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

class TUlamek {
private:
    int licznik;
    int mianownik;

public:
    TUlamek(int l, int m);
    TUlamek(int liczba_calkowita);

    int getLicznik() const;
    int getMianownik() const;
    void wyswietl() const;

    operator float() const;
};

TUlamek Mnozenie(const TUlamek& a, const TUlamek& b);
TUlamek Mnozenie(const TUlamek& a, int liczba);
float Kwadrat(float x);

class TZespolona {
private:
    double rzeczywista;
    double urojona;

public:
    TZespolona(double r = 0, double u = 0);
    friend void Pokaz(const TZespolona& z);
};

class Stone_weight {
private:
    static const int ilosc_funtow_na_kamien = 14;
    int kamien;
    double reszta_w_funtach;
    double masa_w_funtach;

public:
    Stone_weight();
    Stone_weight(double funty);
    Stone_weight(int kamienie, double funty);

    void pokazFunty() const;
    void pokazKamienie() const;
};

class Fahrenheit {
private:
    float temperatura_Fahrenheita;

public:
    Fahrenheit(float tempC);
    operator int() const;
};

#endif