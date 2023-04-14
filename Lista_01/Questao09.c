#include <stdio.h>
#include <stdlib.h>
#include "Questao09.h"

void entrada09(int *valor){
    printf("Informe um numero para saber se e maior que 100 \n");
    scanf("%d",valor);

}
void processamento09(int *valor){
    if(*valor>100){
        printf("O numero e maior que 100\n");
    }
    else if(*valor==100){
        printf("O valor e igual a 100\n");
    }
    else{
        printf("O valor e menor que 100\n");
    }
}

void questao09(void){
    int a;

    entrada09(&a);
    processamento09(&a);
}
