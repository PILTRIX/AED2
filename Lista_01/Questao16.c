#include <stdio.h>
#include <stdlib.h>
#include "Questao16.h"

void entrada16(float *sbruto){
    printf("Informe o valor do seu salario \n");
    scanf("%f",sbruto);

}
void processamento16(float *sbruto, float *sliquido){
    if(*sbruto<2000){
        *sliquido = ((*sbruto)*0.90);
    }else{
        *sliquido = ((*sbruto)*0.80);
    }
}

void saida16(float sliquido){
    printf("\nO novo salario e %.2f",sliquido);
}

void questao16(void){
    float a,b;

    entrada16(&a);
    processamento16(&a,&b);
    saida16(b);
}
