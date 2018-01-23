int factorial(int num)
{
    int i=1,acum=1;
    while(i<=num)
    {
        acum=acum*i;
        i++;
    }
    return acum;
}

void main()
{
    int num;
    printf("Hola, saca el factorial\nDame un numero\n");
    scanf("%i",&num);
    factorial(num);
    printf("%i",factorial(num));
}
