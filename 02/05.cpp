#include <iostream>
#include <cstring>

using namespace std;

struct Samochod {
    char marka[20];
    char model[20];
    int rok_produkcji;
};

void wyswietlSamochod(const Samochod* samochod) {
    cout << "Marka: " << samochod->marka << endl;
    cout << "Model: " << samochod->model << endl;
    cout << "Rok produkcji: " << samochod->rok_produkcji << endl;
}

int main() {
    Samochod* samochod = new Samochod;

    cout << "Podaj marke: ";
    cin.getline(samochod->marka, 20);
    cout << "Podaj model: ";
    cin.getline(samochod->model, 20);
    cout << "Podaj rok produkcji: ";
    cin >> samochod->rok_produkcji;

    wyswietlSamochod(samochod);

    delete samochod;
    return 0;
}