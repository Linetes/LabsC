/*

Algoritmo

Menu
1. Inicializa arreglo
2. Captura arreglo
3. Imprime arreglo
4. Elementos impares en el arreglo
5. Sustituye arreglo
6. Invierte arreglo
7. Salir
Opcion?

1 Inicializa arreglo
obten numeros
mientras que i=0 sea menor que 10, i++
numeros i =0

2 Captura arreglo
mientras que i=0 sea menor que 10, i++
scan numeros i

3 Imprime arreglo
mientras que i=0 sea menor que 10, i++
print numeros i

4 Elementos impares
mientras que i=0 sea menor que 10, i++
if numeros i % 2 != 0
    print numeros i
else
    dont print

5 Sustituye arreglo
obten x y
mientras que i=0 sea menor que 10, i++
if numeros i ==x
    numeros i = y
    print numeros i
else
    print numeros i

6 Invertir arreglo
mientras que i=9 sea mayor o igual que 0, i--
print numeros i

*/



#include <stdio.h>
#define MAX 10
#define MIN 0

void inicializa_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        numeros[i]= 0;
    }
}

void captura_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        scanf("%i%*c", &numeros[i]);
    }
}

void imprime_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("%i ", numeros[i]);
    }
}

void impares_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(numeros[i]%2 != 0)
        {
            printf("%i ", numeros[i]);
        }
        else
        {

        }

    }
}

void sustituir_arreglo(int numeros[10],int x, int y)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(numeros[i]==x)
        {
            numeros[i]=y;
            printf("%i ", numeros[i]);
        }
        else
        {
            printf("%i ", numeros[i]);
        }

    }
}

void invertir_arreglo(int numeros[10])
{
    int i;
    for(i=9;i>=MIN;i--)
    {
        printf("%i ", numeros[i]);
    }
}

void main()
{
    int numeros[10],x,y,menu,repetir=1;

    do
    {
    printf("\n\nMENU DE OPCIONES\n1. Inicializa arreglo\n2. Captura arreglo\n3. Imprime arreglo\n4. Elementos impares en el arreglo\n5. Sustituye arreglo\n6. Invierte arreglo\n7. Salir\nOpcion?\n");
    scanf("%i",&menu);
    switch(menu)
        {
        case 1:
            printf("\nVamos a resetear el arreglo...");
            inicializa_arreglo(numeros);
            break;
        case 2:
            printf("\nDanos tu arreglo...\n");
            captura_arreglo(numeros);
            break;
        case 3:
            printf("\nEste es tu arreglo\n");
            imprime_arreglo(numeros);
            break;
        case 4:
            printf("\nEstos son los impares\n");
            impares_arreglo(numeros);
            break;
        case 5:
            printf("\nDanos un numero que quieras que se cambie\n");
            scanf("%i",&x);
            printf("\nDanos el numero que quieras que se cambie\n");
            scanf("%i",&y);
            printf("\nEste es tu nueo arreglo\n");
            sustituir_arreglo(numeros,x,y);
            break;
        case 6:
            printf("\nVamos a invertir el arreglo\n");
            invertir_arreglo(numeros);
            break;
        case 7:
            printf("\nUsted va a salir del programa\n");
            repetir=0;
            break;
        default:
            printf("\nEso no existe prro\n");
        }
    }while(repetir==1);
}
