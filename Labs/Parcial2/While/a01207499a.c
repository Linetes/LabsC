#include<stdio.h>
#include<math.h>
/*

Algoritmo
res = 1 y i =0
while i sea menor que n
    acum = acum*x
    i mas 1
regresar acum

*/

float power(int x,int n)
{

    float acum=1,i=0;
    while(i<n)
    {
        acum = acum*x;
        i++;
    }
    return acum;
}

/*

Algoritmo
i=1 cuadraro, quinta, acum=0
while i<=n
    cuadrado = power(i,2)
    quinta = power(i,5)
    acum = (sqrt(.75*i))/(sqrt(quinta+cuadrado)+1)
    res = res+acum
    i mas 1
    return res

*/

float sumatoria(int n)
{
    int i=1;
    float cuadrado,quinta,acum=0,res=0;
    while(i<=n)
    {
        cuadrado = power(i,2);
        quinta = power(i,5);
        acum = (sqrt(.75*i))/(sqrt(quinta+cuadrado)+1);
        res = res+acum;
        i++;
    }
    return res;
}

/*

Algoritmo

i=1 acum=0 divisor=1
    while(i<z)
        if(i%2 = 0)
        {
            acum = acum - 1.00/divisor
        }
        else
        {
            acum = acum + 1.00/divisor
        }

        i++; mas 1
        divisor mas 2

    }
    return acum*4
*/

float aproximacion(int z)
{
    int i=1;
    float acum=0,divisor=1;
    while(i<z)
    {
        if(i%2 == 0)
        {
            acum = acum - 1.00/divisor;
        }
        else
        {
            acum = acum + 1.00/divisor;
        }

        i++;
        divisor++;
        divisor++;

    }
    return acum*4;
}


int main()
{
    int x,n,funcion;
    long int z;
    printf("Haz entrado a la 8va dimension\nFunciones\n1.Potencia\n2.Sumatoria\n3.Aproximacion al valor de PI\n4.Salir\n");
    scanf("%i",&funcion);
    switch(funcion)
    {
        case 1:
            printf("Bienvenido a power house\nPon tu numero deseado\n");
            scanf("%i",&x);
            printf("Ahora pon a la potencia que lo quieres multiplicar\n");
            scanf("%i",&n);
            power(x,n);
            printf("\nTu resultado es %f\n",power(x,n));
            break;
        case 2:
            printf("Bienvenido a suma house\nPon tu numero deseado\n");
            scanf("%i",&n);
            sumatoria(n);
            printf("\nTu resultado es %f\n",sumatoria(n));
            break;
        case 3:
            printf("Bienvenido a PI house\nPon tu numero deseado\n");
            scanf("%li",&z);
            if(z==0)
            {
                printf("Eso no se puede");
            }
            else
            {
            aproximacion(z);
            printf("\nTu resultado es %f\n",aproximacion(z));
            }
            break;
        case 4:
            printf("Gracias por participar\n");
            break;
        default :
            printf("Eso no etsiste");

    }
return 0;
}
