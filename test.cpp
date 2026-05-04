#include "Heroes.h"
#include "Personaje.h"
#include <cassert>

int main() {
    cout << "--- Iniciando Autograding ---" << endl;

    // 1. Ejecutar prueba de la Regla de los Tres (Copia)
    // Se hace aquí para que, si falla, el programa termine antes 
    // de intentar cosas más complejas.
    cout << "Verificando robustez de copia..." << endl;
    testCopy(); 
    printTest("Regla de los Tres (Copia Segura)", true);  
    
    // 2. Pruebas de Polimorfismo con punteros
    // El test ahora usa la constante que el estudiante definió
    Personaje* guerrero = new Guerrero(MI_GUERRERO, 150, 50);
    
    std::cout << "Verificando nombre personalizado: " << MI_GUERRERO << "..." << std::endl;
    
    if (guerrero->getNombre() == MI_GUERRERO) {
        std::cout << "TEST_NOMBRE_PROBADO ✅" << std::endl;
    } else {
        std::cerr << "Error: El nombre del objeto no coincide con la constante definida." << std::endl;
        return 1;
    }
    
    delete guerrero;
    return 0;
}
