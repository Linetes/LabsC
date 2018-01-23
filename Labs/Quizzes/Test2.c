#include<stdio.h>

int main (){
    int jugar=1,pri=1,seg=1,ter=1,car=1,home=1,ganar=1,dinero=0;


        if(jugar!=1)
        dinero=-1000;
            else{
                if(jugar==1)
                    dinero= 150;
                if(pri==1)
                    dinero= 300;
                if(seg==1)
                    dinero= 450;
                if(ter==1)
                    dinero= 600;
                if(car==1)
                    dinero= 1000;
                if(home==1)
                    dinero= dinero+1500;
                if(ganar==1)
                    dinero= dinero+1500;
                }
            printf("Tu ganancia es de %i",dinero);

return 0;
}


