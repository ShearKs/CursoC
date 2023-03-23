#include <stdio.h>
#include <stdlib.h>

// Suponiendo que el kilo de azúcar y de café están a 0'6 y 0'72 euros respectivamente, escribir en lenguaje C un programa que:

// 1º) Pida por teclado una cantidad (dato real) en euros.

// 2º) Si la mitad de la cantidad introducida se destina a comprar azúcar, una tercera parte a comprar café, y el resto no se gasta. Calcule cuántos kilos de azúcar y café (datos reales) se pueden comprar con dicha cantidad de dinero, así como la cantidad (dato real) de dinero sobrante.

// 3º) Muestre por pantalla los resultados (datos reales)

int main()
{

    float cantidad;

    printf("Introduzca una cantidad:");

    scanf("%f", &cantidad);

    // Ya tenemos en la variable 'cantidad' la cantidad en euros que ha aportado el usuario

    float cantidad_azucar = (cantidad / 2) / 0.6;
    float cantidad_cafe = (cantidad / 3) / 0.72;
    cantidad = cantidad / 6;

    // printf("La cantidad que has introducido es %.2f euros\n", cantidad);
    printf("%.2f kilos de azucar \n", cantidad_azucar);
    printf("%.2f kilos de azucar \n", cantidad_cafe);
    printf("\n\nQuedan %.2f euros\n", cantidad);
    
    return 0;
}
