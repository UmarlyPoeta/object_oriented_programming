#include <iostream>

using namespace std;

struct Student {
    char imie[30];
    char nazwisko[30];
    int nr_indeksu;
    double srednia_ocen;
    void wyswietlStudent(const Student *student);
};


int main()
{
    Student *student = new Student;

    cout << "Podaj imie: ";
    cin >> (student->imie);
    cout << "Podaj nazwisko: ";
    cin >> (student->nazwisko);
    cout << "Podaj numer indeksu: ";
    cin >> (student->nr_indeksu);
    cout << "Podaj srednia ocen: ";
    cin >> (student->srednia_ocen);

    (student->wyswietlStudent(student));

    delete student;

    return 0;
}

void Student::wyswietlStudent(const Student *student)
{
    cout << "imie: " << (student->imie) << endl;
    cout << "nazwisko: " << (student->nazwisko) << endl;
    cout << "numer indeksu: " << (student->nr_indeksu) << endl;
    cout << "srednia ocen: " << (student->srednia_ocen) << endl;
}
