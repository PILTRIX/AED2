#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "questao23.h"

void entrada_23(float *trajeto, char *tveiculo){
    printf("Entre com o percuso em Km: ");
    scanf("%f", trajeto);
    printf("Entre com o tipo do carro [A, B, C]: ");
    scanf("%s", tveiculo);
}

void processamento_23(float *trajeto, char *tveiculo, float *combust){
    *tveiculo = tolower(*tveiculo);

    switch(*tveiculo){
        case 'a':
            *combust = *trajeto / 8.0;
            printf("\nO carro consumiu %g litros de combustivel", *combust);
            break;
        case 'b':
           *combust = *trajeto / 9.0;
           printf("\nO carro consumiu %g litros de combustivel", *combust);
           break;
        case 'c':
           *combust = *trajeto / 12.0;
            printf("\nO carro consumiu %g litros de combustivel", *combust);
            break;
        default:
            printf("\nTipo de carro invalido!!");
    }
}

void questao23(){
    float a, b;
    char c[50];

    entrada_23(&a, &c);
    processamento_23(&a, &c, &b);
}
