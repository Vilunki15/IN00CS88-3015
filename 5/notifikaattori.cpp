#include "notifikaattori.h"
#include <iostream>

Notifikaattori::Notifikaattori()
    : seuraajat(nullptr) {}

void Notifikaattori::lisaa(Seuraaja* s) {
    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(Seuraaja* s) {
    if (!seuraajat) return;

    if (seuraajat == s) {
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* curr = seuraajat;
    while (curr->next && curr->next != s) {
        curr = curr->next;
    }

    if (curr->next == s) {
        curr->next = s->next;
    }
}

void Notifikaattori::tulosta() const {
    Seuraaja* o = seuraajat;
    while (o != nullptr) {
        std::cout << o->getNimi() << std::endl;
        o = o->next;
    }
}

void Notifikaattori::postita(const std::string& viesti) {
    Seuraaja* o = seuraajat;
    while (o != nullptr) {
        o->paivitys(viesti);
        o = o->next;
    }
}
