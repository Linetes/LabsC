#include<stdio.h>

float ftam (float ft)
{
float res = ft/3.28084;
return res;
}

float maft (float m)
{
float res = m*3.28084;
return res;
}



int main()
{
    int opcion;
    float ft,m,res;
    printf("Quiere pasar de pies a metros? Presione 1\nSi quiere de metros a pies presione 2\nO presione 3 para salir\n");
    scanf("%i",&opcion);

    switch(opcion)
    {
    case 1:
    printf("Escriba los pies ");
    scanf("%f",&ft);
    res = ftam(ft);
    printf("%f",res);
    break;

    case 2:
    printf("Escriba los metros ");
    scanf("%f",&m);
    res = maft(m);
    printf("%f",res);
    break;

    case 3:
    printf("Bye");
    break;

    default:
    printf("What? eso no existe");
    }

return 0;
}
