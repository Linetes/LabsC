#include <stdio.h>

int main()
{
  int mat[9][9],mat2[3][3];
  int i,j,k,l,aux1=0,aux2=0,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=aux1;k<aux1+3;k++)
      {
        for(l=aux2;l<aux2+3;l++)
        {
          sum = sum + mat[k][l];
        }
      }
      sum = sum/9;
      mat2[i][j] = sum;
      sum=0;
      if(aux2<9)
      {
        aux2 = aux2 + 3;
      }
    }
    if(aux1<9)
    {
      aux1 = aux1 + 3;
      aux2 = 0;
    }
  }
}
