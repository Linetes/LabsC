#include <stdio.h>

int main ()
{
    int a,b;
printf("Escriba dos numeros\n");
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("%d es mayor que %d",a,b);
    }
    else if (b>a) {
        printf("%d es mayor que %d",b,a);
    }
    else {
        printf("%d es igual que %d",a,b);
    }
return 0;
}
