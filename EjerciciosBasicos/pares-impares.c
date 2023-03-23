#include <stdio.h>

int main()
{

    int num;
    char seguir;

    int pares = 0;
    int impares = 0;

    do
    {
        printf("Introduzca un número entero: ");
        scanf("%i", &num);

        if (num % 2 == 0)
        {
            pares++;
        }else{

            impares++;
        }

        printf("¿Desea introducir un número (s/n)? ");
        scanf("%s", &seguir);

    } while (seguir != 'n');


    printf("\n\nHas introducido %i número(s) y es %i impares(es) \n",pares,impares);
}