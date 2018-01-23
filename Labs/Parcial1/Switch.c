#include<stdio.h>

int main()
{
int numero1,numero2,pos,mayor,menor;
printf("Escribe el numero de puntos que tiene el domino");
printf("\nEn la parte de arriba? ");
scanf("%i",&numero1);
printf("\nEn la parte de abajo? ");
scanf("%i",&numero2);

if(numero1>numero2)
{
    mayor = numero1
    menor = numero2
}
else
{
    mayor = numero2
    menor = numero1
}
if(mayor<7&&mayor>-1&&menor<7&&menor>-1){
switch(mayor)
{
case 0:
    pos = mayor;
    break;
case 1:
    pos = 6 + mayor;
    break;
case 2:
    pos = 12 + mayor;
    break;
case 3:
    fila = 4
case 4:
    fila = 5
case 5:
    fila = 6
case 6:
    fila = 7
}
}
return 0;
}
