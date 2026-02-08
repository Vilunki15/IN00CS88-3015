#include "notifikaattori.h"

int main() {
    Notifikaattori n;

    Seuraaja a("Ville");
    Seuraaja b("Anna");
    Seuraaja c("Mikko");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();
    n.postita("Uusi ilmoitus!");

    n.poista(&b);
    n.postita("Toinen ilmoitus!");

    return 0;
}
