#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


float cuadradoNum(int num1);

int main()
{

    float cuadrado;
    int numAElevar;
    printf("Ingrese un numero para elevar al cuadrado: \n");
    scanf("%d", &numAElevar);

    cuadrado = cuadradoNum(numAElevar);

    printf("\nEl cuadrado de %d es el %.0f \n", numAElevar, cuadrado);

    return 0;
}


float cuadradoNum(int num1) 
{
    return num1 * num1;
}