/*

Algoritmo

int magnitud
switch
    case 3
    case 4
        print Generalmente no se siente, pero es registrado
    case 5
        print A menudo se siente, pero s�lo causa da�os menores
    case 6
        print Ocasiona da�os ligeros a edificios
    case 7
        print Puedo ocasionar da�os severos en �rea muy pobladas
    case 8
    case 9
        print Terremoto mayor. Causa grandes da�os

    case 10
        print Gran terremoto. Destrucci�n total en comunidades cercanas
    default
        print Escala no existe


 */

#include<stdio.h>

int main (){
int magnitud;
printf("Cual es la mignitud en escala Richter? ");
scanf("%i",&magnitud);

    switch(magnitud)
{
    case 3:
    case 4:
        printf("Generalmente no se siente, pero es registrado");
        break;
    case 5:
        printf("A menudo se siente, pero s�lo causa da�os menores");
        break;
    case 6:
        printf("Ocasiona da�os ligeros a edificios");
        break;
    case 7:
        printf("Puedo ocasionar da�os severos en �rea muy pobladas");
        break;
    case 8:
    case 9:
        printf("Terremoto mayor. Causa grandes da�os");
        break;
    case 10:
        printf("Gran terremoto. Destrucci�n total en comunidades cercanas");
        break;
    default:
        printf("Escala no existe");
}

return 0;
}
