#include "pankkitili.h"

#include <string>

Pankkitili::Pankkitili(const std::string& omistaja, double saldo) : omistaja(omistaja), saldo(saldo) {}

double Pankkitili::getBalance() const {
    return saldo;
}

bool Pankkitili::deposit(double amount) {
    if (amount > 0 ) {
        saldo = saldo + amount;
        return true;
    } else {
        return false;
    }
}

bool Pankkitili::withdraw(double amount) {
    if (amount > 0) {
        saldo = saldo - amount;
        return true;
    } else {
        return false;
    }
}
