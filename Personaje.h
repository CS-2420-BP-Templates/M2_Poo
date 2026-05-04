#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <iostream>

class Personaje {
protected:
    //
public:
    Personaje(std::string n, int s);
    virtual ~Personaje(); 
    virtual void ataque() = 0; // Función virtual pura
    void recibirGolpe(int cantidad);
};

#endif
