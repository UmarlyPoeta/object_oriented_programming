#include <iostream>
#include <random>

using namespace std;

int main() {
    srand(time(NULL));
    int *tab = new int[15];

    for (int i =0; i < 15; i++)
    {
        tab[i] = rand() % 15;
    }

    int *pt1 = &tab[4];
    int *pt2 = &tab[9];
    int *pt3 = &tab[10];

    cout << "roznica wskaznikow" << pt2 - pt1 << endl;
    cout << "roznica wskaznikow" << pt1 - pt2 << endl;
    cout << "roznica wskaznikow" << pt2 - pt3 << endl;

    cout << "roznica wartosci" << *pt2 - *pt1 << endl;
    cout << "roznica wartosci" << *pt2 - *pt2 << endl;
    cout << "roznica wartosci" << *pt2 - *pt3 << endl;

    delete[] tab;
    return 0;
}