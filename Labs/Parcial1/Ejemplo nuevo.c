#include <stdio.h>

int cuadrado(int a){
int res;
res = a*a;
return res;
}

int mayor(int a,int b, int c){
    int num1, num2, num3;

    if(a>b&&b>c){
        num1 = a;
        num2 = b;
        num3 = c;
    }
    else if(b>c&&c>a){
        num1 = b;
        num2 = c;
        num3 = a;
    }
    else if(c>b&&b>a){
        num1 = c;
        num2 = b;
        num3 = a;
    }
    else if(a>c&&c>b){
        num1 = a;
        num2 = c;
        num3 = b;
}
    else if(a>c&&c>b){
        num1 = a;
        num2 = c;
        num3 = b;
    }
    else if(c>a&&a>b){
        num1 = c;
        num2 = a;
        num3 = b;
    }
}

int main (){

int b=4;
int c=cuadrado(b);
printf("%i %i",b,c);

int a = 34;
int b = 74;
int c = 1;
int mayor(a,b,c);
print("%i %i %i",a,b,c);

return 0;


}
