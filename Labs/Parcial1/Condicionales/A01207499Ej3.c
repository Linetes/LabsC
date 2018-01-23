/*

Algoritmo

int temperatura
    if(tem >= 100)
      printf("Vapor")

    else if(tem >= 30 && tem < 100)
      printf("Caliente")

    else if(tem >= 0 && tem < 30)
      printf("Fria");

    else if(tem >= -273 && tem < 0)
      printf("Congelada")

    else if(tem < -273)
      printf("Inexistente")
*/


#include<stdio.h>

int main(){

int tem;
printf("Ponga la temperatura en Celcius ");
    scanf("%i",&tem);

    if(tem >= 100)
    {
      printf("Vapor");
    }

    else if(tem >= 30 && tem < 100)
    {
      printf("Caliente");
    }

    else if(tem >= 0 && tem < 30)
    {
      printf("Fria");
    }

    else if(tem >= -273 && tem < 0)
    {
      printf("Congelada");
    }

    else if(tem < -273)
    {
      printf("Inexistente");
    }

    else
    {
      printf("Usted ha roto la Internet");
    }





return 0;
}
