#include <stdio.h>
#include <stdlib.h>
#include "Questao05.h"

void entrada05(float *sbase,int *qtdepende){
    printf("Informe o valor atual do salario: \n");
    scanf("%f",sbase);
    printf("Informe a quantidade de dependentes: \n");
    scanf("%d",qtdepende);

}
void processamento05(float *sbase,int *qtdepende,float *sbruto){
    *sbruto = *sbase + ((*qtdepende)*32.0);
    *sbruto -= ((*sbruto)*27.5)/100.0;
}
void saida05(float sbruto){
    printf("O valor do novo salario e: %.2f\n", sbruto);
}
void questao05(void){
    float a,b,c;

    entrada05(&a,&b);
    processamento05(&a,&b,&c);
    saida05(c);
}
