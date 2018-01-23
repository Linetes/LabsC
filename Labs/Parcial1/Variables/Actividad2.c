/*

Algoritmo

Eo (a,b,c,aux=0)
aux = a/b
print aux
aux = a%b
print aux
aux = a/b-c
print aux
aux = a/(b-c)
print aux

 */

#include <stdio.h>

int main () {
    int a;
    int b;
    int c;
    float aux;


    printf("Dame el valor de a: ");
    scanf("%i",&a);
    printf("Dame el valor de b: ");
    scanf("%i",&b);
    printf("Dame el valor de c: ");
    scanf("%i",&c);

    aux = (float)a/(float)b;
    printf("\nEl valor introducido para %i/%i fue %f.\n\n\n", a,b,aux);
    aux = a%b;
    printf("\nEl valor introducido para %i%%i fue %f.\n\n\n", a,b,aux);
    aux = (float)a/(float)b-(float)c;
    printf("\nEl valor introducido para %i/%i-%i fue %f.\n\n\n", a,b,c,aux);
    aux = (float)a/((float)b-(float)c);
    printf("\nEl valor introducido para %i/(%i-%i) fue %f.\n\n\n", a,b,c,aux);
    return 0;
}
