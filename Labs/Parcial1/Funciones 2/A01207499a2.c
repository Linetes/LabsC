/*

Algoritmo

seleccione nota
seleccione acorde
funcion acordemayor =
nota + 2 = nota2
nota2 + 1.5 = nota3
funcion acordemenor =
nota + 1.5 = nota2
nota2 + 1.5 = nota3

print nota1,nota2 y nota 3

*/
#include "misfunciones.h"
#include <stdio.h>
#include <stdlib.h>
int main(){

int acorde;

    printf("\nQue tipo de acorde quieres?\nMayor(1)\nMenor(2)\nDisminuido(3)\n");
    scanf("%i",&acorde);
    switch(acorde)
    {
        case 1:
            printf("\nHaz seleccionado acorde mayor");
            may();
            break;
        case 2:
            printf("\nHaz seleccionado acorde menor");
            men();
            break;
        case 3:
            printf("\nHaz seleccionado acorde disminuido");
            dis();
            break;
        default:
            printf("chale eso no etsiste");
    }

}

