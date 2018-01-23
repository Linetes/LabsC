#include<stdio.h>
#include<math.h>

float grad_rad (float grad)
{
return grad*0.0174533;
}

float secante(float grad)
{
return 1/cos(grad);
}

float cosecante(float grad)
{
return 1/sin(grad);
}

int main()
{
    int opcion;
    float grad,res;
    int trig;
    printf("Identidades de Trigonometria (1)Secante, (2)Cosecante\n");
    scanf("%i",&opcion);

    switch(opcion)
    {
     case 1:
        printf("Dame los grados ");
        scanf("%f", &grad);
        res=grad_rad(grad);
        printf("El secante de %.2f grados es %.2f\n", grad, secante(res));
            break;
    case 2:
        printf("Dame los grados ");
        scanf("%f", &grad);
        res=grad_rad(grad);
        printf("El cosecante de %.2f grados es %.2f\n", grad, cosecante(res));
            break;
    default:
        printf("Bye");
    }



return 0;
}
