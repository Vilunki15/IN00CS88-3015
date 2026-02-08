#include "seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja(const std::string& nimi)
    : nimi(nimi) {}

std::string Seuraaja::getNimi() const {
    return nimi;
}

void Seuraaja::paivitys(const std::string& viesti) {
    std::cout << nimi << " sai viestin: " << viesti << std::endl;
}
