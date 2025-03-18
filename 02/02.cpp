#include <iostream>

using namespace std;

class Prostokat {
public:
    double dlugosc;
    double szerokosc;

    double obliczPole() {
        return dlugosc * szerokosc;
    }

    double obliczObwod() {
        return 2 * (dlugosc + szerokosc);
    }
};

int main() {
    Prostokat* prostokat = new Prostokat;

    cout << "Podaj dlugosc: ";
    cin >> prostokat->dlugosc;

    cout << "Podaj szerokosc: ";
    cin >> prostokat->szerokosc;

    cout << "Pole prostokata: " << prostokat->obliczPole() << endl;
    cout << "Obwod prostokata: " << prostokat->obliczObwod() << endl;

    delete prostokat;

    return 0;
}