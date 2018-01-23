/*

Algoritmo

float vel ac res
switch
case 1
if vel=0 or rad=0
    put no valida
res = pow(vel,2)/rad

case 2
if ac=0 or rad=0
    put no valida
res = sqrt(ac*rad)

case 3
if vel=0 or ac=0
    put no valida
res = pow(vel,2)/ac

 */

#include<stdio.h>
#include<math.h>

int main (){

    int fisica;
    float vel,ac,rad,res;
    printf("Que quiere sacar?\n");
    printf("Ponga ~1~ para sacar la acceleración centripeta teniendo velocidad(m/s) y radio(m)\n");
    printf("Ponga ~2~ para sacar la velocidad de una particula teniendo aceleracion centripeta(m/s^2) y radio(m)\n");
    printf("Ponga ~3~ para sacar el radio teniendo velocidad(m/s) y aceleracion centripeta\n");

    scanf("%i",&fisica);

    switch(fisica)
{
    case 1:
        printf("Usted ha seleccionado sacar la aceleracion centripeta\n\n");
        printf("Ponga la velocidad en metros sobre segundos ");
        scanf("%f",&vel);
        printf("\nPonga el radio en metros ");
        scanf("%f",&rad);
        if(vel==0||rad==0){
            printf("\nOperacion invalida");
            break;
        }
        else{
        res = pow(vel,2)/rad;
        printf("\nSu resultado es %f metros sobre segundos al cuadrado",res);
        break;
        }
    case 2:
        printf("Usted ha seleccionado sacar la velocidad de una particula\n\n");
        printf("Ponga la aceleracion en metros sobre segundos al cuadrado ");
        scanf("%f",&ac);
        printf("\nPonga el radio en metros ");
        scanf("%f",&rad);
        if(ac==0||rad==0){
            printf("\nOperacion invalida\n");
            break;
        }
        else{
        res = sqrt(ac*rad);
        printf("\nSu resultado es %f metros sobre segundos",res);
        break;
        }
    case 3:
        printf("Usted ha seleccionado sacar el radio\n\n");
        printf("Ponga la velocidad en metros sobre segundos ");
        scanf("%f",&vel);
        printf("\nPonga la aceleracion en metros sobre segundos al cuadrado ");
        scanf("%f",&ac);
        if(vel==0||ac==0){
            printf("\nOperacion invalida\n");
            break;
        }
        else{
        res = pow(vel,2)/ac;
        printf("\nSu resultado es %f metros",res);
        break;
        }
    default:
        printf("Operacion invalida\n");
}



return 0;
}
