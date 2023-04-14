#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void iq21(float *a,float *b,float *c){
    printf("digite um numero: \n");
    scanf("%f",a);
    printf("digite 2o numero: \n");
    scanf("%f",b);
    printf("digite o 3o numero: \n");
    scanf("%f",c);
}
void pq21(float *a,float *b,float *c,float *maior, float *medio,float *menor){
    if(*a > *b && *b > *c){
        *maior = *a;
        *medio = *b;
        *menor = *c;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*a,*b,*c);
    }else if(*a > *c && *c > *b){
        *maior = *a;
        *medio = *c;
        *menor = *b;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*a,*c,*b);
    }else if(*b > *a && *a > *c){
        *maior = *b;
        *medio = *a;
        *menor = *c;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*b,*a,*c);
    }else if(*b > *c && *c > *a){
        *maior = *b;
        *medio = *c;
        *menor = *a;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*b,*c,*a);
    }else if(*c > *a && *a > *b){
        *maior = *c;
        *medio = *a;
        *menor = *b;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*c,*a,*b);
    }else if(*c > *b && *b > *a){
        *maior = *c;
        *medio = *b;
        *menor = *a;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*c,*b,*a);
    }else{
        printf("os numero sao iguais: %.2f, %.2f e %.2f\n",*a,*b,*c);
    }
}
void questao21(void){
    float a,b,c,d,e,f;

    iq21(&a,&b,&c);
    pq21(&a,&b,&c,&d,&e,&f);
}
