#include <stdio.h>
#include <stdlib.h>
#include "Questao19.h"

void entrada19(float *l1, float *l2, float *l3){
    printf("Informe o 1o lado do triangulo \n");
    scanf("%f",l1);
    printf("Informe o 2o lado do triangulo \n");
    scanf("%f",l2);
    printf("Informe o 3o lado do triangulo \n");
    scanf("%f",l3);

}
void processamento19(float *l1,float *l2,float *l3){
    if(*l1==*l2 && *l2==*l3){
        printf("E um triangulo equilatero");
    }else if(*l1==*l2 || *l2==*l3 || *l1==*l3){
        printf("E um triangulo isosceles\n");
    }else{
        printf("E um trinagulo escaleno");
    }
}

void questao19(void){
    float a,b,c;

    entrada19(&a,&b,&c);
    processamento19(&a,&b,&c);
}
