/*
* CS 2024 - Laboratorio M2: Sistema de Combate RPG
 * Archivo: main.cpp
 * Hecho por: [Tu Nombre] y [Fecha] // TODO: Cambiar esto a tu nombre y fecha
 */

#include <iostream>
#include <vector>
#include "Personaje.h"
#include "Heroes.h"

int main() {
    // 1. Creación del equipo (party)
    // Usamos punteros de la clase base para permitir el polimorfismo en el Heap
    std::vector<Personaje*> party;

    // TODO: Instanciar héroes (Guerrero, Mago, Arquero) usando 'new' y agregarlos al vector.
    // Utiliza las constantes MI_GUERRERO, MI_MAGO y MI_ARQUERO definidas en Heroes.h
    //
    // Ejemplo: party.push_back(new Guerrero(MI_GUERRERO, 100, 50));


    std::cout << "--- ¡Inicia la Batalla RPG! ---" << std::endl;

    // TODO: Ejecutar bucle de ataque polimórfico.
    // Pista: Usa un for-each loop basado en rangos y llama al método atacar() de cada personaje usando '->'


    std::cout << "-------------------------------" << std::endl;

    // TODO: Liberar memoria con 'delete' para evitar fugas de memoria (Memory Leaks).
    // Recuerda: Por cada 'new' que los estudiantes agregaron arriba, debe ejecutarse un 'delete'.
    // Al finalizar el bucle de delete, limpia el vector con party.clear() por buena práctica.


    return 0;
}