/*
Algoritmo
do
switch menu= -1

1:
escribe cuantos letras tiene el nombre
escribe un nombre
por cada letra hacer funcion aleatorio
res = res + aleatorio
res = total% que tienes con esa persona
menu=-1

2:
escribe 5 numeros de la suerte
for( cada numero se hace la funcion de aleatorio)
res = res + aleatorio
res = total% de suerte que tienes con esos numeros
menu=-1

3:
funcion fibonacci
escribe que posicion de fibo quieres
funcion = printf(1)
        for(pos=0 pos<n pos++)
            m=x+y
            print(m)
            y=x
            x=m
si pos = 1 solo imprime el primer numero sin el for
si pos = 0 no hace nada y te regresa al menu
menu=-1

4:
Sales del programa
menu=4

default:
eso no existe
menu=-1

while menu=-1
entonces se repite el menu con cualquier cosa que hagas excepto picar salir
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int aleatorio()
{
    int i,j;
    j = rand()%100;
    return j;
}

void fibo(int n)
{

    int x=1,y=0,m=0,pos;
    if(n>1)
        {
        printf("1\n");
        for(pos=0;pos<n;pos++)
            {
            m=x+y;
            printf("%i\n",m);
            y=x;
            x=m;
            }
        }
    else if(n==1)
        {
        printf("1\n");
        }
    else;

}


int main()
{
    int menu = -1;
    srand(time(NULL));
    int n,i,longitud;
    float res=0,res2=0;
    char nom;
    do
    {
        printf("\n\nBienvenido al menu, usted quiere?\n1 El amor de tu vida \n2 numeros de la suerte G\n3 Funcion \n4 Salir\n");
        scanf("%i",&menu);
        switch(menu)
            {
            case 1:
                printf("Le vamos a dar la probabilidad que tiene con esa persona especial\nCuantas letras tiene su nombre\n");
                scanf("%i",&longitud);
                printf("Escriba el nombre de su amado/a\n");
                for(i=0;i<=longitud;i++) //El problema es que en este for no toma primero el scan y luego el print y luego la funcion, hace primero el print luego funcion y luego scan y no se porque
                {
                scanf("%c",&nom);
                printf("Con la letra %c tienes %i de probabilidad\n",nom,aleatorio());
                res = res + aleatorio();
                }
                res2 = res/longitud;
                printf("Tienes el %.0f porciento de salir con el/ella",res2);
                menu = -1;
                break;
            case 2:
                printf("Le vamos a decir si sus numeros de la suerte son de hecho suerte \nEscriba sus 5 numeros\n");
                for(i=0;i<=5;i++)
                {
                scanf("%i",&n);
                printf("El %i es %i porciento de suerte\n",n,aleatorio());
                res = res + aleatorio();
                }
                res2 = res/5;
                printf("\nEsos numeros combinados tienen %.0f porciento de suerte",res2);
                menu = -1;
                break;
            case 3:
                printf("Le vamos a dar la funcion de fibonacci\nCuantas posiciones de Fibonacci Quiere? ");
                scanf("%i",&n);
                fibo(n);
                menu = -1;
                break;
            case 4:
                printf("Gracias, hasta luego\n");
                break;
            default:
                printf("Escriba un numero de la lista...");
                menu = -1;
                break;
            }
    } while(menu==-1);
    return 0;
}
