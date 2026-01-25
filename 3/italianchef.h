#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

class ItalianChef : public Chef {
private:
    std::string password = "pizza";
    int flour;
    int water;

    int makePizza();

public:
    ItalianChef(const std::string& name);
    ~ItalianChef();

    bool askSecret(const std::string& pass, int flourInput, int waterInput);
};

#endif // ITALIANCHEF_H
