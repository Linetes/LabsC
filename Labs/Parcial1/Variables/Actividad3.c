/*

Algoritmo

EO(PI=3.141592,r,h,vol,a=1/3)
vol = a*PI*pow(r,2)*h
print vol

*/

#include <stdio.h>
#include <math.h>

int main() {
    float r;
    float h;
    float vol;
    float pi = 3.141592;
    float a = 1.0/3.0;

    printf("Dame el radio: ");
    scanf("%f",&r);
    printf("Dame la altura: ");
    scanf("%f",&h);


    vol = a*pi*pow(r,2)*h;
    printf("\n El volumen es %f \n",vol);

    return 0;
}
