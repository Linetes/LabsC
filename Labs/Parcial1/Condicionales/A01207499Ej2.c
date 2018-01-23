/*

Algoritmo

var x,y
if(x<-2)
y = 2*pow(x,2)+4*x+2

else if(x>=-2&&x<0)
y = 2

else
y = 3*x+1

*/


#include<stdio.h>

int main() {

int x,y;

printf("Favor de introducir su numero ");
scanf("%i",&x);

if(x<-2) {
y = 2*pow(x,2)+4*x+2;
printf("Su resultado es %i",y);
}
    else if(x>=-2&&x<0){
y = 2;
printf("Su resultado es %i",y);
    }
    else {
y = 3*x+1;
printf("Su resultado es %i",y);
    }
return 0;
}
