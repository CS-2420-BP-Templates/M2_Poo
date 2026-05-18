#ifndef HEROES_H
#define HEROES_H

#include "Personaje.h"
#include <string>

// =========================================================================
// CONSTANTES GLOBALES
// TODO: Los estudiantes pueden usar estas constantes en main.cpp
// Estas constantes son obligatorias para que el archivo de pruebas (test.cpp) funcione.
// =========================================================================
const std::string MI_GUERRERO = "Thor";
const std::string MI_MAGO = "Merlin";
const std::string MI_ARQUERO = "Legolas";

// =========================================================================
// CLASE: Guerrero (Ya implementada como ejemplo)
// =========================================================================
class Guerrero : public Personaje {
private:
    int proteccion;
    int estamina;

public:
    Guerrero(std::string n, int s, int a);
    virtual ~Guerrero() override = default; // Destructor por defecto, sin memoria dinámica interna.

    // Uso de 'override' para asegurar que estamos sobrescribiendo la función virtual pura de la clase base.
    void atacar() override;
};

// =========================================================================
// TODO: CLASE Mago
// 1. Haz que la clase Mago herede públicamente de Personaje.
// 2. Agrega un atributo privado propio (por ejemplo: 'int mana').
// 3. Declara su constructor que reciba (nombre, salud, mana).
// 4. Declara su destructor virtual usando 'override = default'.
// 5. Declara el método 'atacar()' asegurando el uso de 'override'.
// =========================================================================

// TU CÓDIGO PARA LA CLASE MAGO AQUÍ...


// =========================================================================
// TODO: CLASE Arquero
// 1. Haz que la clase Arquero herede públicamente de Personaje.
// 2. Agrega un atributo privado propio (por ejemplo: 'int flechas').
// 3. Declara su constructor que reciba (nombre, salud, flechas).
// 4. Declara su destructor virtual usando 'override = default'.
// 5. Declara el método 'atacar()' asegurando el uso de 'override'.
// =========================================================================

// TU CÓDIGO PARA LA CLASE ARQUERO AQUÍ...


#endif // HEROES_H