#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(const std::string& nimi, double luottoRaja)
    : kayttotili(nimi), luottotili(nimi, luottoRaja) {}

void Asiakas::showSaldo() const {
    std::cout << "Pankkitilin saldo: " << kayttotili.getBalance() << std::endl;
    std::cout << "Luottotilin saldo: " << luottotili.getBalance() << std::endl;
}

bool Asiakas::talletus(double amount) {
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}
