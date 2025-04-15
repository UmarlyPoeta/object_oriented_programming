#include "header.h"

int main() {
    cout << "--- Część 1: TUlamek ---\n";
    TUlamek u1(1, 5);
    TUlamek u2(2, 5);
    TUlamek wynik1 = Mnozenie(u1, u2);
    TUlamek wynik2 = Mnozenie(u1, 10);
    float wynik3 = Kwadrat(static_cast<float>(u2));

    cout << "1/5 * 2/5 = "; wynik1.wyswietl(); cout << endl;
    cout << "1/5 * 10 = "; wynik2.wyswietl(); cout << endl;
    cout << "Kwadrat(2/5) = " << wynik3 << endl;

    cout << "--- Część 2: TZespolona ---\n";
    TZespolona z1;
    TZespolona z2(5);
    TZespolona* z3 = new TZespolona(3);
    Pokaz(z1);
    Pokaz(z2);
    Pokaz(*z3);
    delete z3;

    cout << "--- Część 3: Stone_weight ---\n";
    Stone_weight s1;
    Stone_weight s2(145.5);
    Stone_weight s3(10, 5.5);

    s1.pokazKamienie(); s1.pokazFunty();
    s2.pokazKamienie(); s2.pokazFunty();
    s3.pokazKamienie(); s3.pokazFunty();

    cout << "--- Część 4: Fahrenheit ---\n";
    Fahrenheit f(25);
    cout << "Temperatura w Kelvinach: " << static_cast<int>(f) << "K\n";

    return 0;
}
