#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char contenido[100][100];
  int i=0,j;
  FILE * leer = fopen("anime.txt","r");
  while(!feof(leer))
  {
    fgets(contenido[i],100,leer);
    i++;
  }
  fclose(leer);

  FILE * a_j, * k_z;
  a_j = fopen("a_j.txt","w");
  k_z = fopen("k_z.txt","w");
  for(j=0;j<i;j++)
  {
    if(contenido[j][0]>96&&contenido[j][0]<107)
    {
      fputs(contenido[j],a_j);
    }
    else if(contenido[j][0]>107&&contenido[j][0]<123)
    {
      fputs(contenido[j],k_z);
    }
  }
}
