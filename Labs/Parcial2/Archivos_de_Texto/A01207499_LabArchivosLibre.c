#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MIN 50

/* César Buenfil Vázquez
        A01207499
    Lab Archivos Libre
                        */
//Procedimiento que guarda info en un texto y decodifica en otro
void esconde_en_archivo (char nombre[MIN])
{
  int i,j=0;
  char a[20];
  char b[20];
  FILE * escribir = fopen(strcat(nombre,".txt"),"w");
  if(escribir != NULL)
  {
    printf("Favor de introducir 1 Frase de menos de 20 caracteres\n");
    gets(a);
    fputs(a,escribir);
    fclose(escribir);
  }
  else
  {
    printf("Pues escribe algo");
  }
  FILE * escribir2 = fopen("mensaje secreto.txt","w");
  if(escribir != NULL)
  {
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]=='x'||a[i]=='y'||a[i]=='z')
      {
      b[j]=a[i]-23;
      fprintf(escribir2,"%c",b[j]);
      }
      else if(a[i]=='X'||a[i]=='Y'||a[i]=='Z')
      {
      b[j]=a[i]-23;
      fprintf(escribir2,"%c",b[j]);
      }
      else if(a[i]==' ')
      {
      printf(" ");
      }
      else
      {
      b[j]=a[i]+3;
      fprintf(escribir2,"%c",b[j]);
      }
      j++;
    }
    fclose(escribir2);
  }
  else
  {
    printf("Meh");
  }
}


//Funcion que imprime el menu
void menu()
{
  printf("MENU\n 1. Esconde Archivo\n 2. Salir\n Opcion?\n");
}

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
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        esconde_en_archivo(nombre);
        break;
      default:
        printf("Es solo una opcion");
        break;
    }
      printf("\nQuieres seguir haciendo algo?\nsi (1)\nno (2)\n ");
      scanf("%i%*c",&opcion);
  } while(opcion==1);
return 0;
}
