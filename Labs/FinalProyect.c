#include <stdio.h>
#include <windows.h>
#include<time.h>
#define MAX 20

#define C5	523.25
#define Cs5	554.37
#define D5	587.33
#define Ds5	622.25
#define E5	659.25
#define F5	698.46
#define Fs5 739.99
#define G5	783.99
#define Gs5	830.61
#define A5	880.00
#define As5 932.33
#define B5	987.77
#define C6	1046.50
#define Cs6 1108.73
#define D6	1174.66
#define Ds6	1244.51
#define E6	1318.51
#define F6	1396.91
#define Fs6	1479.98
#define G6	1567.98
#define Gs6 1661.22
#define A6	1760.00
#define As6	1864.66
#define B6	1975.53
#define C7	2093.00
#define Cs7 2217.46
#define D7	2349.32
#define Ds7	2489.02
#define E7	2637.02
#define F7	2793.83
#define Fs7 2959.96
#define G7	3135.96
#define Gs7	3322.44
#define A7	3520.00
#define As7 3729.31
#define B7	3951.07
#define C8	4186.01

void menu()
{
  printf("Bienvenido a la Music Box");
  printf("\n  1. Cancion Prueba\n  2. Generador de Musica\n  3. Salir\n Opcion?\n");
}

void generadorverso(int parte[2][MAX])
{
  int i;
  int notas[15] = {C5,D5,E5,F5,G5,A5,B5,C6,D6,E6,F6,G6,A6,B6,C7}, tiempo[10] = {100,100,100,100,200,200,200,400,400,400};

  for(i=0;i<MAX;i++)
  {
    parte[0][i] = notas[rand() %15];
    parte[1][i] = tiempo[rand() %10];
  }
}

void generadorpre(int parte[2][MAX])
{
  int i;
  int notas[15] = {G5,A5,B5,C6,D6,E6,F6,G6,A6,B6,C7,D7,E7,F7,G7}, tiempo[10] = {100,100,100,100,200,200,200,400,400,400};

  for(i=0;i<MAX;i++)
  {
    parte[0][i] = notas[rand() %15];
    parte[1][i] = tiempo[rand() %10];
  }
}

void generadorcoro(int parte[2][MAX])
{
  int i;
  int notas[15] = {C6,D6,E6,F6,G6,A6,B6,C7,D7,E7,F7,G7,A7,B7,C8}, tiempo[10] = {100,100,100,100,200,200,200,400,400,400};

  for(i=0;i<MAX;i++)
  {
    parte[0][i] = notas[rand() %15];
    parte[1][i] = tiempo[rand() %10];
  }
}

void cancion(int parte[2][MAX])
{
  int i;
  for(i=0;i<16;i++)
  {
    Beep( parte[0][i], parte[1][i]);
    printf("Nota %i ", parte[0][i]);
    printf("Tiempo %i\n", parte[1][i] /100);
  }
}



void pallet()
{
  int i=0;
  while(i<2)
  {
    srand(time(NULL));
    Sleep( 50 );
    Beep( D6, 200 );
    Beep( C6, 200 );
    Beep( B5, 200 );
    Beep( A5, 200 );
    Beep( G6, 200 );
    Beep( E6, 200 );
    Beep( Fs6, 200 );
    Beep( E6, 200 );
    Beep( D6, 400 );
    Sleep( 200 );
    Beep( B5, 200 );
    Beep( G5, 200 );
    Beep( G5, 200 );
    Beep( A5, 200 );
    Beep( B5, 200 );
    Beep( C6, 400 );
    Sleep( 400 );
    Sleep( 200 );
    Beep( Fs5, 200 );
    Beep( G5, 200 );
    Beep( A5, 200 );
    Beep( B5, 400 );
    Sleep( 200 );
    Beep( C6, 100 );
    Beep( B5, 100 );
    Beep( A5, 400 );
    Sleep( 400 );
    Beep( D6, 200 );
    Beep( C6, 200 );
    Beep( B5, 200 );
    Beep( D6, 200 );
    Beep( G6, 200 );
    Beep( Fs6, 200 );
    Beep( Fs6, 200 );
    Beep( G6, 200 );
    Beep( E6, 400 );
    Sleep( 200 );
    Beep( D6, 200 );
    Beep( D6, 400 );
    Sleep( 400 );
    Beep( C6, 200 );
    Beep( B5, 200 );
    Beep( A5, 200 );
    Beep( G5, 200 );
    Beep( D6, 200 );
    Beep( C6, 200 );
    Beep( B5, 200 );
    Beep( A5, 200 );
    Beep( G5, 400 );
    Sleep( 400 );
    Sleep( 200 );
    Beep( G5, 200 );
    Beep( A5, 200 );
    Beep( B5, 200 );
    Beep( C6, 400 );
    Sleep( 400 );
    Beep( D6, 400 );
    Sleep( 200 );
    Beep( C6, 200 );
    Beep( B5, 400 );
    Sleep( 400 );
    Sleep( 200 );
    Beep( G5, 200 );
    Beep( A5, 200 );
    Beep( B5, 200 );
    Beep( C6, 400 );
    Beep( C6, 400 );
    Beep( D6, 400 );
    Sleep( 200 );
    Beep( C6, 100 );
    Beep( D6, 100 );
    Beep( B5, 400 );
    Sleep( 400 );
    Sleep( 200 );
    Beep( B5, 200 );
    Beep( A5, 200 );
    Beep( G5, 200 );
    Beep( A5, 400 );
    Sleep( 400 );
    Beep( E5, 400 );
    Beep( B5, 400 );
    Beep( A5, 400 );
    Sleep( 400 );
    Beep( G5, 400 );
    Beep( E5, 400 );
    Beep( Fs5, 400 );
    Sleep( 400 );
    Beep( G5, 400 );
    Beep( B5, 400 );
    Beep( B5, 400 );
    Sleep( 400 );
    Beep( A5, 400 );
    Sleep( 400 );
    i++;
  }
}



int main()
{
  time_t t;
  srand((unsigned) time(&t));
  int opcion,i,opcion2=0;
  int verso[2][MAX], precoro[2][MAX], coro[2][MAX];
  do
  {
    menu();
    scanf("%i%*c",&opcion);
    switch(opcion)
    {
      case 1:
        pallet();
        break;
      case 2:
        generadorverso(verso);
        generadorpre(precoro);
        generadorcoro(coro);
        printf("\n\n               Verso\n\n");
        cancion(verso);
        printf("\n\n               Precoro\n\n");
        cancion(precoro);
        printf("\n\n               Coro\n\n");
        cancion(coro);
        printf("\n\n               Verso\n\n");
        cancion(verso);
        printf("\n\n               Precoro\n\n");
        cancion(precoro);
        printf("\n\n               Coro\n\n");
        cancion(coro);
        printf("\n\n               Coro\n\n");
        cancion(coro);
        Beep( C5, 400 );
        break;
      case 3:
        opcion2=0;
        break;
      default:
        printf("Es entre el 1 y 3");
        break;
    }
    printf("\n\nQuieres Seguir haciendo algo?\n 1. Si\n 2. No\n");
    scanf("%i%*c",&opcion2);
  } while(opcion2==1);
  return 0;
}
