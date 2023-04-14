#include <stdio.h>
#include <stdlib.h>
#include "Questao20.h"

void entrada20(int *a, int *b, int *c){
    printf("Informe o 1o numero \n");
    scanf("%d",a);
    printf("Informe o 2o numero \n");
    scanf("%d",b);
    printf("Informe o 3o numero \n");
    scanf("%d",c);

}
void processamento20(int *a,int *b,int *c, int *maior){
    if(*a==*b && *b==*c){
        *maior = NULL;
    }else{
        if (*a > *b && *a > *c) {
            *maior = *a;
        }else if (*b > *a && *b > *c) {
            *maior = *b;
        }else {
            *maior = *c;
        }
    }
}

void saida20(int maior){
    if(maior == NULL){
        printf("Numeros identicos");
    }else{
        printf("O maior numero e %d",maior);
    }
}
void questao20(void){
    int a,b,c,d;

    entrada20(&a,&b,&c);
    processamento20(&a,&b,&c,&d);
    saida20(d);
}
