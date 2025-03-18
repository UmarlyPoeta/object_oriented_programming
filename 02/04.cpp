#include <iostream>

using namespace std;

class KontoBankowe {
public:
    int nr_konta;
    double saldo;
    void wplata(double kwota);
    void wyplata(double kwota);
    void wyswietlInformacje();
};


int main()
{
    KontoBankowe* konto = new KontoBankowe;

    cout << "Podaj numer konta: ";
    cin >> konto->nr_konta;
    cout << "Podaj saldo: ";
    cin >> konto->saldo;

    int choice;
    double kwota;
    do {
        cout << "1. Wplata\n2. Wyplata\n3. Wyswietl informacje\n4. Wyjscie\nWybierz opcje: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Podaj kwote do wplaty: ";
                cin >> kwota;
                konto->wplata(kwota);
                break;
            case 2:
                cout << "Podaj kwote do wyplaty: ";
                cin >> kwota;
                konto->wyplata(kwota);
                break;
            case 3:
                konto->wyswietlInformacje();
                break;
            case 4:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowa opcja." << endl;
        }
    } while (choice != 4);

    delete konto;
    return 0;
}

void KontoBankowe::wplata(double kwota)
{
    if (kwota < 0)
    {
        cout << "nie wplaca sie ujemnej kwoty" << endl;
    }
    else
    {
        this->saldo += kwota;
    }
    
}

void KontoBankowe::wyplata(double kwota)
{
    if (kwota > this->saldo)
    {
        cout <<"nie masz wystarczajacych srodkow na koncie" << endl;
    }
    else
    {
        this->saldo -= kwota;
    }
}

void KontoBankowe::wyswietlInformacje()
{
    cout << "nr: " << this->nr_konta << endl;
    cout << "saldo: " << this->saldo << endl;
}
