#include <iostream>
#include <cmath>

using namespace std;



struct Punkt {
public:
    double x, y;
};

double odleglosc(const Punkt *p1, const Punkt *p2)
{
    return sqrt(pow(abs(p1->x - p2->x), 2) + pow(abs(p1->y - p2->y), 2));
}

int main()
{
    Punkt *p1 = new Punkt();
    Punkt *p2 = new Punkt();

    for (int i = 0; i < 2; i++)
    {
        cout << "Podaj x " << i + 1 << " punktu: " << endl;
        cin>> p1->x;
        cout << "Podaj y " << i + 1 << " punktu: " << endl;
        cin>> p1->y;
    }

    cout << "Odleglosc miedzy punktem 1 i 2 wynosi: " << odleglosc(p1, p2) << endl;
    delete p1, p2;
    return 0;
}


