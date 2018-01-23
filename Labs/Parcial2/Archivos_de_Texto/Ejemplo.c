#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{
  FILE * escribe = fopen("MiTexto.txt","w");
  fprintf(escribe,"Mi primer texto");
  fclose(escribe);
  return 0;

  FILE * leer = fopen("MiTexto.txt","r");
  char arg[100];
  if(leer != NULL)
  {
    fgets(arg,100,leer);
    puts(arg);
    fclose(leer);
  }
  else
  {
  printf("No hay texto");
  }

}
