#ifndef HEROES_H
#define HEROES_H

#include "Personaje.h"
#include <string>

// --- SECCIÓN DE PERSONALIZACIÓN ---
// TODO: Elige nombres épicos para tus héroes
const std::string MI_GUERRERO = "Galvarino";
const std::string MI_MAGO = "Maria Sabina";
const std::string MI_ARQUERO = "Ah Dzic Puncab";
// ----------------------------------

// --- CLASE GUERRERO ---
class Guerrero : public Personaje {
private:
    int proteccion;
    int* estamina; 

public:
    // Solo declaramos el constructor y métodos aquí
    Guerrero(std::string n, int s, int a);
    virtual ~Guerrero();
    void atacar() override; // Implementación obligatoria
};

// --- CLASE MAGO ---
class Mago : public Personaje {
private:
    int mana;
public:
    Mago(std::string n, int s, int m);
    void atacar() override;
};

// --- CLASE ARQUERO ---
class Arquero : public Personaje {
private:
    int flechas;
public:
    Arquero(std::string n, int s, int f);
    void atacar() override;
};

#endif
