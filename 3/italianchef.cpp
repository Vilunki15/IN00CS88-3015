#include <iostream>
#include "italianchef.h"

ItalianChef::ItalianChef(const std::string& name) : Chef(name), flour(0), water(0) {
    std::cout << "ItalianChef " << chefName << " created." << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << chefName << " destroyed." << std::endl;
}

int ItalianChef::makePizza() {
    int portions = std::min(flour / 5, water / 5);
    flour -= portions * 5;
    water -= portions * 5;
    std::cout << chefName << " made " << portions << " pizza using flour and water." << std::endl;
    return portions;
}

bool ItalianChef::askSecret(const std::string& pass, int flourInput, int waterInput) {
    flour = flourInput;
    water = waterInput;
    if (pass == password) {
        std::cout << "Password correct!" << std::endl;
        makePizza();
        return true;
    } else {
        std::cout << "Password incorrect. No pizza made." << std::endl;
        return false;
    }
}
