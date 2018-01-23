#include<stdio.h>
#include<math.h>
/*

Algoritmo

    int i=0
    while(i<=n)
    {
        printf("%i\n",i)
        i mas 2
*/

void pares(int n)
{

    int i=0;
    while(i<=n)
    {
        printf("%i\n",i);
        i++;
        i++;
    }
}

/*

Algoritmo

    int i=1
    while(i<=n)
    {
        printf("%i\n",i)
        i mas 2
*/
void nones(int n)
{

    int i=1;
    while(i<=n)
    {
        printf("%i\n",i);
        i++;
        i++;
    }
}


int main()
{
    int funcion,n;
    printf("Cuales numeros quiere\n1.Pares\n2.Nones\n3.Salir\n");
    scanf("%i",&funcion);
    switch(funcion)
    {
        case 1:
            printf("Pares del numero?\n");
            scanf("%i",&n);
            pares(n);
            break;
        case 2:
            printf("Nones del numero\n");
            scanf("%i",&n);
            nones(n);
            break;
        case 3:
            printf("Gracias por participar\n");
            break;
        default :
            printf("Eso no etsiste");

    }
    return 0;
}
