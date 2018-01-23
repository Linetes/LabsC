#ifndef MISFUNCIONES_H_INCLUDED
#define MISFUNCIONES_H_INCLUDED
#include <stdio.h>

float ftam (float ft)
{
    float res = ft/3.28084;
    return res;
}

float maft (float m)
{
    float res = m*3.28084;
    return res;
}

float grad_rad (float grad)
{
    return grad*0.0174533;
}

float secante(float grad)
{
    return 1/cos(grad);
}

float cosecante(float grad)
{
    return 1/sin(grad);
}

void may()
{
    int nota;
    printf("\nEscriba la nota base para el acorde \ndo(1)\nre(2)\nmi(3)\nfa(4)\nsol(5)\nla(6)\nsi(7)\n");
    scanf("%i",&nota);
    switch(nota)
    {
        case 1:
            printf("\nTus notas son do mi y sol");
            break;
        case 2:
            printf("\nTus notas son re #fa y la");
            break;
        case 3:
            printf("\nTus notas son mi #sol y si");
            break;
        case 4:
            printf("\nTus notas son fa la y do");
            break;
        case 5:
            printf("\nTus notas son sol si y re");

            break;
        case 6:
            printf("\nTus notas son la #do y mi");
            break;
        case 7:
            printf("\nTus notas son si #re y #fa");
            break;
        default:
            printf("chale eso no etsiste");
    }
}

void men()
{
    int nota;
    printf("\nEscriba la nota base para el acorde \ndo(1)\nre(2)\nmi(3)\nfa(4)\nsol(5)\nla(6)\nsi(7)\n");
    scanf("%i",&nota);
    switch(nota)
    {
        case 1:
            printf("\nTus notas son do #re y sol");
            break;
        case 2:
            printf("\nTus notas son re fa y la");
            break;
        case 3:
            printf("\nTus notas son mi sol y si");
            break;
        case 4:
            printf("\nTus notas son fa #sol y do");
            break;
        case 5:
            printf("\nTus notas son sol #la y re");
            break;
        case 6:
            printf("\nTus notas son la do y mi");
            break;
        case 7:
            printf("\nTus notas son si re y #fa");
            break;
        default:
            printf("chale eso no etsiste");
    }
}

void dis()
{
    int nota;
    printf("\nEscriba la nota base para el acorde \ndo(1)\nre(2)\nmi(3)\nfa(4)\nsol(5)\nla(6)\nsi(7)\n");
    scanf("%i",&nota);
    switch(nota)
    {
        case 1:
            printf("\nTus notas son do #re y #fa");
            break;
        case 2:
            printf("\nTus notas son re fa y #sol");
            break;
        case 3:
            printf("\nTus notas son mi sol y #la");
            break;
        case 4:
            printf("\nTus notas son fa #sol y si");
            break;
        case 5:
            printf("\nTus notas son sol #la y #do");
            break;
        case 6:
            printf("\nTus notas son la do y #re");
            break;
        case 7:
            printf("\nTus notas son si re y fa");
            break;
        default:
            printf("chale eso no etsiste");
    }
}
#endif // MISFUNCIONES_H_INCLUDED
