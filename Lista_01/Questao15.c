#include <stdio.h>
#include <stdlib.h>
#include "Questao15.h"

void entrada15(int *n1,int *n2){
    printf("Informe o 1o valor para saber qual o maior \n");
    scanf("%d",n1);
    printf("Informe o 2o valor para saber qual o maior\n");
    scanf("%d",n2);

}
void processamento15(int *n1,int *n2){
    if(*n1>*n2){
        printf("\nO 1o numero e o maior\n");
    }
    else if(*n2>*n1){
        printf("\nO 2o numero e o maior\n");
    }else{
        printf("\nOs valores sao iguais");
    }
}


void questao15(void){
    int a,b;

    entrada15(&a,&b);
    processamento15(&a,&b);
}
