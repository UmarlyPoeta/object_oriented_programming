#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Figura {
protected:
    double wysokosc, szerokosc;

public:
    void Ustaw_wartosc(double h, double w) {
        wysokosc = h;
        szerokosc = w;
    }
};
class Prostokat : public Figura {
public:
    inline double Pole() const {
        return wysokosc * szerokosc;
    }
};
class Trojkat : public Figura {
public:
    inline double Pole() const {
        return (wysokosc * szerokosc) / 2;
    }
};
class A {
public:
    void Wyswietl() const {
        cout << "Metoda A" << endl;
    }
};

class B {
public:
    void Wyswietl() const {
        cout << "Metoda  B" << endl;
    }
};
class C {
public:
    void Wyswietl() const {
        cout << "Metoda  C" << endl;
    }
};

class Z : public A, public B, public C {
public:
    void WyswietlZ() const {
        A::Wyswietl();
        B::Wyswietl();
        C::Wyswietl();
    }
};
class Punkt {
protected:
    float x, y;
    string nazwa;

public:
    Punkt(string n = "S", float x_val = 0, float y_val = 0) : nazwa(n), x(x_val), y(y_val) {}
    void Wyswietl() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class Kolo : public Punkt {
    float promien;
    string nazwa_kola;
public:
    Kolo(string nk = "kolko", string np = "S", float x_val = 0, float y_val = 0, float r = 1)
        : Punkt(np, x_val, y_val), nazwa_kola(nk), promien(r) {}

    void Wyswietl() const {
        cout << "Nazwa : " << nazwa_kola << endl;
        cout << "Srodek : ";
        Punkt::Wyswietl();
        cout << "Promien: " << promien << endl;
        cout << "Pole: " << M_PI * promien * promien << endl;
    }
};
class Zwierze {
public:
    int wiek, ilosc_nog;
};

class ZwierzeDomowe : public Zwierze {
public:
    string imie, kolor_siersci;
};
class Hipopotam : public Zwierze {};

class Kot : public ZwierzeDomowe {
public:
    void Mialcz() const {
        cout << "Kot mialczy!" << endl;
    }
};
class Pies : public ZwierzeDomowe {
public:
    void Szczekaj() const {
        cout << "Pies szczeka!" << endl;
    }
};
class Osoba {
protected:
    string imie, nazwisko, ulica;
public:
    void WczytajDane() {
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj ulice: ";
        cin >> ulica;
    }

    void WyswietlDane() const {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Ulica: " << ulica << endl;
    }
};
class Kadra : public Osoba {
    string wyksztalcenie;
public:
    void WczytajDane_1() {
        WczytajDane();
        cout << "Podaj wyksztalcenie: ";
        cin >> wyksztalcenie;
    }

    void WyswietlDane_1() const {
        WyswietlDane();
        cout << "Wyksztalcenie: " << wyksztalcenie << endl;
    }
};
class Question {
    string text, answer;
public:
    Question() : text(""), answer("") {}

    void set_text(string question_text) {
        text = question_text;
    }
    void set_answer(string correct_response) {
        answer = correct_response;
    }
    bool check_answer(string response) const {
        return response == answer;
    }
    void display() const {
        cout << text << endl;
    }
};
class ChoiceQuestion : public Question {
    vector<string> choices;

public:
    void add_choice(string choice, bool correct) {
        choices.push_back(choice);
        if (correct) {
            set_answer(to_string(choices.size()));
        }
    }

    void display() const {
        Question::display();
        for (size_t i = 0; i < choices.size(); ++i) {
            cout << i + 1 << ": " << choices[i] << endl;
        }
    }
};
int main() {
    Prostokat prostokat;
    Trojkat trojkat;
    prostokat.Ustaw_wartosc(5, 10);
    trojkat.Ustaw_wartosc(5, 10);
    cout << "prostokat: " << prostokat.Pole() << endl;
    cout << "trojkat: " << trojkat.Pole() << endl;
    Z z;
    z.WyswietlZ();
    Kolo kolo;
    kolo.Wyswietl();

    Hipopotam hipopotam;
    Kot kot;
    Pies pies;
    kot.Mialcz();
    pies.Szczekaj();

    Kadra kadra;
    kadra.WczytajDane_1();
    kadra.WyswietlDane_1();

    Question pytanie;
    pytanie.set_text("ile to 2+2?");
    pytanie.set_answer("4");
    pytanie.display();
    string odpowiedz;
    cout << "ty: ";
    cin >> odpowiedz;
    if (pytanie.check_answer(odpowiedz)) {
        cout << "ok!" << endl;
    } else {
        cout << "nie!" << endl;
    }

    ChoiceQuestion pytanie_wyboru;
    pytanie_wyboru.set_text("2 + 2?");
    pytanie_wyboru.add_choice("3", false);
    pytanie_wyboru.add_choice("4", true);
    pytanie_wyboru.add_choice("5", false);
    pytanie_wyboru.display();
    cout << "ty: ";
    cin >> odpowiedz;
    if (pytanie_wyboru.check_answer(odpowiedz)) {
        cout << "ok!" << endl;
    } else {
        cout << "nie!" << endl;
    }

    return 0;
}