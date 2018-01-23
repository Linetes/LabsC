#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define RENGLONES_MAX 10
#define COLUMNAS_MAX 10

/*   César Buenfil Vázquez
          A01207499
        Lab Matrices      */


//Procedimiento que llena la matriz con números random
void llena_matriz(int mat[RENGLONES_MAX][COLUMNAS_MAX])
{
  int i,j;
  for(i=0;i<RENGLONES_MAX;i++)
  {
    for(j=0;j<COLUMNAS_MAX;j++)
    {
      mat[i][j] = rand()%21+(-10);
    }
  }
}

//Procediemto que imprime la matriz principal
void imprime_matriz(int mat[RENGLONES_MAX][COLUMNAS_MAX])
{
  int i,j;
  for(i=0;i<RENGLONES_MAX;i++)
  {
    for(j=0;j<COLUMNAS_MAX;j++)
    {
      if(mat[i][j]>=0&&mat[i][j]<10)
      {
        printf("  ");
      }
      else if(mat[i][j]<0&&mat[i][j]>-10)
      {
        printf(" ");
      }
      else if(mat[i][j]==10)
      {
        printf(" ");
      }
      printf("%i ",mat[i][j]);
    }
    printf("\n");
  }
}

/*Función que tiene un contador y cada vez que el número sea mayor
a 0, el contador se le va a sumar 1. Y luego regresa el contador.*/
int cuenta_positivos(int mat[RENGLONES_MAX][COLUMNAS_MAX])
{
  int i,j,contador=0;
  for(i=0;i<RENGLONES_MAX;i++)
  {
    for(j=0;j<COLUMNAS_MAX;j++)
    {
      if(mat[i][j]>=0)
      {
        printf("%i ",mat[i][j]);
        contador++;
      }
    }
  }
  return contador;
}

/*Función que suma los números cuando i y j son iguales para que sea
diagonal, y tiene una suma que se le van sumando todos los números
diagonales y luego regresa la suma */
int suma_diagonal(int mat[RENGLONES_MAX][COLUMNAS_MAX])
{
  int i,j,suma=0;
  for(i=0;i<RENGLONES_MAX;i++)
  {
    for(j=0;j<COLUMNAS_MAX;j++)
    {
      if(i==j)
      {
        printf("%i ",mat[i][j]);
        suma = suma+mat[i][j];
      }
    }
  }
  return suma;
}

/*Función que usa la mat2 como guardador y checa si mat1 tiene un
número más grande y lo guarda*/
int mayor(int mat[RENGLONES_MAX][COLUMNAS_MAX])
{
  int i,j,mayor,suma=0;
  for(i=0;i<RENGLONES_MAX;i++)
  {
    for(j=0;j<COLUMNAS_MAX;j++)
    {
      if(mayor<mat[i][j])
      {
        mayor=mat[i][j];
      }
    }
  }
  return mayor;
}

//Funcion que imprime el menu
void menu()
{
  printf("MENU\n 1. Matriz random\n 2. Imprimir Matriz\n 3. Positivos Matriz\n 4. Suma Diagonal Matriz\n 5. Mayor Matriz\n 6. Salir\n Opcion?\n");
}

//El main
int main()
{
  //declaración de variables
  int opcion,i,mat[RENGLONES_MAX][COLUMNAS_MAX];
  //hace que cada vez se haga el random diferente.
  srand(time(NULL));
  //crea el menu una vez y si regresa al final 1 lo vuelve a hacer
  do
  {
    menu();
    scanf("%i%*c",&opcion);
    switch(opcion)
    {
      case 1:
        printf("\nLlenando Matriz Random...\n");
        llena_matriz(mat);
        break;
      case 2:
        printf("\nEsta es la matriz:\n");
        imprime_matriz(mat);
        break;
      case 3:
        printf("\nLos numeros positivos son:\n");
        printf("\nY hay %i positivos\n",cuenta_positivos(mat));
        break;
      case 4:
        printf("\nLos numeros diagonales son:\n");
        printf("\nLa suma es igual a %i\n",suma_diagonal(mat));
        break;
      case 5:
        printf("\nEl numero mayor es %i\n",mayor(mat));
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
