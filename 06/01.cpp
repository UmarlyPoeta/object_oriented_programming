#include <iostream>
#include <string>
#include <vector>

class Class {
public:
    int x, y;

    Class(int x, int y) : x(x), y(y) {}
    Class() = default;

    Class operator+(const Class& other) {
        return Class(x + other.x, y + other.y);
    }
};

class ClassModified {
private:
    int x, y;

public:
    ClassModified(int x, int y) : x(x), y(y) {}
    ClassModified() = default;

    int getX() const { return x; }
    int getY() const { return y; }

    friend ClassModified operator+(const ClassModified& a, const ClassModified& b) {
        return ClassModified(a.x + b.x, a.y + b.y);
    }
};

class Punkt2D {
private:
    int x, y;

public:
    Punkt2D(int x, int y) : x(x), y(y) {}

    friend std::ostream& operator<<(std::ostream& os, const Punkt2D& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Punkt2D& p) {
        is >> p.x >> p.y;
        return is;
    }
};

struct TStruktura {
    std::string imie;

    TStruktura(const std::string& imie) : imie(imie) {}

    friend bool operator!(const TStruktura& s) {
        return s.imie.size() > 5;
    }
};

class TOsoba {
private:
    std::string imie;
    int wiek;

public:
    TOsoba(const std::string& imie, int wiek) : imie(imie), wiek(wiek) {}

    friend std::ostream& operator<<(std::ostream& os, const TOsoba& o) {
        os << o.imie << " - " << o.wiek << " lat";
        return os;
    }
};

int main() {
    Class ad(1, 2), bd(3, 4);
    Class cd = ad + bd;
    std::cout << "x: " << cd.x << ", y: " << cd.y << std::endl;

    ClassModified a(1, 2), b(3, 4);
    ClassModified c = a + b;
    std::cout << "x: " << c.getX() << ", y: " << c.getY() << std::endl;

    Punkt2D p(0, 0);
    std::cout << "Podaj współrzędne punktu (x y): ";
    std::cin >> p;
    std::cout << "Wprowadzone współrzędne: " << p << std::endl;

    std::vector<TStruktura> tablica = {{"Anna"}, {"Katarzyna"}, {"Jan"}, {"Marlena"}, {"Piotr"}};
    for (const auto& s : tablica) {
        if (!s) {
            std::cout << s.imie << std::endl;
        }
    }

    std::vector<TOsoba> osoby = {{"Anna", 25}, {"Katarzyna", 30}, {"Jan", 20}, {"Marlena", 35}, {"Piotr", 40}};
    for (const auto& o : osoby) {
        std::cout << o << std::endl;
    }
    return 0;
}