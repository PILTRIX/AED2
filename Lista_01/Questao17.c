#include <stdio.h>
#include <stdlib.h>
#include "Questao17.h"

void entrada17(float *vproduto){
    printf("Informe o valor do produto \n");
    scanf("%f",vproduto);

}
void processamento17(float *vproduto, float *vfinal){
    if(*vproduto<200){
        *vfinal = ((*vproduto)*1.50);
    }else{
        *vfinal = ((*vproduto)*1.30);
    }
}

void saida17(float vfinal){
    printf("\nO novo valor do produto sera de %.2f",vfinal);
}

void questao17(void){
    float a,b;

    entrada17(&a);
    processamento17(&a,&b);
    saida17(b);
}
