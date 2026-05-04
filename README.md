# M2_Poo
Proyecto sobre object-oriented-programming. Construiremos un motor basico de combate. Es necesario usar una clase base abstracta (ABC) para definir que es un personaje y luego especializaras ese comportamiento para diferentes clases de héroes.

Objetivos
Implementar Herencia para reutilizar atributos comunes (Nombre, Salud).
Utilizar Funciones Virtuales Puras para obligar a cada subclase a definir su propio estilo de ataque.
Demostrar el Polimorfismo manejando diferentes tipos de héroes a través de un puntero de la clase base.

La Clase Base: Personaje
Debes crear una clase base abstracta llamada Personaje.
Atributos Protegidos: string nombre, int salud.
Constructor: Debe inicializar el nombre y la salud.
Función Virtual Pura: virtual void ataque() = 0; (Esto asegura que no puedas crear un personaje "genérico").
Función Virtual: virtual void recibirGolpe(int amount); que reste salud y muestre un mensaje.

Las Clases Derivadas: al menos 3
Cada uno debe tener un atributo único 
