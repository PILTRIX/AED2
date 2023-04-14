#include <stdio.h>
#include <stdlib.h>
#include "Questao11.h"

void entrada11(int *numero){
    printf("infome um numero para saber se esta entre 100 e 500 \n");
    scanf("%d",numero);

}
void processamento11(int *numero,int *resultado){
    *resultado= (*numero>=100 && *numero <=500);
}

void saida11(int resultado){
    if(resultado){
        printf("\nO valor digitado esta estre 100 e 500\n");
    }else{
        printf("\nO valor digitado nao esta dentro do intervalo\n");
    }
}

void questao11(void){
    int a,b;

    entrada11(&a);
    processamento11(&a,&b);
    saida11(b);
}
