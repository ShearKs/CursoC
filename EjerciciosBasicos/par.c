#include <stdio.h>

int main()
{

    int num;

    printf("Introduce un número entero: ");

    scanf("%i", &num);

    if (num % 2 == 0)
    {

        printf("%i ES PAR\n", num);
    }
    else
    {

        printf("%i ES IMPAR\n", num);
    }

    return 0;
}