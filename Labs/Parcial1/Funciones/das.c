#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float grados_radianes (float grados){
    return grados*0.0174533;
}

float cosecante(float grados){
    return 1/sin(grados);
}

float secante(float grados){
    return 1/cos(grados);
}

void menu(){
    printf("IDENTIDADES TRIGONOMETRICAS\n1. Secante\n2. Cosecante\n3. Salir\n");
}

int main(){

    int seleccion;
    float grados, res;
    menu();
    scanf("%i", &seleccion);

    switch(seleccion){
    case 1:
        printf("Dame los grados: ");
        scanf("%f", &grados);
        res=grados_radianes(grados);
        printf("El secante de %.2f grados es %.8f\n\n\n", grados, secante(res));
            break;
    case 2:
        printf("Dame los grados: ");
        scanf("%f", &grados);
        res=grados_radianes(grados);
        printf("El cosecante de %.2f grados es %.8f\n\n\n", grados, cosecante(res));
            break;
    default:
        printf("Ok Bye...\n\n\n");


    }
}
