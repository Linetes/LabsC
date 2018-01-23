#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

/* César Buenfil Vázquez
        A01207499
    Lab Cadenas Libre
Cifrado César, como yo hehe xD
                        */


//Funcion que pasa lo del arreglo a al arreglo b si no hay espacio +3 y si son x y o z se le resta 23.
void codifica_arreglo(char a[],char b[])
{
  int i,j=0;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='x'||a[i]=='y'||a[i]=='z')
    {
    b[j]=a[i]-23;
    printf("%c",b[j]);
    }
    else if(a[i]=='X'||a[i]=='Y'||a[i]=='Z')
    {
    b[j]=a[i]-23;
    printf("%c",b[j]);
    }
    else if(a[i]==' ')
    {
    printf(" ");
    }
    else
    {
    b[j]=a[i]+3;
    printf("%c",b[j]);
    }
    j++;
  }
}

//Funcion que pasa lo del arreglo a al arreglo b si no hay espacio -3 y si son a b o c se le suma 23.
void decodifica_arreglo(char a[],char b[])
{
  int i,j=0;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a'||a[i]=='b'||a[i]=='c')
    {
    b[j]=a[i]+23;
    printf("%c",b[j]);
    }
    else if(a[i]=='A'||a[i]=='B'||a[i]=='C')
    {
    b[j]=a[i]+23;
    printf("%c",b[j]);
    }
    else if(a[i]==' ')
    {
    printf(" ");
    }
    else
    {
    b[j]=a[i]-3;
    printf("%c",b[j]);
    }
    j++;
  }
}


//Funcion que transforma el arreglo a todo \0
void limpia_arreglo(char a[])
{
  int i;
  for(i=0;a[i]>MAX;i++)
    {
      a[i]='\0';
      printf("%c",a[i]);
    }

}


//Funcion que imprime el menu
void menu()
{
    printf("MENU\n 1. Codificar algo\n 2. Decodificar algo\n 3. Salir\n Opcion?\n");
}


//El main
int main()
{
  //declaración de variables
    int opcion;
    char palabra[MAX],palabra2[MAX];
    //crea el menu una vez y si regresa al final 1 lo vuelve a hacer
    do
    {
      menu();
      scanf("%i%*c",&opcion);
      switch(opcion)
      {
      case 1:
          printf("Danos el nombre que quieras codificar ");
          gets(palabra);
          limpia_arreglo(palabra2);
          codifica_arreglo(palabra,palabra2);
          break;
      case 2:
          printf("Danos el nombre que quieras decodificar ");
          gets(palabra);
          limpia_arreglo(palabra2);
          decodifica_arreglo(palabra,palabra2);
          break;
      case 3:
          break;
      default:
      printf("Es del 1 al 3");
          break;

      }
      printf("\nQuieres seguir haciendo algo?\nsi (1)\nno (2)\n ");
      scanf("%i%*c",&opcion);
    } while(opcion==1);

}
