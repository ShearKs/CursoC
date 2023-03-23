#include <stdio.h>
// Para poder incluir el abort
#include <stdlib.h>

void pideNumeros();

int main()
{

    // Número introducido por el ususario
    int num, num1, num2;

    int suma, resta, multiplicacion, division;

    printf(">>> MENU CALCULADORA <<<");

    printf("\n\n1. Sumar dos números.");
    printf("\n2. Restar dos números.");
    printf("\n3. Multiplicar dos números.");
    printf("\n4. Dividir dos números.");
    printf("\n5. Salir.");

    do
    {

        printf("\n\nIntroduzca opción (1-5): ");
        scanf("%i", &num);

        switch (num)
        {

        case 1:
            pideNumeros(&num1, &num2);
            printf("\n%i + %i = %i\n", num1, num2, num1 + num2);
            break;
        case 2:
            pideNumeros(&num1, &num2);
            printf("\n%i - %i = %i\n", num1, num2, num1 - num2);
            break;
        case 3:
            pideNumeros(&num1, &num2);
            printf("\n%i * %i = %i\n", num1, num2, num1 * num2);
            break;
        case 4:
            pideNumeros(&num1, &num2);
            if (num2 == 0)
            {

                printf("ERROR: No se puede dividir entre cero.\n");
            }
            else
            {
                printf("\n%i / %i = %i\n", num1, num2, num1 / num2);
            }

            break;

        case 5:

            abort();
            break;

        default:
            break;
        }

    } while (num > 0 && num <= 5);

    return 0;
}

void pideNumeros(int *num1, int *num2)
{

    // El usuario introduce los numeros
    printf("\nIntroduce el primer número: ");
    scanf("%i", num1);

    printf("\nIntroduce el segundo número: ");
    scanf("%i", num2);
}
