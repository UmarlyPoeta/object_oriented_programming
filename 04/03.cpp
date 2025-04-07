#include <iostream>
#include <cmath>

struct Punkt {
    float x, y;
};

class TOkrag {
private:
    float promien;
    Punkt srodek;

public:
    TOkrag(float r, float x, float y) : promien(r), srodek{x, y} {}

    friend bool PrzecinajaSie(const TOkrag& okrag1, const TOkrag& okrag2);
};

bool PrzecinajaSie(const TOkrag& okrag1, const TOkrag& okrag2) {
    float dx = okrag1.srodek.x - okrag2.srodek.x;
    float dy = okrag1.srodek.y - okrag2.srodek.y;
    float odleglosc = std::sqrt(dx * dx + dy * dy);

    if (odleglosc <= (okrag1.promien + okrag2.promien)) {
        std::cout << "Okręgi przecinają się." << std::endl;
        return true;
    } else {
        std::cout << "Okręgi nie przecinają się." << std::endl;
        return false;
    }
}

int main() {
    TOkrag okrag1(5.0, 0.0, 0.0);
    TOkrag okrag2(3.0, 4.0, 0.0);

    PrzecinajaSie(okrag1, okrag2);

    return 0;
}