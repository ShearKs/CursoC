#include <stdio.h>
#include <stdlib.h>


int main(){

    int length = 8;
 

    int *array = malloc(sizeof(int)* length);
    
    //Llenamos el array
    for (int i = 0 ; i < length ; i++){
        array[i] = i + 1;

    }
    //Visualizamos el array
     for (int i = 0 ; i < length ; i++){
        printf("Valor de array[%i] = %i\n",i , array[i]);

    }

    //Produce un error
    //array[10000000] = 5;

    //para liberar espacio
    free(array);


}