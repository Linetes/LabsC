#include "Escritura.h"



//El main
int main()
{
  //declaración de variables
  int opcion,i,n;
  char nombre[MIN];
  //crea el menu una vez y si regresa al final 1 lo vuelve a hacer
  do
  {
    menu();
    scanf("%i%*c",&opcion);
    switch(opcion)
    {
      case 1:
        escribir_en_archivo(nombre);
        break;
      case 2:
        escribir_con_formato(nombre);
        break;
      case 3:
        escribir_en_bitacora(nombre);
        break;
      case 4:
        esconde_en_archivo(nombre);
        break;
      case 5:
        despliega_archivo(nombre);
        break;
      case 6:
        break;
      default:
        printf("Es del 1 al 6");
        break;
    }
      printf("\nQuieres seguir haciendo algo?\nsi (1)\nno (2)\n ");
      scanf("%i%*c",&opcion);
  } while(opcion==1);
return 0;
}
