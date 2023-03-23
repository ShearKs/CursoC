#include <stdio.h>
// #include <conio.h>

// Escribir en lenguaje C un programa que:

// 1º) Pida por teclado un número (dato entero).

// 2º) Muestre por pantalla el mensaje:

//"La suma acumulada es: <suma>"

// 3º) Pregunte al usuario si desea introducir otro número o no.

// 4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no responda 'n' de (no).

// 5º) Muestre por pantalla cuántos números ha introducido el usuario.

// Nota: utilizar un bucle do...while

void misolucion(), solucion();

int main()
{
    // solucion();
    misolucion();

    return 0;
}

void misolucion()
{

    int numIn;
    int contador = 0;
    int sumaTotal = 0;

    char seguir;

    do
    {

        printf("\nIntroduzca un número entero: ");
        scanf("%i", &numIn);

        sumaTotal += numIn;

        printf("La suma acumulada es: %i", sumaTotal);

        contador++;

        printf("\n¿Desea introducir otro número <s/n>?: ");
        //fflush(stdin);

        scanf("%s", &seguir);

    } while (seguir != 'n');

    printf("\nHa introducido %d número(s).\n", contador);

    // getch(); /* Pausa */
}

void solucion()
{

    char seguir;
    int acumulador, contador, numero;

    acumulador = 0;
    contador = 0;
    do
    {
        printf("\n   Introduzca un n%cmero entero: ", 163);
        scanf("%d", &numero);

        acumulador += numero;
        printf("\n   La suma acumulada es: %d", acumulador);

        contador++;

        printf("\n\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163);
        fflush(stdin);
        scanf("%c", &seguir);
    } while (seguir != 'n');

    printf("\n   Ha introducido %d n%cmero(s).", contador, 163);

    // getch(); /* Pausa */
}
