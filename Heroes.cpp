#include "Heroes.h"
#include <iostream>

// Implementación del Guerrero
Guerrero::Guerrero(std::string n, int s, int a) : Personaje(n, s), proteccion(a) {
    estamina = new int(100); 
}

Guerrero::~Guerrero() {
    delete estamina;
}

void Guerrero::atacar() {
    std::cout << nombre << " ataca ferozmente con su espada!" << std::endl;
}

// TODO: Implementar Mago y Arquero...
