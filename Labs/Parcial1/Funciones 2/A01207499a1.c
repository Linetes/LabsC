#include<stdio.h>
#include"misfunciones.h"

void main ()
{
    float disttortuga,distturtle,dismex;
        printf("Bienvenido a la carrera anual de tortugas\nDe este lado tenemos a Mr Tortuga\nY de este lado tenemos a Mr Turtle\nLa carrera EMPIEZA EN 3,2,1\nTIEMPO\n");
        printf("El Mr Toruga recorrio un distancia de?\n");
        scanf("%f",&disttortuga);
        printf("Y el Mr Turttle recorrio un distancia de?\n");
        scanf("%f",&distturtle);
        printf("Tenemos a Mr Turtle con una distancia de %.2f metros y a Mr Turtle con una distancia de %.2f pies\n",disttortuga,distturtle);
        printf("Vamos a convertir la distancia de Mr Turtle a metros ya que estamos en Mexico y viva la justicia\n");
        dismex = ftam(distturtle);
        printf("La distancia de Mr Turtle es de %f metros\n",dismex);
        printf("Y el ganador es, tambores porfa\n");
        if(disttortuga>dismex)
        {
            printf("Gana Mr Tortuga!");

        }
        else if(disttortuga<dismex)
        {
            printf("Gana Mr Turtle!");

        }
        else
            printf("Empate...");

}
