#include<stdio.h>

int main(){

int trols,orcos,total,estofados;
printf("Inserta el numero de trols ");
scanf("%i",&trols);
orcos = 70.0*trols/30.0;
total = trols+orcos;
printf("Hay %i de miembros en la comunidad",total);
estofados = 30*(trols*4+orcos*2);
printf(" y se consumen %i de estofados al mes",estofados);

return 0;
}
