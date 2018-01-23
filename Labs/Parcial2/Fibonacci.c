void fibo(int pos)
{
    int x=1,y=0,m=0,pos1=0;
    printf("1\n");
    while(pos1<pos)
        {
        m=x+y;
        printf("%i\n",m);
        y=x;
        x=m;
        pos1++;
        }
}

void main()
{
    int pos;
    printf("Bienvenido a Fibonacci, pon la posicion deseada\n");
    scanf("%i",&pos);
    fibo(pos);
}
