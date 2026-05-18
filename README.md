# M2_Poo
Proyecto sobre object-oriented-programming. Construiremos un motor basico de combate. 
Es necesario usar una clase base abstracta (ABC) para definir que es un personaje y luego especializaras ese comportamiento para diferentes clases de héroes.

Busca los TODO (falta hacer...) para completar el programa.

Tienes dos formas de comprobar si tu código es correcto antes de la fecha límite:
1. Verificación Local
Antes de subir tus cambios a GitHub, puedes ejecutar el mismo test que utiliza el Autograder. Abre tu terminal en la carpeta del proyecto y ejecuta los siguientes comandos:
En Linux / Mac / Git Bash:
Bash
g++ Character.cpp Heroes.cpp test.cpp -o suite_pruebas && ./suite_pruebas
En Windows (PowerShell):

PowerShell
g++ Character.cpp Heroes.cpp test.cpp -o suite_pruebas; .\suite_pruebas

¿Qué buscar? Si todo es correcto, deberías ver el mensaje: --- ¡FELICIDADES! Todos los tests han pasado. ---. Si el programa falla o no compila, lee cuidadosamente el error; generalmente te dirá qué clase o método tiene el problema.

2. Verificación en GitHub (Autograding)
Cada vez que hagas un git push de tu código a GitHub, el sistema ejecutará automáticamente las pruebas.
Ve a la pestaña Actions en la parte superior de tu repositorio en GitHub.
Haz clic en el flujo de trabajo más reciente (debería llamarse "Autograding").
Si ves una marca de verificación verde (✅), ¡tu laboratorio está completo y calificado!
Si ves una X roja (❌), haz clic en el trabajo "Autograding" para ver los logs. Allí podrás ver exactamente qué test falló.

🚩 Notas Importantes sobre las Pruebas
No modifiques test.cpp: El Autograder ignorará tus cambios en este archivo y usará la versión original del profesor.
Compilación: Si tu código no compila, el test fallará automáticamente con 0 puntos. Asegúrate de que todos los archivos .h y .cpp estén en la raíz del proyecto.
Nombres de Héroes: Si cambiaste el nombre en Heroes.h pero el objeto no devuelve ese nombre mediante getNombre(), el test fallará.
