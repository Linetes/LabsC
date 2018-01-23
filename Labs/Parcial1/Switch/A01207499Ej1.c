/*

Algoritmo

int magnitud
switch
    case 3
    case 4
        print Generalmente no se siente, pero es registrado
    case 5
        print A menudo se siente, pero sólo causa daños menores
    case 6
        print Ocasiona daños ligeros a edificios
    case 7
        print Puedo ocasionar daños severos en área muy pobladas
    case 8
    case 9
        print Terremoto mayor. Causa grandes daños

    case 10
        print Gran terremoto. Destrucción total en comunidades cercanas
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
        printf("A menudo se siente, pero sólo causa daños menores");
        break;
    case 6:
        printf("Ocasiona daños ligeros a edificios");
        break;
    case 7:
        printf("Puedo ocasionar daños severos en área muy pobladas");
        break;
    case 8:
    case 9:
        printf("Terremoto mayor. Causa grandes daños");
        break;
    case 10:
        printf("Gran terremoto. Destrucción total en comunidades cercanas");
        break;
    default:
        printf("Escala no existe");
}

return 0;
}
