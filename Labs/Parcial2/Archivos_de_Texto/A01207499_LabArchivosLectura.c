#include "Escritura.h"

/* César Buenfil Vázquez
        A01207499
Lab Archivos de Lectura
                        */

//Precedimiento que lee cada línea y ve si es una letra y si es una letra checa
//si no es vocal y si cumple esas dos la sumatoria es +1.
int cuenta_consonantes(char nombre[MAX])
{
  char contenido[MAX];
  int i=0,j,k,sum=0;
  FILE * leer = fopen(strcat(nombre,".txt"),"r");
  while(!feof(leer))
  {
    fscanf(leer,"%c",&contenido[i]);
    i++;
  }
  fclose(leer);

  for(j=0;j<i;j++)
  {
    if(contenido[j]>='a'&&contenido[j]<='z')
    {
      if(contenido[j]!='a'&&contenido[j]!='e'&&contenido[j]!='i'&&contenido[j]!='o'&&contenido[j]!='u')
      {
        sum++;
      }
    }
    else if(contenido[j]>='A'&&contenido[j]<='Z')
    {
      if(contenido[j]!='A'&&contenido[j]!='E'&&contenido[j]!='I'&&contenido[j]!='O'&&contenido[j]!='U')
      {
        sum++;
      }
    }
  }
return sum;
}

//Procedimiento que lee 2 cadenas y luego un numero y los imprime con formato del texto
void leer_con_formato()
{
  FILE * leer = fopen("califica.txt","r");
  char nombre[MAX];
  char carrera[MAX];
  int cali;
  int i=0,j,n;
  if(leer != NULL)
  {
    while(!feof(leer))
    {
      fscanf(leer,"%s%*c",nombre);
      fscanf(leer,"%s%*c",carrera);
      fscanf(leer,"%i%*c",&cali);
      printf("%s %s %i\n",nombre,carrera,cali);
    }
    fclose(leer);
    }
  else
    {
      printf("No hay texto");
    }
}

//Procediento que agarra un texto codificado y lo guarda en una cadena
//luego se crea otra cadena que guarda lo de la primera menos 1 en posicion ASCII
//Y lo imprime.
void encuentra_en_archivo()
{
  int j=0,i;
  char normal[MAXX];
  char nor[MAXX];
  FILE * leer = fopen("mensaje_secreto.txt","r");
  if(leer != NULL)
  {
    while(!feof(leer))
    {
      fscanf(leer,"%c",&normal[j]);
      j++;
    }
    for(i=0;i<j-1;i++)
    {
      nor[i]=normal[i]-1;
      if(normal[i]==' ')
      {
        printf(" ");
      }
      else
      {
        printf("%c",nor[i]);
      }
    }
    fclose(leer);
  }
}

//El main
int main()
{
  //declaración de variables
  int opcion,i,n;
  char nombre[MAX];
  //crea el menu una vez y si regresa al final 1 lo vuelve a hacer
  do
  {
    menu();
    scanf("%i%*c",&opcion);
    switch(opcion)
    {
      case 1:
        //Escribir en Archivo
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        escribir_en_archivo(nombre);
        break;
      case 2:
        //Guarda datos del Alumno
        escribir_con_formato();
        break;
      case 3:
        //Escribir en Bitacora
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        escribir_en_bitacora(nombre);
        break;
      case 4:
        //Esconde en Archivo
        printf("Como quieres que se llame tu texto?\n");
        gets(nombre);
        esconde_en_archivo(nombre);
        break;
      case 5:
        //Imprime Archivo
        printf("Cual texto quieres leer?\n");
        gets(nombre);
        despliega_archivo(nombre);
        break;
      case 6:
        //Cuenta Consonantes
        printf("Cual texto quieres que cuente consonantes?\n");
        gets(nombre);
        printf("%i",cuenta_consonantes(nombre));
        break;
      case 7:
        //Muestra Datos del Alumno
        leer_con_formato();
        break;
      case 8:
        //Encuentra en Archivo
        encuentra_en_archivo();
        break;
      case 9:
        //Salir
        break;
      default:
        printf("Es del 1 al 9");
        break;
    }
      printf("\nQuieres seguir haciendo algo?\nsi (1)\nno (2)\n ");
      scanf("%i%*c",&opcion);
  } while(opcion==1);
return 0;
}
