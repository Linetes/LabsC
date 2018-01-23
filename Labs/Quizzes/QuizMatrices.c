

void grises(int rgb[3][3][3],int grises[3][3])
{
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<3;k++)
      {
        grises[i][j] = grises[i][j] + rgb[k][i][j];
      }
      grises[i][j] = grises[i][j]/3;
    }
  }
}
