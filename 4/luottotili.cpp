#include "luottotili.h"

Luottotili::Luottotili(const std::string& omistaja, double luottoRaja) : Pankkitili(omistaja, 0.0), luottoRaja(luottoRaja) {}

bool Luottotili::deposit(double amount) {
    if (amount <= 0)
        return false;

    if (saldo + amount > 0)
        return false;

    saldo += amount;
    return true;
}

bool Luottotili::withdraw(double amount) {
    if (amount <= 0)
        return false;

    if (saldo - amount < -luottoRaja)
        return false;

    saldo -= amount;
    return true;
}

