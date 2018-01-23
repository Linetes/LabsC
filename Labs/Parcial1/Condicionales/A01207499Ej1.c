/*

Algoritmo

Var distancia,tiempo
tiempo = distancia/tiempo

*/

#include<stdio.h>

int main(){
 float distancia,tiempo,velocidad,velkm;

 printf("Ponga la distancia en metros ");
 scanf("%f",&distancia);
 printf("Ponga el tiempo en segundos ");
 scanf("%f",&tiempo);
velocidad = distancia/tiempo;
printf("Su velocidad es %.2f m/s",velocidad);
velkm = velocidad*3600/1000;
printf("\nSu velocidad es %.2f km/hr",velkm);

if(velkm <= 50){
    printf("\n Va muy lento");
}
else if((velkm <= 50)&&(velkm>=100)){
    printf("\n Va rapido");

    }
    else
    printf("\n Te estas pasando, bajale");
return 0;

}
