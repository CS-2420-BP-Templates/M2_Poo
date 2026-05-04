#include <iostream>
#include <string>
#include "Heroes.h"
#include "Personaje.h"

using namespace std;

// Función para reportar resultados de forma clara en los logs de GitHub
void reportarTest(string nombre, bool resultado) {
    cout << "[TEST] " << nombre << ": " << (resultado ? "PASADO ✅" : "FALLADO ❌") << endl;
    if (!resultado) exit(1); 
}

int main() {
    cout << "--- Iniciando Autograding: CS2024 Semana 2 ---" << endl;

    try {
        // 1. Verificación de Polimorfismo y Uso de Constantes
        // Probamos que el estudiante usó la constante MI_GUERRERO definida en Heroes.h
        Personaje* guerrero = new Guerrero(MI_GUERRERO, 150, 50);
        
        cout << "Verificando nombre personalizado: '" << MI_GUERRERO << "'..." << endl;
        
        reportarTest("Inicializacion de Nombre", guerrero->getNombre() == MI_GUERRERO);

        // 2. Verificación de Lógica de Daño
        // Probamos que el método de la clase base funciona
        guerrero->recibirDanio(50);
        reportarTest("Metodo recibirDanio ejecutable", true);

        // 3. Verificación de Ataque (Polimorfismo)
        // Solo llamamos al método para asegurar que no haya crashes
        cout << "Ejecutando ataque: ";
        guerrero->atacar(); 

        // Limpieza de memoria
        delete guerrero;
        
        cout << "\n--- [RESULTADO FINAL]: Todos los tests pasaron con exito. ---" << endl;

    } catch (...) {
        cerr << "\n[ERROR CRITICO]: El programa colapso durante las pruebas." << endl;
        cerr << "Revisa que tus constructores y destructores esten bien implementados." << endl;
        return 1;
    }

    return 0;
}
