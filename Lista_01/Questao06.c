#include <stdio.h>
#include <stdlib.h>
#include "Questao06.h"

void entrada06(float *vantigo,float *vnovo){
    printf("Informe o valor antigo do produto: \n");
    scanf("%f",vantigo);
    printf("Informe o novo valor do produto: \n");
    scanf("%f",vnovo);

}
void processamento06(float *vantigo,float *vnovo, float *vpercent){
    *vpercent = ((*vnovo - *vantigo) / *vantigo) * 100;
}
void saida06(float vpercent){
    printf("O salario aumentou em : %.2f\n", vpercent);
}
void questao06(void){
    float a,b,c;

    entrada06(&a,&b);
    processamento06(&a,&b,&c);
    saida06(c);
}
