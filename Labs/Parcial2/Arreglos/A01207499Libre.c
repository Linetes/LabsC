/*

Algoritmo

Menu Principal
1. Poblacion
2. Futbol
3. Salir

Poblacion
1. Inicializa arreglo
2. Captura arreglo
3. Imprime arreglo
4. Ciudades mayores a 1000 personas
5. Ciudades menores a 1000 personas
6. Ciudad con mayor numero de habitantes
7. Salir
Opcion?

Futbol
1. Inicializa arreglo
2. Captura arreglo
3. Imprime arreglo
4. Equipo con mas goles
5. Equipo con menos goles
6. Equipo random
7. Salir
Opcion?

Poblacion

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

4 Mayores
mientras que i=0 sea menor que 10, i++
if numeros > 1000
    print
else
    nada

5 Menores
mientras que i=0 sea menor que 10, i++
if numeros < 1000
    print
else
    nada

6 Mayor
mientras que i=0 sea menor que 10, i++
if numeros[0] < numeros[i]
numeros[0] = numeros[i]
print

7 Salir

Futbol

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

4 Mayor
mientras que i=0 sea menor que 10, i++
if numeros[0] < numeros[i]
numeros[0] = numeros[i]
print

5 Menor
mientras que i=0 sea menor que 10, i++
if numeros[0] > numeros[i]
numeros[0] = numeros[i]
print

6 Aleatorio
i = rand()%10;
printf numeros[i]

7 Salir

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

void mayores_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(numeros[i]>= 1000)
        {
            printf("%i ", numeros[i]);
        }
        else
        {

        }

    }
}

void menores_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(numeros[i]<= 1000)
        {
            printf("%i ", numeros[i]);
        }
        else
        {

        }

    }
}

void mayor_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
       if(numeros[0] < numeros[i])
           numeros[0] = numeros[i];
    }
    printf("la ciudad que tiene mas gente es la que tiene %i de habitantes", numeros[0]);
}

void menor_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
       if(numeros[0] < numeros[i])
           numeros[0] = numeros[i];
    }
    printf("la ciudad que tiene mas gente es la que tiene %i de habitantes", numeros[0]);
}

void mayorfut_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
       if(numeros[0] < numeros[i])
           numeros[0] = numeros[i];
    }
    printf("El equipo con mas goles tiene %i goles", numeros[0]);
}

void menorfut_arreglo(int numeros[10])
{
    int i;
    for(i=0;i<MAX;i++)
    {
       if(numeros[0] > numeros[i])
           numeros[0] = numeros[i];
    }
    printf("El equipo con menos goles tiene %i goles", numeros[0]);
}

void aleatorio(int numeros[10])
{
    int i;
    i = rand()%10;
    printf("El equipo random es el que tiene %i goles\n",numeros[i]);

}

void main()
{
    srand ( time(NULL) );
    int numeros[10],x,y,menu,menupob,menufut,repetir=1,repetirdentro=1;

    do
    {
    printf("\n\nMENU DE OPCIONES\n1. Poblaciones\n2. Resultados del Futbol\n3. Salir\n");
    scanf("%i",&menu);
        switch(menu)
        {
    case 1:
        do
        {
        printf("\n\nBienvenido a la parte de Poblacion\nMENU DE OPCIONES\n1. Borra arreglo\n2. Captura arreglo\n3. Imprime arreglo\n4. Ciudades Grandes\n5. Ciudades Peques\n6. Ciudad mas grande\n7. Salir\nOpcion?\n");
        scanf("%i",&menupob);
        switch(menupob)
            {
            case 1:
                printf("\nVamos a resetear el arreglo...");
                inicializa_arreglo(numeros);
                break;
            case 2:
                printf("\nDanos las poblaciones de 10 ciudades...\n");
                captura_arreglo(numeros);
                break;
            case 3:
                printf("\nEstas son las poblaciones\n");
                imprime_arreglo(numeros);
                break;
            case 4:
                printf("\nEstas son las ciudades con poblacion mayor a 1000 personas\n");
                mayores_arreglo(numeros);
                break;
            case 5:
                printf("\Estas son las ciudades con poblacion menor a 1000 personas\n");
                menores_arreglo(numeros);
                break;
            case 6:
                mayor_arreglo(numeros);
                break;
            case 7:
                printf("\nUsted va a salir del programa\n");
                repetirdentro=0;
                break;
            default:
                printf("\nEso no existe prro\n");
            }
        }while(repetirdentro==1);
        break;
    case 2:
        do
        {
        printf("\n\nBienvenido a la parte de Resultados del Futbol\nMENU DE OPCIONES\n1. Borra arreglo\n2. Goles por Equipo\n3. Imprime los Goles por equipo\n4. Equipo con mas goles\n5. Equipo con menos goles\n6. Equipo random\n7. Salir\nOpcion?\n");
        scanf("%i",&menupob);
        switch(menupob)
            {
            case 1:
                printf("\nVamos a resetear el arreglo...");
                inicializa_arreglo(numeros);
                break;
            case 2:
                printf("\nDanos los goles por equipo...\n");
                captura_arreglo(numeros);
                break;
            case 3:
                printf("\nEstos son los goles por equipo\n");
                imprime_arreglo(numeros);
                break;
            case 4:
                mayorfut_arreglo(numeros);
                break;
            case 5:
                menorfut_arreglo(numeros);
                break;
            case 6:
                aleatorio(numeros);
                break;
            case 7:
                printf("\nUsted va a salir del programa\n");
                repetirdentro=0;
                break;
            default:
                printf("\nEso no existe prro\n");
            }
        }while(repetirdentro==1);
        break;
    case 3:
         printf("\nUsted va a salir del programa\n");
        repetir=0;
        break;
    default:
        printf("\nEso no existe prro\n");

        }
    }while(repetir==1);
}
