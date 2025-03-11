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
        cout << "adres tablicy int: " << i << " :" << pt + i << endl;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "adres tablicy int: " << i << " :" << pt2 + i << endl;
    }

    delete[] tabi;
    delete [] tabd;

    return 0;
}