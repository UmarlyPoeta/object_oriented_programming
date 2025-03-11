#include <iostream>

using namespace std;

int main() {
    cout << "Przydzielanie pamięci..." << endl;
    int* suma = new int(0);

    for (int i = 1; i <= 100; ++i) {
        *suma += i;
    }

    cout << "Suma liczb od 1 do 100 wynosi: " << *suma << endl;

    delete suma;
    return 0;
}