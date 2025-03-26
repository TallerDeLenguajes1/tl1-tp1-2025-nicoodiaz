#include <stdio.h>
#include <stdlib.h>


int main() 
{
    //Declaro variable y puntero y le asigno la direccion de memoria
    int variable = 3;
    int *pVariable = &variable;

    //e) 1)
    printf("Contenido del puntero: %d \n", *pVariable);
    //printf("Contenido del puntero: %d \n", *pVariable);

    //e) 2)
    printf("Direccion de memoria almacenada por el puntero: %p \n", pVariable);
    //e) 3)
    printf("Direccion de memoria de la variable: %p \n", &variable);
    //e) 4)
    printf("Direccion de memoria del puntero: %p \n", &pVariable);
    //e) 5)
    printf("Tamaño de la memoria en Bytes de: variable %ld \n", sizeof(variable));


    return 0;
}