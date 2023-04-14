#include <stdio.h>
#include <stdlib.h>
#include "Questao02.h"

void entrada02(float *x1,float *x2,float *x3,float *x4){
    printf("Digite o 1o numero: \n");
    scanf("%f",x1);
    printf("Digite o 2o numero: \n");
    scanf("%f",x2);
    printf("Digite o 3o numero: \n");
    scanf("%f",x3);
    printf("Digite o 4o numero: \n");
    scanf("%f",x4);
}
void processamento02(float *x1,float *x2,float *x3,float *x4,float *media){
    *media=(*x1+*x2+*x3+*x4)/4.0;
}
void saida02(float media){
    printf("O resultado da soma e: %.2f\n", media);
}
void questao02(void){
    float a,b,c,d,m;

    entrada02(&a,&b,&c,&d);
    processamento02(&a,&b,&c,&d,&m);
    saida02(m);
}
