/*
 * CS 2024 - Laboratorio M2: Sistema de Combate RPG
 * Archivo: main.cpp
 * Hecho por Megan De León 4/2026
/*
    
#include <iostream>
#include <vector>
#include "Personaje.h"
#include "Heroes.h"

int main() {
    // 1. Creación del equipo (party)
    // Usamos punteros de la clase base para permitir el polimorfismo
    std::vector<Personaje*> party;

    // TODO: Instanciar héroes con 'new' y agregarlos al vector
    // Ejemplo: party.push_back(new Guerrero(MI_GUERRERO, 100, 50));

    std::cout << "--- ¡Inicia la Batalla RPG! ---" << std::endl;

    // TODO: Ejecutar bucle de ataque polimórfico
    // Pista: Usa un for-each loop y llama al método atacar() de cada personaje

    std::cout << "-------------------------------" << std::endl;

    // TODO: Liberar memoria con 'delete'
    // Recuerda que por cada 'new' debe haber un 'delete' para evitar fugas de memoria.

    return 0;
}
