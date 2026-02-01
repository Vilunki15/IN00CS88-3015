#include "asiakas.h"
#include <iostream>

int main() {
    Asiakas a("Ville", 1000);

    a.talletus(500);
    a.nosto(200);

    a.luotonNosto(300);
    a.luotonMaksu(100);

    a.showSaldo();

    return 0;
}
