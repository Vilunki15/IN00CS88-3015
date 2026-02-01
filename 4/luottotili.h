#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
protected:
    double luottoRaja = 0.0;
public:
    Luottotili(const std::string& omistaja, double luottoRaja);
    bool deposit(double amount) override;
    bool withdraw(double amount) override;
};

#endif // LUOTTOTILI_H
