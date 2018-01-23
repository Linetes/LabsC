#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MIN 50

/* César Buenfil Vázquez
        A01207499
    Lab Archivos
                        */

//Procedimiento que te pide escribir 5 oraciones y las guarda en un .txt
void escribir_en_archivo (char nombre[MIN])
{
  int i;
  char normal[MIN];
  FILE * escribir = fopen(strcat(nombre,".txt"),"w");
  if(escribir != NULL)
  {
    printf("Favor de introducir 5 oraciones separadas por ENTER\n");
    for(i=0;i<5;i++)
    {
      gets(normal);
      fputs(normal,escribir);
      fprintf(escribir,"\n");
    }
    fclose(escribir);
  }
  else
  {
    printf("Pues escribe algo");
  }
}
//Procedimiento que pide 3 cosas del alumno y las guarda en un texto
void escribir_con_formato (char nombre[MIN])
{
  int i,j,n;
  char normal[MIN];
  char palabras[3][MIN] = {"Nombre","Carrera","Calificacion"};
  printf("Cuantos alumnos quiere guardar info?\n");
  scanf("%i",&n);
  FILE * escribir = fopen(strcat(nombre,".txt"),"w");
  if(escribir != NULL)
  {
    for(i=0;i<n;i++)
    {
      printf("Favor de introducir la info del alumno %i \n",i+1);
      for(j=0;j<3;j++)
      {
        printf("Favor de introducir %s \n",palabras[j]);
        scanf("%s",normal);
        fprintf(escribir,"%s ",normal);
      }
      fprintf(escribir,"\n");
    }
    fclose(escribir);
  }
  else
  {
    printf("Pues escribe algo");
  }
}
//Procedimiento que puedes anadir lo que quieras al texto y con timestamp
void escribir_en_bitacora (char nombre[MIN])
{
  int i=0,j;
  char oracion[200];
  time_t timer;
  FILE * anadir = fopen(strcat(nombre,".txt"),"a");
  if(anadir != NULL)
  {
    time(&timer);
    fputs(ctime(&timer),anadir);
    printf("Escriba lo que sea y al finalizar presione *\n");
    while(oracion[0] != '*')
    {
      scanf("%s%*c",oracion);
      fprintf(anadir,"%s\n",oracion);
    }
    fprintf(anadir,"\n");
    fclose(anadir);
  }
  else
  {
    printf("Pues escribe algo");
  }
}
//Procedimiento que guarda info en un texto y decodifica en otro
void esconde_en_archivo (char nombre[MIN])
{
  int i;
  char normal[20];
  char nor[20];
  FILE * escribir = fopen(strcat(nombre,".txt"),"w");
  if(escribir != NULL)
  {
    printf("Favor de introducir 1 Frase de menos de 20 caracteres\n");
    gets(normal);
    fputs(normal,escribir);
    fclose(escribir);
  }
  else
  {
    printf("Pues escribe algo");
  }
  FILE * escribir2 = fopen("mensaje secreto.txt","w");
  if(escribir != NULL)
  {
    for(i=0;normal[i]!='\0';i++)
    {
      nor[i]=normal[i]+1;
      if(normal[i]==' ')
      {
        fprintf(escribir2," ");
      }
      else
      {
        fprintf(escribir2,"%c",nor[i]);
      }
    }
    fclose(escribir2);
  }
  else
  {
    printf("Meh");
  }
}
//Procedmiento que lee un texto y lo imrpime en la consola
void despliega_archivo (char nombre[MIN])
{
FILE * leer = fopen(strcat(nombre,".txt"),"r");
char normal[200];
int i=0,j;
if(leer != NULL)
  {
    for(j=0;j<200;j++)
    {
      fscanf(leer,"%c",&normal[j]);
    }
    while(normal[i]!='\0')
    {
      printf("%c",normal[i]);
      i++;
    }
    fclose(leer);
  }

else
  {
    printf("No hay texto");
  }
}
//Funcion que imprime el menu
void menu()
{
  printf("MENU\n 1. Escribir en Archivo\n 2. Guarda Datos de Alumnos\n 3. Escribir en Bitacora\n 4. Esconde en Archivo\n 5. Imprime Archivo\n 6. Salir\n Opcion?\n");
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
        escribir_en_archivo(nombre);
        break;
      case 2:
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        escribir_con_formato(nombre);
        break;
      case 3:
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        escribir_en_bitacora(nombre);
        break;
      case 4:
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        esconde_en_archivo(nombre);
        break;
      case 5:
        printf("Cual texto quieres leer?\n");
        gets(nombre);
        despliega_archivo(nombre);
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
