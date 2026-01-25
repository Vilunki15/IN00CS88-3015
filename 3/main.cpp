#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main() {
    Chef c("Gordon");
    c.makeSalad(12);
    c.makeSoup(10);
    std::cout << "Chef name: " << c.getName() << std::endl;

    ItalianChef ic("Mario");
    ic.makeSalad(15);
    ic.makeSoup(9);

    ic.askSecret("koira", 20, 20);
    ic.askSecret("pizza", 20, 20);

    return 0;
}
