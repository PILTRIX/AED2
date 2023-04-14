#include <stdio.h>
#include <stdlib.h>
#include "Questao03.h"

void entrada03(float *x1,float *x2,float *p1,float *p2){
    printf("Digite a 1o nota: \n");
    scanf("%f",x1);
    printf("Digite o peso da 1o nota: \n");
    scanf("%f",p1);
    printf("Digite a 2o nota: \n");
    scanf("%f",x2);
    printf("Digite o peso da 2o nota: \n");
    scanf("%f",p2);
}
void processamento03(float *x1,float *x2,float *p1,float *p2,float *media){
    *media=((*x1)*(*p1)+(*x2)*(*p2))/(*p1+*p2);
}
void saida03(float media){
    printf("O valor da media e: %.2f\n", media);
}
void questao03(void){
    float a,b,c,d,m;

    entrada03(&a,&b,&c,&d);
    processamento03(&a,&b,&c,&d,&m);
    saida03(m);
}
