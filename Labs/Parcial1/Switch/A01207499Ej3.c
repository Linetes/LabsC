/*

Algoritmo

int menu
switch
    case 1
        hambuerguesa
        if chico mediano o grande
    case 2
        nuggets
        if chico mediano o grande
    case 3
        refresco
        if chico mediano o grande
    case 4
        papas
        if chico mediano o grande
    case 5
        combo
        if hamburguesa nuggets o pay
    case 6
        postre
        if helado sundae o pay
    case 7
        happy meal
        if flash batman o superman
    case 8
        chiste
        if chiste1 chiste 2 chiste3
    case 9
        alma
        if blanca judia o ginger
    case 10
        irse
        if puntitas gateando o rodando
    default
        no hay


 */

#include<stdio.h>

int main (){
int menu,tamano;
printf("Bienvenido a McDonalds que le damos?\nVerguenza\nMama estoy trabajando\n4 anos de ingenieria para esto?\n");
printf("\nSeleccione lo que guste\n");
printf("Presione 1 para elegir hamburguesas\n");
printf("Presione 2 para elegir NUGGETS\n");
printf("Presione 3 para elegir refrescos\n");
printf("Presione 4 para elegir papas\n");
printf("Presione 5 para elegir combos\n");
printf("Presione 6 para elegir postres\n");
printf("Presione 7 para elegir happy meals\n");
printf("Presione 8 para leer chistes chistosos\n");
printf("Presione 9 para entrar al mercado negro y comprar un alma\n");
printf("Presione 10 para no elegir nada e irse a...\n\n");

scanf("%i",&menu);

    switch(menu)
{
    case 1:
        printf("\nUsted quiere hamburguesa\n\n");
        printf("De que tamano la quiere? Tenemos chica(1) mediana(2) y grande(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted selecciono el tamano chico\n");
            printf("Son 30 pesos");
            break;
            }
        else if(tamano==2){
            printf("Usted selecciono el tamano mediano\n");
            printf("Son 40 pesos");
            break;
            }
        else if(tamano==3){
            printf("Usted selecciono el tamano grande\n");
            printf("Son 50 pesos");
            break;
            }
            else{
            printf("Eso no existe\n");
            printf("Largo");
            break;
            }

    case 2:
        printf("\nUsted quiere NUGGETS\n\n");
        printf("De que tamano los quiere? Tenemos chicos(1) medianos(2) y grandes(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted selecciono el tamano chico\n");
            printf("Son 20 pesos");
            break;
            }
        else if(tamano==2){
            printf("Usted selecciono el tamano mediano\n");
            printf("Son 30 pesos");
            break;
            }
        else if(tamano==3){
            printf("Usted selecciono el tamano grande\n");
            printf("Son 40 pesos");
            break;
            }
            else{
            printf("Eso no existe\n");
            printf("Largo");
            break;
            }

    case 3:
        printf("\nUsted quiere Refresco\n\n");
        printf("De que tamano lo quiere? Tenemos chico(1) mediano(2) y grando(3)\nSolo Tenemos PEPSI TAN TAN TANNNNNN ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted selecciono el tamano chico\n");
            printf("Son 15 pesos");
            break;
            }
        else if(tamano==2){
            printf("Usted selecciono el tamano mediano\n");
            printf("Son 25 pesos");
            break;
            }
        else if(tamano==3){
            printf("Usted selecciono el tamano grande\n");
            printf("Son 30 pesos");
            break;
            }
            else{
            printf("Eso no existe\n");
            printf("Largo");
            break;
            }

    case 4:
        printf("\nUsted quiere Papas\n\n");
        printf("De que tamano las quiere? Tenemos chicas(1) medianas(2) y grandes(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted selecciono el tamano chico\n");
            printf("Son 10 pesos");
            break;
            }
        else if(tamano==2){
            printf("Usted selecciono el tamano mediano\n");
            printf("Son 15 pesos");
            break;
            }
        else if(tamano==3){
            printf("Usted selecciono el tamano grande\n");
            printf("Son 20 pesos");
            break;
            }
            else{
            printf("Eso no existe\n");
            printf("Largo");
            break;
            }

    case 5:
        printf("\nUsted quiere Combo\n\n");
        printf("Hay Combo de Hamburguesa(1) NUGGETS(2) y de pay(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted selecciono el combo hamburguesa\n");
            printf("Son 90 pesos");
            break;
            }
        else if(tamano==2){
            printf("Usted selecciono el combo NUGGETS\n");
            printf("Son 70 pesos");
            break;
            }
        else if(tamano==3){
            printf("Usted selecciono el combo pay\n");
            printf("Son 50 pesos");
            break;
            }
            else{
            printf("Eso no existe\n");
            printf("Largo");
            break;
            }

    case 6:
        printf("\nUsted quiere Postre\n\n");
        printf("Hay helado(1), sundae(2) y pay(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted selecciono helado\n");
            printf("Son 10 pesos");
            break;
            }
        else if(tamano==2){
            printf("Usted selecciono sundae\n");
            printf("Son 15 pesos");
            break;
            }
        else if(tamano==3){
            printf("Usted selecciono pay\n");
            printf("Son 20 pesos");
            break;
            }
            else{
            printf("Eso no existe\n");
            printf("Largo");
            break;
            }

    case 7:
        printf("\nUsted quiere un happy meal para su hijo o ya esta muy grande para esto\n\n");
        printf("Hay juguetes de DC y son flash(1) batman(2) o superman(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Nadie quiere a flash\n");
            printf("Toma :'c");
            break;
            }
        else if(tamano==2){
            printf("Tipico\n");
            printf("Toma :/");
            break;
            }
        else if(tamano==3){
            printf("Worst movie ever\n");
            printf("Toma >:c");
            break;
            }
            else{
            printf("Ese juguete se nos agoto\n");
            printf("Largo");
            break;
            }

    case 8:
        printf("\nUsted quiere chistes chistosos scacados de chistescortos.yavendras.com\n\n");
        printf("Hay 3 chistes (1) (2) y (3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Cariño, dame el bebe\nEspera a que llore\nA que llore? Por que?\nPorque no lo encuentro!!!!!!! \n");
            printf("JAJAJAJA :'c");
            break;
            }
        else if(tamano==2){
            printf("Tienes wi-fi?\nSi\nY cuál es la clave?Tener dinero y pagarlo\n");
            printf("Ouch :/");
            break;
            }
        else if(tamano==3){
            printf("Soy un tipo saludable\nAh. Comes sano y todo eso?\nNo, la gente me saluda...\n");
            printf("hahaha..... >:c");
            break;
            }
            else{
            printf("Ese chiste se cuenta solo\n");
            printf("Largo");
            break;
            }
    case 9:
        printf("\nUsted entro al mercado negro y quiere un alma\n\n");
        printf("Hay 3 tipos de almas blanca(1) judia(2) y ginger(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("El alma de blanco es cara\n");
            printf("son 9999999 pesos :'c");
            break;
            }
        else if(tamano==2){
            printf("Judia? Que malo eres\n");
            printf("Ouch, es gratis :/");
            break;
            }
        else if(tamano==3){
            printf("Los gingers no tienen almas\n");
            printf("Te han pillado");
            break;
            }
            else{
            printf("Solo esas almas hay\n");
            printf("Largo");
            break;
            }

    case 10:
        printf("\nUsted quiere no comprar nada e irse \n\n");
        printf("Hay 3 tipos de formas para irse de puntitas(1) gateando(2) y rodando(3) ");
        scanf("%i",&tamano);
        if(tamano==1){
            printf("Usted se puede ir de puntitas a la...\n");
            printf("Bye");
            break;
            }
        else if(tamano==2){
            printf("Usted se va gateando directito a...\n");
            printf("Adios");
            break;
            }
        else if(tamano==3){
            printf("Lo pateo en la *** para que se vaya rodando a la....\n");
            printf("Te han pillado");
            break;
            }
            else{
            printf("Ya vayase camindando\n");
            printf("Largo");
            break;
            }


    default:
        printf("WAT, ponga algo que venga en la lista");
}



return 0;
}
