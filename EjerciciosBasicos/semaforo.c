#include <stdio.h>

int main()
{

    int numColor;

    printf("Listado de colores de un semáforo: \n");
    printf("1. Rojo \n");
    printf("2. Verde \n");
    printf("3. Amarillo \n");

    printf("\n\nIntroduzca número de color: ");

    scanf("%i", &numColor);


    switch (numColor)
    {

    case 1:
        printf("Rojo significa: 'No Pasar' \n");
        break;
    case 2:
        printf("Verde significa: 'Adelante' \n");
        break;
    case 3:
        printf("Amarillo significa: 'Precaucion' \n");
        break;

    default:
        printf("ERRROR: %i, no está asociado ningún color.\n", numColor);
        break;
    }

    return 0;
}