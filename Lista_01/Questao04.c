#include <stdio.h>
#include <stdlib.h>
#include "Questao04.h"

void entrada04(float *santigo,float *percent){
    printf("Informe o valor atual do salario: \n");
    scanf("%f",santigo);
    printf("Informe a porcentagem do aumento: \n");
    scanf("%f",percent);

}
void processamento04(float *santigo,float *percent,float *aumento){
    *aumento=*santigo+((*santigo)*(*percent))/100.0;
}
void saida04(float aumento){
    printf("O valor do novo salario e: %.2f\n", aumento);
}
void questao04(void){
    float a,b,m;

    entrada04(&a,&b);
    processamento04(&a,&b,&m);
    saida04(m);
}
