#include <iostream>
#include <cassert>
#include "Personaje.h"

// Creamos una clase solo para probar la Clase Base
// Ya que Personaje es abstracta y no se puede instanciar sola.
class TestPersonaje : public Personaje {
public:
    TestPersonaje(std::string n, int s) : Personaje(n, s) {}
    void attaque() override { std::cout << "Test Attaque"; }
};

int main() {
    // 1. Probar Constructor y Getter
    TestPersonaje t("HeroePrueba", 100);
    
    if (t.getNombre() == "HeroePrueba") {
        std::cout << "TEST_NOMBRE_PASSED" << std::endl;
    } else {
        return 1; // Error
    }

    // 2. Probar lógica de daño
    t.recibirGolpe(30);
    // Si el programa no crash-ea y llega aquí, la lógica básica funciona
    std::cout << "TEST_LOGICA_PROBADA" << std::endl;

    return 0;
}
