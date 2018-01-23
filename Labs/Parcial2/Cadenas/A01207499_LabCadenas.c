#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15

/* César Buenfil Vázquez
        A01207499
        Lab Cadenas */



//Funcion que toma el string y cuenta cuantas x o X hay.
int cromosomas_x(char a[])
{
    int i,res=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='x'||a[i]=='X')
        {
            res++;
        }
    }
    return res;
}

//Funcion que toma el string y cuenta cuantas y o Y hay.
int cromosomas_y(char a[])
{
    int i,res=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='y'||a[i]=='Y')
        {
            res++;
        }
    }
    return res;
}

//Funcion que agarra de parámetros los números de cromosomas de X y Y y los compara para determinar sexo.
void determina_sexo(int a,int b)
{
  printf("\n");

    if(a>b)
    {
        printf("Es mujer\n");
    }
    else if(a<b)
    {
        printf("Es hombre\n");
    }
    else
    {
        printf("Indefinido\n");
    }
}

//Funcion que recibe un arreglo y lo imprime sin espacios.
void imprime_limpio(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++)
    {
      if(a[i]!=' ')
        printf("%c",a[i]);
  }
  printf("\n");
}

//Funcion que transforma el arreglo a todo \0
void limpia_arreglo(char a[])
{
  int i;
  for(i=0;a[i]>MAX;i++)
    {
      a[i]='\0';
    }

}

//Funcion que pasa lo del arreglo a al arreglo b si no hay espacio
void copia_arreglo(char a[],char b[])
{
  int i,j=0;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]!=' ')
    {
      b[j]=a[i];
      j++;
    }

  }

}

//Funcion que imprime arreglo
void imprime_arreglo(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++)
  {
    printf("%c",a[i]);

  }
}

//Funcion que imprime el menu
void menu()
{
    printf("MENU\n 1. Determinar el sexo\n 2. Imprimir sin espacios\n 3. Copiar arreglo sin espacios\n 4. Salir\n Opcion?\n");
}


//El main
int main()
{
  //declaración de variables
    int opcion,x;
    char cromo[MAX],cromo2[MAX];
    //crea el menu una vez y si regresa al final 1 lo vuelve a hacer
    do
    {
      menu();
      scanf("%i%*c",&opcion);
      printf("Dame los cromosomas: ");
      gets(cromo);
      switch(opcion)
      {
      case 1:
          printf("Hay %i X cromosomas\n",cromosomas_x(cromo));
          printf("Hay %i Y cromosomas\n",cromosomas_y(cromo));
          determina_sexo(cromosomas_x(cromo),cromosomas_y(cromo));
          break;
      case 2:
          imprime_limpio(cromo);
          break;
      case 3:
          limpia_arreglo(cromo2);
          copia_arreglo(cromo,cromo2);
          imprime_arreglo(cromo2);
          break;
      case 4:
      break;

      default:
      printf("Es del 1 al 4");
      break;

      }
      printf("\nQuieres seguir haciendo algo?\nsi (1)\nno (2)\n ");
      scanf("%i%*c",&opcion);
    } while(opcion==1);

}
