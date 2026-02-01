#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>

class Pankkitili
{
protected:
    std::string omistaja;
    double saldo = 0.0;
public:
    explicit Pankkitili(const std::string& omistaja, double saldo = 0.0);
    virtual ~Pankkitili() = default;
    double getBalance() const;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
};

#endif // PANKKITILI_H

