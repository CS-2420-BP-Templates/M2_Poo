#ifndef HEROES_H
#define HEROES_H

#include "Personaje.h"
#include <string>

// --- SECCIÓN DE PERSONALIZACIÓN ---
// TODO: Elige nombres épicos para tus héroes
const std::string MI_GUERRERO = "NombreAqui";
const std::string MI_MAGO = "NombreAqui";
const std::string MI_ARQUERO = "NombreAqui";
// ----------------------------------

class Guerrero : public Personaje {
    // ... tu implementación
    int* estamina; // Imaginemos un recurso dinámico

public:
    Guerrero(string n, int s, int a) : Personaje(n, s), proteccion(a) {
        estamina = new int(100); 
    }

    // TODO (Opcional para puntos extra): 
    // ¿Qué pasaría si intentas copiar un Guerrero a otro? 
    // Implementa la Regla de los Tres si decides usar punteros aquí.
    virtual ~Guerrero() {
        delete estamina; // El destructor es parte de la regla.
    }
};

// ... resto de clases

#endif
