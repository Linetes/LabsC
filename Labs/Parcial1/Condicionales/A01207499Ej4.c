/*

Algoritmo

int nota1,nota2,mayor,menor,respuesta;


 if(nota1>nota2)
    mayor = nota1
    menor = nota2
else if(nota1<nota2)
    mayor = nota1
    menor = nota2
else
    mayor = nota1
    menor = nota2

respuesta = mayor-menor

 if(respuesta==0)
    printf("Es la misma nota")
 else if(respuesta==1)
    printf("Es una primera")
 else if(respuesta==2)
    printf("Es una segunda")
 else if(respuesta==3)
    printf("Es una tercera")
 else if(respuesta==4)
    printf("Es una cuarta");
 else if(respuesta==5)
    printf("Es una quinta")
 else if(respuesta==6)
    printf("Es una sexta")
 else if(respuesta==7)
    printf("Es una septima")

*/

#include<stdio.h>

int main(){

int nota1,nota2,mayor,menor,respuesta;
printf("Escriba 2 notas donde: \ndo=1 \nre=2 \nmi=3 \nfa=4 \nsol=5 \nla=6 \nsi=7\n");
    scanf("%i",&nota1);
    scanf("%i",&nota2);

 if(nota1>nota2)
{
    mayor = nota1;
    menor = nota2;
}
else if(nota1<nota2)
{
    mayor = nota1;
    menor = nota2;
}
else
{
    mayor = nota1;
    menor = nota2;
}

respuesta = mayor-menor;

 if(respuesta==0)
    {
    printf("Es la misma nota");
 }
 else if(respuesta==1)
    {
    printf("Es una primera");
 }
 else if(respuesta==2)
    {
    printf("Es una segunda");
 }
 else if(respuesta==3)
    {
    printf("Es una tercera");
 }
 else if(respuesta==4)
    {
    printf("Es una cuarta");
 }
 else if(respuesta==5)
    {
    printf("Es una quinta");
 }
 else if(respuesta==6)
    {
    printf("Es una sexta");
 }
 else if(respuesta==7)
    {
    printf("Es una septima");
 }


return 0;
}
