#include "header.h"

TUlamek::TUlamek(int l, int m) : licznik(l), mianownik(m) {}
TUlamek::TUlamek(int liczba_calkowita) : licznik(liczba_calkowita), mianownik(1) {}

int TUlamek::getLicznik() const { return licznik; }
int TUlamek::getMianownik() const { return mianownik; }

void TUlamek::wyswietl() const {
    cout << licznik << "/" << mianownik;
}

TUlamek::operator float() const {
    return static_cast<float>(licznik) / mianownik;
}

TUlamek Mnozenie(const TUlamek& a, const TUlamek& b) {
    return TUlamek(a.getLicznik() * b.getLicznik(), a.getMianownik() * b.getMianownik());
}

TUlamek Mnozenie(const TUlamek& a, int liczba) {
    return TUlamek(a.getLicznik() * liczba, a.getMianownik());
}

float Kwadrat(float x) {
    return x * x;
}

TZespolona::TZespolona(double r, double u) : rzeczywista(r), urojona(u) {}

void Pokaz(const TZespolona& z) {
    cout << "[" << z.rzeczywista << ", " << z.urojona << "]\n";
}

Stone_weight::Stone_weight() : kamien(0), reszta_w_funtach(0), masa_w_funtach(0) {}

Stone_weight::Stone_weight(double funty) {
    kamien = static_cast<int>(funty) / ilosc_funtow_na_kamien;
    reszta_w_funtach = static_cast<int>(funty) % ilosc_funtow_na_kamien + (funty - static_cast<int>(funty));
    masa_w_funtach = funty;
}

Stone_weight::Stone_weight(int kamienie, double funty) : kamien(kamienie), reszta_w_funtach(funty) {
    masa_w_funtach = kamienie * ilosc_funtow_na_kamien + funty;
}

void Stone_weight::pokazFunty() const {
    cout << masa_w_funtach << " funtów\n";
}

void Stone_weight::pokazKamienie() const {
    cout << kamien << " kamieni i " << reszta_w_funtach << " funtów\n";
}

Fahrenheit::Fahrenheit(float tempC) {
    temperatura_Fahrenheita = tempC * 9.0 / 5 + 32;
}

Fahrenheit::operator int() const {
    return static_cast<int>((temperatura_Fahrenheita - 32) * 5.0 / 9 + 273.15);
}
