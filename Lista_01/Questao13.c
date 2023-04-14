#include <stdio.h>
#include <stdlib.h>
#include "Questao13.h"

void entrada13(int *n1){
    printf("Informe o numero para saber se e divisivel por 5 \n");
    scanf("%d",n1);

}
void processamento13(int *n1,int *resultado){
    *resultado=*n1%5==0;
}

void saida13(int resultado){
    if (resultado){
        printf("O valor e divisivel por 5");
    }else{
        printf("O valor nao e divisivel por 5");
    }
}

void questao13(void){
    int a,b;

    entrada13(&a);
    processamento13(&a,&b);
    saida13(b);
}
