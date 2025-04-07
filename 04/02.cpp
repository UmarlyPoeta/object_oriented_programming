#include <iostream>

class TKlasa; 

void f_Zaprzyjaźniona(TKlasa& obj);

class TZaprzyjaźniona_Klasa {
public:
    void modyfikuj_i_wyswietl(TKlasa& obj);
};

class TKlasa {
private:
    int wartosc;

    friend class TZaprzyjaźniona_Klasa;
    friend void f_Zaprzyjaźniona(TKlasa& obj);

public:
    TKlasa(int val) : wartosc(val) {}
};

void TZaprzyjaźniona_Klasa::modyfikuj_i_wyswietl(TKlasa& obj) {
    std::cout << "Pierwotna wartość: " << obj.wartosc << std::endl;
    obj.wartosc += 10; 
    std::cout << "Zmieniona wartość: " << obj.wartosc << std::endl;
}

void f_Zaprzyjaźniona(TKlasa& obj) {
    obj.wartosc *= 2; 
    std::cout << "Wartość po modyfikacji w f_Zaprzyjaźniona: " << obj.wartosc << std::endl;
}

int main() {
    TKlasa obj(5); 

    TZaprzyjaźniona_Klasa zaprzyjazniona_klasa;
    zaprzyjazniona_klasa.modyfikuj_i_wyswietl(obj); 
    f_Zaprzyjaźniona(obj);

    return 0;
}