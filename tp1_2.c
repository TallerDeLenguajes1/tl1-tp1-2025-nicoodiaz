#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

//4) a.
float cuadradoNum(int num1);

//4) b.
void numAlCuadrado(int num2);

//4) d.
void  invertir(int a, int b);

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

    //4) c.
    int edad;
    printf("\nIngrese su edad: \n");
    scanf("%d", &edad);
    printf("\nLa direccion de la variable edad es %p y su contenido es %d \n", &edad, edad);

    //4) d.
    int numA, numB;
    printf("Ingrese el numero a: \n");
    scanf("%d", &numA);
    printf("Ingrese el numero b: \n");
    scanf("%d", &numB);

    printf("Numero A: %d y Numero B: %d", numA, numB);
    invertir(numA, numB);
    
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

void  invertir(int a, int b) 
{
    int pivote;
    pivote = a;
    a = b;
    b = pivote;
    printf("\nDespues de invertir, Numero A: %d y Numero B: %d\n", a, b);
}