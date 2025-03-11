#include <iostream>


static constexpr int SIZE = 6;

using namespace std;

int main() {
    int *tabi = new int[SIZE];
    double *tabd = new double[SIZE];

    int *pt = tabi;
    double *pt2 = tabd;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "adres tablicy int: " << i << " :" << &tabi << endl;
        tabi++;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "adres tablicy int: " << i << " :" << &tabi << endl;
        tabd++;
    }


    delete[] tabi;
    delete [] tabd;
    return 0;
}