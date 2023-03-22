#include <stdio.h>
#include <stdlib.h>


void solve();


int main(){

   solve();
}

void solve(){



    char array [][50] = {"Esto es un array","Segundo Elemento","Tercero Elemento","Fin del array"};

    int longitud = sizeof(array);

    int num_elementos = longitud / sizeof(int);


    for (int i = 0 ; i < 4 ;i++){

        printf("%s\n", array[i]);

    }

    printf("Longitud del array :%i\n",longitud);
    printf("Cantidad de elementos de l array :%i\n",num_elementos);

}





















