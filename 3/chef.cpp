#include <iostream>
#include "chef.h"

Chef::Chef(const std::string& name) : chefName(name) {
    std::cout << "Chef " << chefName << " created." << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << chefName << " destroyed" << std::endl;
}

std::string Chef::getName() const {
    return chefName;
}

int Chef::makeSalad(int ingredients) {
    int portions = ingredients / 5;
    std::cout << chefName << " made " << portions << " salad using " << ingredients << " ingredients" << std::endl;
    return portions;
}

int Chef::makeSoup(int ingredients) {
    int portions = ingredients / 3;
    std::cout << chefName << " made " << portions << " soup using " << ingredients << " ingredients." << std::endl;
    return portions;
}
