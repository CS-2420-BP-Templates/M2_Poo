#include "Heroes.h"
#include "Personaje.h"
#include <cassert>

int main() {
    // El test ahora usa la constante que el estudiante definió
    Personaje* guerrero = new Guerrero(MI_GUERRERO, 150, 50);
    
    std::cout << "Verificando nombre personalizado: " << MI_GUERRERO << "..." << std::endl;
    
    if (guerrero->getNombre() == MI_GUERRERO) {
        std::cout << "TEST_NAME_PASSED ✅" << std::endl;
    } else {
        std::cerr << "Error: El nombre del objeto no coincide con la constante definida." << std::endl;
        return 1;
    }
    
    delete guerrero;
    return 0;
}
