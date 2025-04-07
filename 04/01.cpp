#include <iostream>
#include <string>

class TSilnik {
private:
    int moc;
    int max_moment_obr;

public:
    TSilnik(int moc, int max_moment_obr) : moc(moc), max_moment_obr(max_moment_obr) {}
    friend class TSamochód;
};

class TSamochód {
private:
    TSilnik silnik;
    std::string model;

public:
    TSamochód(const std::string& model, int moc, int moment)
        : silnik(moc, moment), model(model) {}

    void wyswietlInfo() const {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Moc silnika: " << silnik.moc << " KM" << std::endl;
        std::cout << "Maksymalny moment obrotowy: " << silnik.max_moment_obr << " Nm" << std::endl;
    }
};

int main() {
    TSamochód* samochod = new TSamochód("Audi A4", 190, 320);
    samochod->wyswietlInfo();
    delete samochod;

    return 0;
}