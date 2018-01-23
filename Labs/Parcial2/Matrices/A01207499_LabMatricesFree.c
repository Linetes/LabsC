#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define RENGLONES_MAX 7
#define COLUMNAS_MAX 4

/*   César Buenfil Vázquez
          A01207499
        Lab Matrices      */

//Procedimiento que llena cadenas con un scan simbolizando materias de la escuela, la n es cuantas materias hay.
void llena_matriz(char materias[RENGLONES_MAX][100],int n)
{
  int i,j,m=1;
  for(i=0;i<n;i++)
  {
    printf("Materia %i: ",m);
    gets(materias[i]);
    m++;
  }
}

//Procedimiento que llena la matriz con calificaciones
void llena_matriz2(int mat[RENGLONES_MAX][COLUMNAS_MAX],char materias[RENGLONES_MAX][100],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    printf("Calificaciones para %s\n",materias[i]);
    for(j=0;j<4;j++)
    {
      if(j<3)
      {
      printf("Parcial %i: ",j+1);
      }
      else
      printf("Proyecto: ");
      scanf("%i%*c",&mat[i][j]);
    }
  }
}

//Procediemto que imprime ambas matrices haciendo una tabla de calificaciones
void imprime_matriz(int mat[RENGLONES_MAX][COLUMNAS_MAX],char materias[RENGLONES_MAX][100],int n)
{
  int i,j,espacio=0;
  for(i=0;i<n;i++)
  {
    printf("\n%s",materias[i]);
    for(j=0;j<4;j++)
    {
      if(j<3)
      {
      printf("\nParcial %i: ",j+1);
      }
      else
      printf("\nProyecto: ");

      if(mat[i][j]>=0&&mat[i][j]<10)
      {
        printf("  ");
      }
      else if(mat[i][j]>=10&&mat[i][j]<100)
      {
        printf(" ");
      }
      printf("%i ",mat[i][j]);
    }
    printf("\n");
  }
}

//Procedimiento que saca los puntos que vale cada parcial y proyecto con porcentaje y se le restan a 70 para ver cuanto necesita el usuario para pasar.
void examen_final(int mat[RENGLONES_MAX][COLUMNAS_MAX],char materias[RENGLONES_MAX][100],int n)
{
  printf("\nSuponiendo que\nLos dos primeros parciales valen 40 porciento,\nEl tercer parcial 20 porciento,\nEl proyecto 10 porciento\nY el examen 30 porciento...\n");
  int i,j,parciales=1,miniparcial=1,proyecto=1,examenfinal=0,final=1;
  for(i=0;i<n;i++)
  {
    printf("\nEn la materia de %s...",materias[i]);
    parciales = (((mat[i][0]+mat[i][1])/2) * .40);
    printf("\nTienes %i puntos de parciales\n",parciales);
    miniparcial = mat[i][2] * .20;
    printf("Tienes %i puntos del miniparcial\n",miniparcial);
    proyecto = mat[i][3] * .10;
    printf("Tienes %i puntos del proyecto\n",proyecto);
    final = 70 - parciales - miniparcial - proyecto;
    examenfinal = final/.30;
    printf("Necesitas %i puntos para el 70\n",final);
    printf("\nNecesitas un %i en el examen final para sacar 70\n",examenfinal);
  }
}

//Funcion que imprime el menu
void menu()
{
  printf("MENU\n 1. Poner Calificaciones\n 2. Imprimir Calificaciones\n 3. Cuanto Necesitas para pasar\n 4. Salir\n Opcion?\n");
}

//El main
int main()
{
  //declaración de variables
  int opcion,i,n,mat[RENGLONES_MAX][COLUMNAS_MAX];
  char materias[RENGLONES_MAX][100] ;
  //crea el menu una vez y si regresa al final 1 lo vuelve a hacer
  do
  {
    menu();
    scanf("%i%*c",&opcion);
    switch(opcion)
    {
      case 1:
        printf("Cuantas materias lleva? ");
        scanf("%i%*c",&n);
        llena_matriz(materias,n);
        llena_matriz2(mat,materias,n);
        break;
      case 2:
        printf("\nEstas son tus Calificaciones:\n");
        imprime_matriz(mat,materias,n);
        break;
      case 3:
        examen_final(mat,materias,n);
        break;
      case 4:
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
