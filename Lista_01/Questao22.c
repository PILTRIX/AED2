#include <stdio.h>
#include <stdlib.h>
#include "Questao22.h"

void entrada22(char *nome[20], int *eleitores, int *mvotado){
    printf("Informe o nome do municipio \n");
    scanf("%s",nome);
    printf("Informe a quantidade de eleitores \n");
    scanf("%d",eleitores);

}
void processamento22(char *nome, int *eleitores, int *mvotado){

    if(*eleitores<=200000){
        printf("Na cidade de %s nao havera 2o turno", nome);
    }else{
        printf("Informe a quantidade de votos do candidato mais votado \n");
        scanf("%d",mvotado);
        if(*mvotado <= *eleitores/2){
        printf("Na cidade de %s havera 2o turno", nome);
        }else{
            printf("Na cidade de %s nao havera 2o turno", nome);
        }
    }
}

void questao22(void){
    int a,b,c;

    entrada22(&a,&b,&c);
    processamento22(&a,&b,&c);
}
