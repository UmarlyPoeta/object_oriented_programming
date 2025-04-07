#include <iostream>
#include <string>

using namespace std;

class Portfel {
private:
    double saldo;

public:
    Portfel() : saldo(0.0) {}
    Portfel(double initialSaldo) : saldo(initialSaldo) {}

    void depozyt(double kwota) {
        saldo += kwota;
    }

    void wyplata(double kwota) {
        if (kwota <= saldo) {
            saldo -= kwota;
        } else {
            cout << "Niewystarczające środki na koncie." << endl;
        }
    }

    double pobierzSaldo() const {
        return saldo;
    }
};

class Produkt {
private:
    string nazwa;
    double cena;
    int ilosc;
    int* id;

public:
    Produkt() : nazwa(""), cena(0.0), ilosc(0), id(new int(rand())) {}
    Produkt(const string& nazwa) : nazwa(nazwa), cena(0.0), ilosc(0), id(new int(rand())) {}
    Produkt(const string& nazwa, double cena, int ilosc) : nazwa(nazwa), cena(cena), ilosc(ilosc), id(new int(rand())) {}
    ~Produkt() {
        delete id;
    }

    void drukuj() const {
        cout << "Produkt: " << nazwa << ", Cena: " << cena << ", Ilosc: " << ilosc << ", ID: " << *id << endl;
    }
};
class Magazyn {
private:
    string nazwaProduktu;
    int liczbaSztuk;

public:
    Magazyn() : nazwaProduktu(""), liczbaSztuk(0) {}
    Magazyn(const string& nazwa) : nazwaProduktu(nazwa), liczbaSztuk(0) {}
    Magazyn(const string& nazwa, int liczba) : nazwaProduktu(nazwa), liczbaSztuk(liczba) {}

    void dodajTowar(int sztuk) {
        liczbaSztuk += sztuk;
    }
    void drukuj() const {
        cout << "Magazyn: " << nazwaProduktu << ", Liczba sztuk: " << liczbaSztuk << endl;
    }
};

class Samochod {
private:
    std::string marka;
    std::string model;
    int rokProdukcji;

public:
    Samochod(const std::string& marka, const std::string& model, int rok) : marka(marka), model(model), rokProdukcji(rok) {}
    void drukuj() const {
        cout << "Samochod: " << marka << " " << model << ", Rok produkcji: " << rokProdukcji << endl;
    }
};

class Firma {
private:
    string nazwaFirmy;
    int liczbaPracownikow;

public:
    Firma(const string& nazwa, int liczba) : nazwaFirmy(nazwa), liczbaPracownikow(liczba) {}
    Firma(const Firma& other) : nazwaFirmy(other.nazwaFirmy), liczbaPracownikow(other.liczbaPracownikow) {}

    void drukuj() const {
        cout << "Firma: " << nazwaFirmy << ", Liczba pracownikow: " << liczbaPracownikow << endl;
    }
};

class Procesor {
private:
    const string nazwa;
    double taktowanie;

public:
    Procesor(const string& nazwa, double taktowanie) : nazwa(nazwa), taktowanie(taktowanie) {}

    void drukuj() const {
        cout << "Procesor: " << nazwa << ", Taktowanie: " << taktowanie << " GHz" << endl;
    }
};

class Laptop {
private:
    Procesor procesor;

public:
    Laptop(const string& nazwaProcesora, double taktowanie) : procesor(nazwaProcesora, taktowanie) {}

    void drukuj() const {
        cout << "Laptop z procesorem: ";
        procesor.drukuj();
    }
};

int main() {

    Portfel portfel1;
    Portfel portfel2(100.0);
    portfel1.depozyt(50.0);
    portfel2.wyplata(30.0);
    cout << "Saldo portfel1: " << portfel1.pobierzSaldo() << std::endl;
    cout << "Saldo portfel2: " << portfel2.pobierzSaldo() << std::endl;
    Produkt produkt1;
    Produkt produkt2("Chleb");
    Produkt* produkt3 = new Produkt("Mleko", 2.5, 10);
    produkt1.drukuj();
    produkt2.drukuj();
    produkt3->drukuj();
    delete produkt3;

    Magazyn magazyn1;
    Magazyn magazyn2("Jablka");
    Magazyn magazyn3("Pomarancze", 20);
    magazyn1.dodajTowar(10);
    magazyn2.dodajTowar(15);
    magazyn1.drukuj();
    magazyn2.drukuj();
    magazyn3.drukuj();
    Samochod samochod1("Toyota", "Corolla", 2020);
    Samochod samochod2("Ford", "Focus", 2018);
    samochod1.drukuj();
    samochod2.drukuj();
    Firma firma1("Microsoft", 150000);
    Firma firma2 = firma1;
    firma1.drukuj();
    firma2.drukuj();

    Laptop laptop1("Intel i7", 3.5);
    laptop1.drukuj();

    return 0;
}