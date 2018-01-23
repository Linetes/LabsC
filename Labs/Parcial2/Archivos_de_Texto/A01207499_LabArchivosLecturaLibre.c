#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MIN 50

/* César Buenfil Vázquez
        A01207499
    Lab Archivos Lectura Libre
                        */
//Procedimiento que guarda info en un texto y decodifica en otro
void esconde_en_archivo (char nombre[MIN])
{
  int i,j=0;
  char a[MIN];
  char b[MIN];
  FILE * escribir = fopen(strcat(nombre,".txt"),"w");
  if(escribir != NULL)
  {
    printf("Favor de introducir 1 Frase de menos de 50 caracteres\n");
    gets(a);
    fputs(a,escribir);
    fclose(escribir);
  }
  else
  {
    printf("Pues escribe algo");
  }
  FILE * escribir2 = fopen("mensaje_secreto.txt","w");
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
      fprintf(escribir2," ");
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

//Procediento que agarra un texto codificado y lo guarda en una cadena
//luego se crea otra cadena que guarda lo de la primera menos 1 en posicion ASCII
//Y lo imprime.
void encuentra_en_archivo()
{
  int i,j=0;
  char a[MIN];
  char b[MIN];
  FILE * leer = fopen("mensaje_secreto.txt","r");
  if(leer != NULL)
  {
    while(!feof(leer))
    {
      fscanf(leer,"%c",&a[j]);
      j++;
    }
    for(i=0;i<j-1;i++)
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
    }
    fclose(leer);
  }
  else
  {
    printf("Meh");
  }
}


//Funcion que imprime el menu
void menu()
{
  printf("MENU\n 1. Codifica Archivo\n 2. Decodifica Archivo\n 3. Salir\n Opcion?\n");
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
      case 2:
        printf("Vamos a decodificar tu texto\n");
        encuentra_en_archivo();
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
