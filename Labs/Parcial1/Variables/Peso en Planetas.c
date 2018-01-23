/*

Algoritmo

EO(gravedad,masa, peso=0)
peso= gravedad*masa

*/

#include <stdio.h>
#include <math.h>

int main() {

    float masa;
    float pesoPersonal;
    float peso;
    float pesoFinal = 0;
    float gravedadMercurio = 2.78;
    float gravedadVenus = 8.87;
    float gravedadTierra = 9.78;
    float gravedadLuna = 1.62;
    float gravedadMarte = 3.72;
    float gravedadJupiter = 22.88;
    float gravedadSaturno = 9.05;
    float gravedadUrano = 7.77;
    float gravedadNeptuno = 11.00;
    float gravedadPluton = 0.4;


    printf("Dame tu peso: ");
    scanf("%f",&pesoPersonal);

    masa = pesoPersonal/gravedadTierra;

    pesoFinal = masa*gravedadMercurio;
    printf("Tu peso en Mercurio es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadVenus;
    printf("Tu peso en Venus es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadTierra;
    printf("Tu peso en la Tierra es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadLuna;
    printf("Tu peso en la Luna es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadMarte;
    printf("Tu peso en Marte es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadJupiter;
    printf("Tu peso en Jupiter es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadSaturno;
    printf("Tu peso en Saturno es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadUrano;
    printf("Tu peso en Urano es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadNeptuno;
    printf("Tu peso en Neptuno es de %f \n",pesoFinal);

    pesoFinal = masa*gravedadPluton;
    printf("Tu peso en Pluton es de %f \n",pesoFinal);




    return 0;
}

