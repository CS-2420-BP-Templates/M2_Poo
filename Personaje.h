#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>

class Personaje {
protected:
    // 'protected' permite que las clases hijas (Guerrero, Mago, etc.)
    // accedan directamente a estos atributos sin usar getters.
    std::string nombre;
    int salud;

public:
    // Constructor de la clase base
    Personaje(std::string n, int s);

    // DESTRUCTOR VIRTUAL: Crucial para el polimorfismo.
    // Asegura que al borrar un Personaje*, se llame al destructor de la clase hija.
    virtual ~Personaje();

    // Método común con comportamiento heredable
    void recibirDanio(int cantidad);

    // FUNCIÓN VIRTUAL PURA (= 0): Convierte a Personaje en una clase abstracta.
    // Obliga a cada clase hija a implementar su propio método atacar().
    virtual void atacar() = 0;

    // Getters básicos opcionales (por si los necesitan en main.cpp)
    std::string getNombre() const { return nombre; }
    int getSalud() const { return salud; }
};

#endif // PERSONAJE_H