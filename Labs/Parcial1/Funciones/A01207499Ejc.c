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

float macm (float m)
{
float res = m*1000;
return res;
}

float ftain (float ft)
{
float res = ft*12;
return res;
}


int main()
{
    int opcion;
    float ft,m,res,choose;
    printf("Quiere pasar de pies a metros? Presione 1\nSi quiere de metros a pies presione 2\n 3 para m a cm\n 4 para ft a in\nO presione 5 para salir\n");
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
    printf("Escriba los metros ");
    scanf("%f",&m);
    res = macm(m);
    printf("%f",res);
    break;

    case 4:
    printf("Escriba los pies ");
    scanf("%f",&ft);
    res = ftain(ft);
    printf("%f",res);
    break;

    case 5:
    printf("Bye");
    break;

    default:
    printf("What? eso no existe");
    }

return 0;
}
