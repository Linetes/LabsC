#include <stdio.h>

int main () {

    char num1, num2;
    scanf("%i%*c", &num1);
    scanf("%i%*c", &num2);

    printf("%i%*c y %i%*c", num1,num2);
    return 0;

}
