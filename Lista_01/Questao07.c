#include <stdio.h>
#include <stdlib.h>
#include "Questao07.h"

void entrada07(float *ra){
    printf("Informe o valor do raio: \n");
    scanf("%f",ra);

}
void processamento07(float *ra, float *dia, float *peri, float *area, float *vo){
    *dia = (*ra) * 2.0;
    *peri = (2.0*3.14) * (*ra);
    *area = 3.14 * ((*ra)*(*ra));
    *vo = ((4.0*3.14)/3.0) * ((*ra)*(*ra)*(*ra));

}
void saida07(float dia, float peri, float area, float vo){
    printf("O diametro e : %.2f\n", dia);
    printf("O perimetro e : %.2f\n", peri);
    printf("A area e : %.2f\n", area);
    printf("O volume e : %.2f\n", vo);
}
void questao07(void){
    float a,b,c,d,e;

    entrada07(&a);
    processamento07(&a,&b,&c,&d,&e);
    saida07(b,c,d,e);
}
