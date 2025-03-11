#include <iostream>

using namespace std;

int main() {
    int tab[5] = {1, 2, 3, 4, 5};


    int *ptr1 = nullptr; 
    int *ptr2 = {};

    ptr1 = &tab[2];

    int index;
    cin >> index;

    if (index < 0 || index >= 5) {
        cout << "invalid usage" << endl;
    } else {
        ptr2 = &tab[index];

        if (ptr2 < ptr1) {
            cout << "2 pointer jest bliżej początku tablicy niż 1 pointer" << endl;
        } else if (ptr2 > ptr1) {
            cout << "2 pointer jest dalej początku tablicy niż 1 pointer" << endl;
        } else {
            cout << "to samo miejsce" << endl;
        }
    }


    delete ptr1, ptr2;
    return 0;
}