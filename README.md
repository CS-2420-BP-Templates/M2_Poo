# M2_Poo
# Laboratorio M2: Sistema de Combate RPG ⚔️
**Asignatura:** CS 2024  
**Estudiante:** [Tu Nombre Aquí]  
**Fecha:** Abril 2026

Este repositorio contiene la estructura base para un simulador de combate RPG desarrollado en C++ utilizando **CLion** y **CMake**. El objetivo principal es aplicar los pilares de la POO: **herencia**, **clases abstractas**, **polimorfismo** mediante punteros a la clase base y **gestión dinámica de memoria**.

---

## 📋 Lista de Tareas Pendientes (Checklist de TODOs)

Para completar con éxito este laboratorio, debes implementar los bloques de código marcados como `TODO` a lo largo de los archivos del proyecto:

### 1. Identificación del Autor (`main.cpp`)
- [ ] Modificar el comentario inicial en `main.cpp` colocando tu nombre real y la fecha de entrega.

### 2. Implementación de Clases Derivadas (`Heroes.h` y `Heroes.cpp`)
- [ ] En `Heroes.h`: Asegurarse de que las clases `Guerrero`, `Mago` y `Arquero` heredan públicamente (`public`) de la clase `Personaje`.
- [ ] En `Heroes.h`: Declarar los constructores correspondientes y usar la palabra clave `override` en el método `void atacar() override;`.
- [ ] En `Heroes.cpp`: Implementar por completo la clase **Mago** (con sus atributos como maná) y su método `atacar()`.
- [ ] En `Heroes.cpp`: Implementar por completo la clase **Arquero** (con sus atributos como flechas) y su método `atacar()`.

### 3. Instanciación del Equipo (`main.cpp`)
- [ ] Instanciar al menos un héroe de cada tipo (`Guerrero`, `Mago`, `Arquero`) utilizando el operador `new` y las constantes predefinidas (`MI_GUERRERO`, etc.).
- [ ] Almacenar los punteros generados dentro del vector polimórfico `party` usando `.push_back()`.

### 4. Bucle de Ataque Polimórfico (`main.cpp`)
- [ ] Implementar un bucle basado en rangos (`for (Personaje* p : party)`) para recorrer el vector.
- [ ] Invocar el método `atacar()` de cada personaje usando el operador de flecha (`->`).

### 5. Liberación de Memoria (`main.cpp`)
- [ ] Recorrer el vector `party` al final del programa para liberar la memoria de cada objeto usando `delete` para evitar fugas de memoria (*memory leaks*).

---

## 🧪 Pruebas Automatizadas y Autograding

Este proyecto cuenta con un sistema de pruebas locales en el archivo `test.cpp`. **No debes modificar este archivo**.

Para verificar si tu código cumple con los requisitos mínimos antes de subirlo a GitHub Classroom:
1. En CLion, cambia el target de ejecución de `main` a `runTests` (o el nombre configurado en el CMake).
2. Ejecuta el programa de pruebas.
3. Si todo es correcto, deberías ver el mensaje: `--- [RESULTADO FINAL]: Todos los tests pasaron con exito. ---`.

Si el programa falla o lanza un *crash*, revisa el flujo de tus constructores y que no estés intentando acceder a punteros nulos.

---

## 🛠️ Instrucciones de Uso en CLion

1. **Importar:** Abre la carpeta del proyecto en CLion; el IDE detectará automáticamente el archivo `CMakeLists.txt`.
2. **Compilar:** Presiona `Ctrl+F9` (Windows/Linux) o `Cmd+F9` (Mac).
3. **Ejecutar Main:** Selecciona el target de tu aplicación principal y presiona `Shift+F10` / `Ctrl+R`.
