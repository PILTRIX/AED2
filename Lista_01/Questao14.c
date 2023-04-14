#include <stdio.h>
#include <stdlib.h>
#include "Questao14.h"

void entrada14(int *n1){
    printf("Informe o numero para saber se e par ou impar \n");
    scanf("%d",n1);

}
void processamento14(int *n1,int *resultado){
    *resultado=*n1%2==0;
}

void saida14(int resultado){
    if (resultado){
        printf("O valor e par");
    }else{
        printf("O valor e impar");
    }
}

void questao14(void){
    int a,b;

    entrada14(&a);
    processamento14(&a,&b);
    saida14(b);
}
