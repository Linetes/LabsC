/*
Algoritmo
do
switch menu= -1

1:
te da 50 numeros random entre el 0 y el 19
num2,num1
for(num1=0 num1<50 ++num1)
    num2 = rand()%20

2:
sumatoria
escanea un numero n
i
res=0
    for(i=3 i <= n i++)
        arriba = sqrt(i-2)
        abajo = pow(i,2)
        res = res + (arriba / abajo)
    return res


3:
Sales del programa
menu=3

default:
eso no existe
menu=-1

while menu=-1
entonces se repite el menu con cualquier cosa que hagas excepto picar salir
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void aleatorio()
{
    int num2,num1;
    for(num1=0;num1<50;++num1)
    {
    num2 = rand()%21;
    printf("%i\n",num2);
    }

}

float sumatoria(int n)
{
    int i;
    float res=0;
    for(i=3;i <= n;i++)
    {
        float arriba = sqrt(i-2);
        float abajo = pow(i,2);
        res = res + (arriba / abajo);
    }
    return res;
}

int main()
{
    int menu = -1;
    srand(time(NULL));
    int n;
    do
    {
        printf("\n\nBienvenido al menu, usted quiere?\n1 Numeros aleatorios \n2 Funcion G\n3 Salir \n");
        scanf("%i",&menu);
        switch(menu)
            {
            case 1:
                printf("Le vamos a dar 50 numeros entre el 0 y el 20\n");
                aleatorio();
                menu = -1;
                break;
            case 2:
                printf("Le vamos a dar la funcion sumatoria\nDanos tu numero ");
                scanf("%i",&n);
                sumatoria(n);
                printf("Su resultado es %f\n",sumatoria(n));
                menu = -1;
                break;
            case 3:
                printf("Gracias por participar");
                break;
            default:
                printf("Wat\nEscriba un numero de la lista...");
                menu = -1;
                break;
            }
    } while(menu==-1);
    return 0;
}
