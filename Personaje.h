#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <iostream>

class Personaje {
protected:
    // TODO: Agregar los atributos 'nombre' (string) y 'salud' (int)
    // Recuerda que 'protected' permite que las clases hijas los vean.

public:
    // Constructor
    Personaje(std::string n, int s);

    // Destructor Virtual: Crucial para la limpieza de memoria en polimorfismo
    virtual ~Personaje(); 

    // TODO: Una función atacar Virtual Pura (= 0), lo que hace a la clase Abstracta.
    
    // Método común para todas las clases derivadas
    void recibirDanio(int cantidad);

    std::string getNombre() const { return nombre; }
};

#endif
