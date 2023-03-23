#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    char seguir;

    do
    {

        printf("Introduzca un número entero: ");
        scanf("%i", &num);

        printf("\nLa tabla de multiplicar del %i es: \n", num);

        for (int i = 1; i <= 10; i++)
        {

            printf("%i * %i = %i\n", i, num, i * num);
        }

        printf("\n¿Desea ver otra tabla (s/n)?: ");
        scanf("%s", &seguir);

    }while (seguir != 'n');

    return 0;


}
