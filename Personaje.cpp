#include "Personaje.h" // Importante: Incluir su propia cabecera
#include <iostream>

using namespace std;

// 1. Implementación del Constructor
// Usamos la lista de inicialización para asignar los valores
Character::Character(string n, int s) : nombre(n), salud(s) {
    // Aquí podrías agregar lógica extra si fuera necesario al nacer el personaje
}

// 2. Implementación del Destructor
// Aunque esté vacío, debe definirse porque fue declarado en el .h
Personaje::~Personaje() {
    // Aquí iría la liberación de memoria si Personaje tuviera punteros internos
}

// 3. Implementación de métodos comunes
// Este método no es virtual puro, así que todas las subclases lo heredan tal cual
void Personaje::recibirGolpe(int cantidad) {
    salud -= cantidad;
    cout << "--- Log de Combate ---" << endl;
    cout << nombre << " recibio " << cantidad << " puntos de daño." << endl;
    
    if (salud <= 0) {
        salud = 0;
        cout << "¡" << nombre << " ha sido derrotado!" << endl;
    } else {
        cout << "Salud restante de " << nombre << ": " << salud << endl;
    }
    cout << "----------------------" << endl;
}
