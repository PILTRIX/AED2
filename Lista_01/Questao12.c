#include <stdio.h>
#include <stdlib.h>
#include "Questao12.h"

void entrada12(float *n1, float *n2){
    printf("informe a 1o nota \n");
    scanf("%f",n1);
    printf("Informe a 2o nota \n");
    scanf("%f",n2);

}
void processamento12(float *n1,float *n2,float *media){
    *media=(*n1+*n2)/2.0;
}

void saida12(float media){
    if(media>=7.0){
        printf("\nO aluno foi aprovado\n");
    }else{
        printf("\nO aluno foi reprovado\n");
    }
}

void questao12(void){
    float a,b,c;

    entrada12(&a,&b);
    processamento12(&a,&b,&c);
    saida12(c);
}
