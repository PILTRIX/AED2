#include <stdio.h>
#include <stdlib.h>
#include "Questao01.h"

void entrada01(int *x1,int *x2,int *x3){
    printf("Digite o 1o numero: \n");
    scanf("%d",x1);
    printf("Digite o 2o numero: \n");
    scanf("%d",x2);
    printf("Digite o 3o numero: \n");
    scanf("%d",x3);
}
void processamento01(int *x1,int *x2,int *x3,int *soma){
    *soma=*x1+*x2+*x3;
}
void saida01(int soma){
    printf("O resultado da soma e: %d\n", soma);
}
void questao01(void){
    int a,b,c,s;

    entrada01(&a,&b,&c);
    processamento01(&a,&b,&c,&s);
    saida01(s);
}
