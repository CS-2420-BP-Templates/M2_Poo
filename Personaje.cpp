#include "Personaje.h"
#include <iostream>

// 1. Implementación del Constructor
// Usamos la lista de inicialización para asignar los valores de forma eficiente.
Personaje::Personaje(std::string n, int s) : nombre(n), salud(s) {
    // Espacio intencionalmente vacío.
    // Ideal para que los estudiantes comprendan dónde inicializar atributos base.
}

// 2. Implementación del Destructor
// Importante: Asegúrate de que en 'Personaje.h' este destructor tenga la palabra clave 'virtual'.
Personaje::~Personaje() {
    // Se deja vacío ya que la clase base no maneja memoria dinámica (punteros en el heap).
    // Su presencia virtual garantiza que los destructores de las clases hijas se ejecuten correctamente.
}

// 3. Implementación de métodos comunes
void Personaje::recibirDanio(int cantidad) {
    salud -= cantidad;

    std::cout << "\n--- Log de Combate ---" << std::endl;
    std::cout << nombre << " recibió " << cantidad << " puntos de daño!" << std::endl;

    if (salud <= 0) {
        salud = 0;
        std::cout << "¡" << nombre << " ha sido derrotado!" << std::endl;
    } else {
        std::cout << "Salud restante de " << nombre << ": " << salud << std::endl;
    }
    std::cout << "----------------------\n" << std::endl;
}