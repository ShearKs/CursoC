//#include <conio.h>
#include <stdio.h>
#include <math.h>


void sucesion1(), sucesion2(), sucesion3(), sucesion4();

int main()
{

    // sucesion1();
    //  sucesion2();
    // sucesion3();
    sucesion4();

    return 0;
}

void sucesion1()
{

    for (int i = 1; i <= 10000; i *= 10)
    {

        printf("%i  ", i);
    }

    printf("\n");
}

// Escribir en lenguaje C un programa que muestre por pantalla todos los números impares que hay entre el -101 y el -81, ambos inclusive.
void sucesion2()
{

    for (int i = -101; i <= -81; i++)
    {

        if (i % 2 != 0)
        {

            printf("%i ", i);
        }
    }
}

// Escribir en lenguaje C un programa que muestre por pantalla todos los números múltiplos de 4 que hay entre el 64 y el 44, ambos inclusive.
void sucesion3()
{

    for (int i = 64; i >= 44; i--)
    {

        if (i % 4 == 0)
        {

            printf("%i ", i);
        }
    }

    printf("\n");
}

// Escribir en lenguaje C un programa que muestre por pantalla los cuadrados de los diez primeros números naturales.
void sucesion4()
{

    int num;

    for (int i = 0; i <= 10; i++)
    {

        printf("%.f ", pow(num, 2));
    }

    printf("\n");
}
