#ifndef HEROES_H
#define HEROES_H

#include "Personaje.h"

class Guerrero : public Personaje {
private:
    int proteccion;
    int estamina; // Changed from int* to int

public:
    Guerrero(std::string n, int s, int a);
    virtual ~Guerrero() override = default; // No custom delete needed!

    void atacar() override;
};

// TODO: Declarar Mago y Arquero...

#endif