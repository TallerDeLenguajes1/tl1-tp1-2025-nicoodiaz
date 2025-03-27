#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

//4) a.
float cuadradoNum(int num1);

//4) b.
void numAlCuadrado(int num2);

int main()
{
    //4) a.
    float cuadrado;
    int numAElevar;
    printf("Ingrese un numero para elevar al cuadrado: \n");
    scanf("%d", &numAElevar);

    cuadrado = cuadradoNum(numAElevar);

    printf("\nEl cuadrado de %d es el %.0f \n", numAElevar, cuadrado);

    //4) b.
    numAlCuadrado(numAElevar);
    return 0;
}


float cuadradoNum(int num1) 
{
    return num1 * num1;
}

void numAlCuadrado(int num2)
{
    float cuadNum = num2 * num2;
    printf("\nPunto 4) b.");
    printf("\nEl cuadrado de %d es el %.0f \n", num2, cuadNum);
}