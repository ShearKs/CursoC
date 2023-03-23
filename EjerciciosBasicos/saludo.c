#include <stdio.h>
#include <stdlib.h>

// Descripcion
// Escribir en lenguaje C un programa que:

// 1º) Pida por teclado el nombre (dato cadena) de una persona.

// 2º) Muestre por pantalla el mensaje: "Hola <nombre>, buenos días.".

int main()
{

    // Cadena con nombre de máximo 15 caracteres que tendrá que introducir el usuario
    char nombre[15];

    printf("Introduzca su nombre: ");

    // Pide al usuario que introduzca su nombre
    scanf("%s", nombre);

    printf("Hola <%s>, buenos días\n", nombre);

    return 0;
}
